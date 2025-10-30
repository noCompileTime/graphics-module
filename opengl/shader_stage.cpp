#include           "shader_stage.hpp"
#include "functions/shader.hpp"

namespace opengl
{
    auto ShaderStage::create() -> void
    {
                                    assert(_info != 0);
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

    auto ShaderStage::type(const uint32_t type) -> void
    {
        _info = type;
    }
}