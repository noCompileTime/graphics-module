#include "buffer.hpp"

#include "functions/buffer.hpp"

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

    auto Buffer::storage(const core::buffer::data& data, const uint32_t flags) const -> void
    {
        functions::buffer_storage(_handle, data.size, data.ptr, flags);
    }
}