#include "renderbuffer.hpp"

namespace opengl
{
    auto Renderbuffer::create() noexcept -> void
    {
        functions::glCreateRenderbuffers(1, &_handle);
    }

    auto Renderbuffer::destroy() noexcept -> void
    {
        functions::glDeleteRenderbuffers(1, &_handle);
    }

    auto Renderbuffer::storage(const uint32_t width, const uint32_t height, const uint32_t format) const noexcept -> void
    {
        functions::glRenderbufferStorage(_handle, format, width, height);
    }
}