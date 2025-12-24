#include "buffer.hpp"

namespace opengl
{
    auto Buffer::create() -> void
    {
        functions::glCreateBuffers(1, &_handle);
    }

    auto Buffer::destroy() -> void
    {
        functions::glDeleteBuffers(1, &_handle);
    }

    auto Buffer::storage(const core::data::buffer& data, const uint32_t usage) const noexcept -> void
    {
        functions::glBufferStorage(_handle, data.size, data.ptr, usage);
    }

    auto Buffer::upload(const core::data::buffer& data, const uint32_t offset) const noexcept -> void
    {
        functions::glBufferSubData(_handle, offset, data.size, data.ptr);
    }

    auto Buffer::bind(const uint32_t target, const uint32_t location) const noexcept -> void
    {
        functions::glBindBufferBase(target, location, _handle);
    }
}