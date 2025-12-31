#pragma once

#include "shader_stage.hpp"

namespace opengl
{
    class Shader final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto attach(const ShaderStage& stage) const noexcept -> void;
        auto detach(const ShaderStage& stage) const noexcept -> void;

        auto bind() const noexcept -> void;
        auto link() const noexcept -> void;
    };
}