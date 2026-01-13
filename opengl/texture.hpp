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

        auto storage(const core::data::image& image, uint32_t format, int32_t levels = 1) const noexcept -> void;
        auto  upload(const core::data::image& image, uint32_t format, int32_t level  = 0) const noexcept -> void;

        auto  bind(uint32_t index) const noexcept -> void;
    };
}