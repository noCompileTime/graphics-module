#pragma once

#include "object.hpp"

namespace opengl
{
    class TextureSampler final : public Object
    {
    public:
        auto    create() -> void override;
        auto   destroy() -> void override;

        auto parameter(uint32_t param, int32_t value) const -> void;

        auto      bind(uint32_t location) const -> void;
    };
}