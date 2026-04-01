#pragma once

#include "common.hpp"

namespace opengl::constants
{
    constexpr auto   color_buffer = 0x00004000;
    constexpr auto   depth_buffer = 0x00000100;
    constexpr auto stencil_buffer = 0x00000400;

    constexpr auto triangles = 0x0004;
    constexpr auto     lines = 0x0001;
}