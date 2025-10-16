#pragma once

#include "object.hpp"

namespace opengl
{
    class ShaderStage final : public Object
    {
    public:
        auto  create()  -> void override;
        auto destroy()  -> void override;

        auto  source(const std::vector<char>& source) const -> void;

        auto    type(uint32_t type) -> void;
    };
}