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

        auto storage(uint32_t width, uint32_t height, uint32_t format, int32_t levels = 1)              const noexcept -> void;
        auto  upload(uint32_t width, uint32_t height, uint32_t format, int32_t level, const void* data) const noexcept -> void;

        auto    bind(uint32_t index) const noexcept -> void;
    };
}