#include "shader_stage.hpp"

namespace opengl
{
    ShaderStage::ShaderStage(const uint32_t info)
        : Object { info }
    {
    }

    auto ShaderStage::create() -> void
    {
        _handle = functions::create_shader(_info);
    }

    auto ShaderStage::destroy() -> void
    {
        functions::delete_shader(_handle);
    }

    auto ShaderStage::source(const std::vector<char>& source) const -> void
    {
        functions::shader_binary(1, &_handle, constants::binary_format,  source.data(), source.size());
        functions::shader_specialize(_handle, "main", 0, nullptr, nullptr);
    }
}