#include "buffer.hpp"

namespace opengl
{
    auto Buffer::create() -> void
    {
        functions::create_buffers(1, &_handle);
    }

    auto Buffer::destroy() -> void
    {
        functions::delete_buffers(1, &_handle);
    }

    auto Buffer::bind_base(const uint32_t target, const uint32_t location) const -> void
    {
        functions::bind_buffer_base(target, location, _handle);
    }

    auto Buffer::storage(const core::buffer::data& data, const uint32_t flags) const -> void
    {
        functions::buffer_storage(_handle, data.size, data.ptr, flags);
    }

    auto Buffer::update(const core::buffer::data& data, const uint32_t offset) const -> void
    {
        functions::buffer_update(_handle, offset, data.size, data.ptr);
    }
}