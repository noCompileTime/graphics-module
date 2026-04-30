#pragma once

#include "object.hpp"

namespace opengl
{
    class Renderbuffer final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto storage(uint32_t width, uint32_t height, uint32_t format) const noexcept -> void;
    };
}