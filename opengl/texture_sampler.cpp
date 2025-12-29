#include "texture_sampler.hpp"

namespace opengl
{
    auto TextureSampler::create() noexcept -> void
    {
        functions::glCreateSamplers(1, &_handle);
    }

    auto TextureSampler::destroy() noexcept -> void
    {
        functions::glDeleteSamplers(1, &_handle);
    }

    auto TextureSampler::parameter(const uint32_t param, const int32_t value) const -> void
    {
        functions::glSamplerParameteri(_handle, param, value);
    }

    auto TextureSampler::bind(const uint32_t location) const -> void
    {
        functions::glBindSampler(location, _handle);
    }
}