#pragma once

#include "shader_stage.hpp"

namespace opengl
{
    class Shader final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto  attach(const ShaderStage& stage) const -> void;
        auto  detach(const ShaderStage& stage) const -> void;

        auto  bind() const -> void;
        auto  link() const -> void;
    };
}