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

        auto  upload(int32_t x,     int32_t y,                                                     // TODO put this span as a using for texture_data or something?
                     int32_t width, int32_t height, uint32_t format, int32_t level, uint32_t type, std::span<const uint8_t> buffer) const noexcept -> void;
        auto storage(int32_t width, int32_t height, uint32_t format, int32_t levels)                                                const noexcept -> void;

        auto bind(uint32_t index) const noexcept -> void;
    };
}