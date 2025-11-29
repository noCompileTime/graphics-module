#pragma once

#include "object.hpp"

namespace opengl
{
    class ShaderStage final : public Object
    {
    public:

    explicit ShaderStage(uint32_t info);

        auto  create()  -> void override;
        auto destroy()  -> void override;

        auto  source(const std::vector<char>& source) const -> void;
    };
}