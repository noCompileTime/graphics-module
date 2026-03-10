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

        auto storage(int32_t width, int32_t height, uint32_t format, int32_t levels)                                 const noexcept -> void;
        auto  upload(int32_t width, int32_t height, uint32_t format, int32_t level, std::span<const uint8_t> buffer) const noexcept -> void;

        auto  bind(uint32_t index) const noexcept -> void;
    };
}