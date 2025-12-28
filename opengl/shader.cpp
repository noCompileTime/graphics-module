#include "shader.hpp"

namespace opengl
{
    auto Shader::create() -> void
    {
        _handle = functions::glCreateProgram();
    }

    auto Shader::destroy() -> void
    {
        functions::glDeleteProgram(_handle);
    }

    auto Shader::attach(const ShaderStage& stage) const -> void
    {
        functions::glAttachShader(_handle, stage.handle());
    }

    auto Shader::detach(const ShaderStage& stage) const -> void
    {
        functions::glDetachShader(_handle, stage.handle());
    }

    auto Shader::bind() const -> void
    {
        functions::glUseProgram(_handle);
    }

    auto Shader::link() const -> void
    {
        functions::glLinkProgram(_handle);
    }
}