#pragma once

#include "object.hpp"

namespace opengl
{
    class Texture final : public Object
    {
    public:
        explicit Texture(uint32_t target);

        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;
                                                            // TODO put this span as a using for texture_data or something?
        auto  upload(uint32_t width, uint32_t height, uint32_t format, uint32_t level, uint32_t type, std::span<const uint8_t> buffer) const noexcept -> void;
        auto storage(uint32_t width, uint32_t height, uint32_t format, uint32_t levels = 1)                                            const noexcept -> void;

        auto    bind(uint32_t index) const noexcept -> void;
    };
}