#pragma once

#include "object.hpp"

namespace opengl
{
    class Texture final : public Object
    {
    public:
        auto  create() -> void override;
        auto destroy() -> void override;

        auto storage(uint32_t width, uint32_t height, uint32_t format, int32_t levels)                  const -> void;
        auto  update(uint32_t width, uint32_t height, uint32_t format, int32_t level, const void* data) const -> void;

        auto    bind(uint32_t location) const -> void;
        auto    type(uint32_t type)           -> void;
    };
}