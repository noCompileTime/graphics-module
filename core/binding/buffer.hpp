#pragma once

namespace core::binding
{
    enum class buffer : uint32_t
    {
    /*  vertex  */

        camera,
        transform,

    /*  fragment  */

        material,
        light
    };
}