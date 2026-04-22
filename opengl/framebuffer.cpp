#include "framebuffer.hpp"

namespace opengl
{
    auto Framebuffer::create() noexcept -> void
    {
        functions::glCreateFramebuffers(1, &_handle);
    }

    auto Framebuffer::destroy() noexcept -> void
    {
        functions::glDeleteFramebuffers(1, &_handle);
    }

    auto Framebuffer::attach(const Texture& texture, const uint32_t attachment, const uint32_t level) const noexcept -> void
    {
        functions::glFramebufferTexture(_handle, attachment, texture.handle(), level);
    }

    auto Framebuffer::status() const noexcept -> uint32_t
    {
        return functions::glCheckFramebufferStatus(_handle, constants::framebuffer);
    }

    auto Framebuffer::bind() const noexcept -> void
    {
        functions::glBindFramebuffer(constants::framebuffer, _handle);
    }
}