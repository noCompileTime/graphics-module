#pragma once

#include "renderbuffer.hpp"
#include "texture.hpp"

namespace opengl
{
    class Framebuffer final : public Object
    {
    public:
        auto   create() noexcept -> void override;
        auto  destroy() noexcept -> void override;

        // TODO change it to shared_ptr, makes sense to have it this way
        auto   attach(const Texture& texture,     uint32_t attachment, int32_t level) const noexcept -> void;
        auto   attach(const Renderbuffer& buffer, uint32_t attachment)                const noexcept -> void;

        auto    clear(const float* color, int32_t level = 0) const noexcept -> void; // TODO instead of zero create a default_level/layer to be used also for texture
        auto    clear(float depth)                           const noexcept -> void;

        auto complete() const noexcept -> void;
        auto     bind() const noexcept -> void;
    };
}