#include "texture_sampler.hpp"

namespace opengl
{
    auto TextureSampler::create() -> void
    {
        functions::create_samplers(1, &_handle);
    }

    auto TextureSampler::destroy() -> void
    {
        functions::delete_samplers(1, &_handle);
    }

    auto TextureSampler::parameter(const uint32_t param, const int32_t value) const -> void
    {
        functions::sampler_parameteri(_handle, param, value);
    }

    auto TextureSampler::bind(const uint32_t location) const -> void
    {
        functions::bind_sampler(location, _handle);
    }
}