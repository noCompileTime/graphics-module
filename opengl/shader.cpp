#include "shader.hpp"

namespace opengl
{
    auto Shader::create() noexcept -> void
    {
        _handle = functions::glCreateProgram();
    }

    auto Shader::destroy() noexcept -> void
    {
        functions::glDeleteProgram(_handle);
    }

    auto Shader::attach(const ShaderStage& stage) const noexcept -> void
    {
        functions::glAttachShader(_handle, stage.handle());
    }

    auto Shader::detach(const ShaderStage& stage) const noexcept -> void
    {
        functions::glDetachShader(_handle, stage.handle());
    }

    auto Shader::bind() const noexcept -> void
    {
        functions::glUseProgram(_handle);
    }

    auto Shader::link() const noexcept -> void
    {
        functions::glLinkProgram(_handle);
    }
}