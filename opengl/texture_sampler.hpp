#pragma once

#include "object.hpp"

namespace opengl
{
    class TextureSampler final : public Object
    {
    public:
        auto    create() noexcept -> void override;
        auto   destroy() noexcept -> void override;

        auto parameter(uint32_t param, int32_t value) const noexcept -> void;

        auto      bind(uint32_t location) const noexcept -> void;
    };
}