#include           "shader.hpp"
#include "functions/shader.hpp"

namespace opengl
{
    auto Shader::create() -> void
    {
        _handle = functions::create_program();
    }

    auto Shader::destroy() -> void
    {
        functions::delete_program(_handle);
    }

    auto Shader::attach(const ShaderStage& stage) const -> void
    {
        functions::attach_shader(_handle, stage.handle());
    }

    auto Shader::detach(const ShaderStage& stage) const -> void
    {
        functions::detach_shader(_handle, stage.handle());
    }

    auto Shader::link() const -> void
    {
        functions::link_program(_handle);
    }

    auto Shader::bind() const -> void
    {
        functions::bind_program(_handle);
    }
}