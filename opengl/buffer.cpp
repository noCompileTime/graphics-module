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

    auto Buffer::storage(const core::buffer::data& data, const uint32_t usage) const -> void
    {
        functions::buffer_storage(_handle, data.size, data.ptr, usage);
    }

    auto Buffer::upload(const core::buffer::data& data, const uint32_t offset) const -> void
    {
        functions::buffer_update(_handle, offset, data.size, data.ptr);
    }

    auto Buffer::bind(const uint32_t target, const uint32_t location) const -> void
    {
        functions::bind_buffer_base(target, location, _handle);
    }
}