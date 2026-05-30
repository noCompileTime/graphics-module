#include "shader_stage.hpp"

namespace opengl
{
    ShaderStage::ShaderStage(const uint32_t type)
        : Object { type }
    {
    }

    auto ShaderStage::create() noexcept -> void
    {
        _handle = functions::glCreateShader(_info);
    }

    auto ShaderStage::destroy() noexcept -> void
    {
        functions::glDeleteShader(_handle);
    }

    auto ShaderStage::source(const std::span<const std::byte> source) const noexcept -> void
    {
        functions::glShaderBinary(1, &_handle, constants::binary_format, source.data(), source.size());
        functions::glSpecializeShader(_handle, "main", 0, nullptr, nullptr);
    }
}