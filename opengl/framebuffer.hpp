#pragma once

#include "texture.hpp"

#include "renderbuffer.hpp"

namespace opengl
{
    class Framebuffer final : public Object
    {
    public:
        auto   create() noexcept -> void override;
        auto  destroy() noexcept -> void override;

        auto   attach(const Texture&      texture,      uint32_t attachment, int32_t level) const noexcept -> void;
        auto   attach(const Renderbuffer& renderbuffer, uint32_t attachment)                const noexcept -> void;

        auto    clear(const float* color, int32_t level) const noexcept -> void;
        auto    clear(float depth)                       const noexcept -> void;

        auto complete() const noexcept -> bool; // TODO make this a void? do the assert/warning checking inside?
        auto     bind() const noexcept -> void;
    };
}