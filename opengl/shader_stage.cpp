#include "shader_stage.hpp"

namespace opengl
{
    ShaderStage::ShaderStage(const uint32_t info)
        : Object { info }
    {
    }

    auto ShaderStage::create() -> void
    {
        _handle = functions::glCreateShader(_info);
    }

    auto ShaderStage::destroy() -> void
    {
        functions::glDeleteShader(_handle);
    }

    auto ShaderStage::source(const std::vector<char>& source) const -> void
    {
        functions::glShaderBinary(1, &_handle, constants::spirv_binary_format, source.data(), source.size());
        functions::glSpecializeShader(_handle, "main", 0, nullptr, nullptr);
    }
}