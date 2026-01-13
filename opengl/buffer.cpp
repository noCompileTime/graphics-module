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

    auto Buffer::storage(const core::data::buffer& buffer, const uint32_t usage) const noexcept -> void
    {
        functions::glBufferStorage(_handle, buffer.size, buffer.ptr, usage);
    }

    auto Buffer::upload(const core::data::buffer& buffer, const uint32_t offset) const noexcept -> void
    {
        functions::glBufferSubData(_handle, offset, buffer.size, buffer.ptr);
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