#include "sampler.hpp"

namespace opengl
{
    auto Sampler::create() noexcept -> void
    {
        functions::glCreateSamplers(1, &_handle);
    }

    auto Sampler::destroy() noexcept -> void
    {
        functions::glDeleteSamplers(1, &_handle);
    }

    auto Sampler::parameter(const uint32_t param, const int32_t value) const noexcept -> void
    {
        functions::glSamplerParameteri(_handle, param, value);
    }

    auto Sampler::bind(const uint32_t index) const noexcept -> void
    {
        functions::glBindSampler(index, _handle);
    }
}