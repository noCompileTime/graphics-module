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

    auto Framebuffer::attach(const Texture& texture, const std::uint32_t attachment, const std::int32_t level) const noexcept -> void
    {
        functions::glFramebufferTexture(_handle, attachment, texture.handle(), level);
    }

    auto Framebuffer::attach(const Renderbuffer& buffer, const std::uint32_t attachment) const noexcept -> void
    {
        functions::glFramebufferRenderbuffer(_handle, attachment, constants::renderbuffer, buffer.handle());
    }

    auto Framebuffer::clear(const float* color, const std::int32_t level) const noexcept -> void
    {
        functions::glClearFramebufferfv(_handle, constants::color, level, color);
    }

    auto Framebuffer::clear(const float depth) const noexcept -> void
    {
        functions::glClearFramebufferfv(_handle, constants::depth, 0, &depth);
    }

    auto Framebuffer::complete() const noexcept -> bool
    {
        return functions::glCheckFramebufferStatus(_handle, constants::framebuffer) == constants::framebuffer_complete;
    }

    auto Framebuffer::bind() const noexcept -> void
    {
        functions::glBindFramebuffer(constants::framebuffer, _handle);
    }
}