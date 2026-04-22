#pragma once

#include "texture.hpp"

namespace opengl
{
    class Framebuffer final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto attach(const Texture& texture, uint32_t attachment, uint32_t level) const noexcept -> void;

        auto status() const noexcept -> uint32_t;
        auto   bind() const noexcept -> void;

        /* TODO implement this instead of glClearColor or glClear

        glClearNamedFramebufferfv(fb, GL_COLOR, 0, rgba);
        glClearNamedFramebufferfv(fb, GL_DEPTH, 0, &depth);

         */
    };
}