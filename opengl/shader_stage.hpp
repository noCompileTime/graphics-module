#pragma once

#include "object.hpp"

namespace opengl
{
    class ShaderStage final : public Object
    {
    public:

    explicit ShaderStage(uint32_t  type);

        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto  source(const std::vector<char>& source) const noexcept -> void;
    };
}