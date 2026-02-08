#include "buffer.hpp"

namespace opengl
{
    auto Buffer::create() noexcept -> void
    {
        functions::glCreateBuffers(1, &_handle);
    }

    auto Buffer::destroy() noexcept -> void
    {
        functions::glDeleteBuffers(1, &_handle);
    }

    auto Buffer::storage(const core::data::buffer& buffer, const uint32_t usage) noexcept -> void
    {
         functions::glBufferStorage(_handle, buffer.size, buffer.ptr, usage);

        _info = buffer.size;
    }

    auto Buffer::upload(const core::data::buffer& buffer, const uint32_t offset) const noexcept -> void
    {
        assert(offset      <= _info);
        assert(buffer.size <= _info - offset);

        functions::glBufferSubData(_handle, offset, buffer.size, buffer.ptr);
    }

    auto Buffer::storage(const uint32_t buffer_size, const uint32_t usage) noexcept -> void
    {
         functions::glBufferStorage(_handle, buffer_size, nullptr, usage);

        _info = buffer_size;
    }

    auto Buffer::bind(const uint32_t target, const uint32_t index) const noexcept -> void
    {
        functions::glBindBufferBase(target, index, _handle);
    }

    auto Buffer::bind(const uint32_t target) const noexcept -> void
    {
        functions::glBindBuffer(target, _handle);
    }
}