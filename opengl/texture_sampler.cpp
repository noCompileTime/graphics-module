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

    auto TextureSampler::parameter(const uint32_t parameter, const int32_t value) const noexcept -> void
    {
        functions::glSamplerParameteri(_handle, parameter, value);
    }

    auto TextureSampler::bind(const uint32_t location) const noexcept -> void
    {
        functions::glBindSampler(location, _handle);
    }
}