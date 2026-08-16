#pragma once

namespace core::binding // TODO this should be in the shader modules? because of the bindings in the shaders
{
    enum class buffer : uint32_t
    {
        camera,
        transform,

        material,
        light
    };
}