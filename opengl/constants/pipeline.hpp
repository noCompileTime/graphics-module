#pragma once

namespace opengl::constants
{
    constexpr auto one_minus_src_alpha = 0x0303;
    constexpr auto           src_alpha = 0x0302;

    constexpr auto   blend_mode = 0x0BE2;

    constexpr auto    cull_test = 0x0B44;
    constexpr auto   depth_test = 0x0B71;
    constexpr auto stencil_test = 0x0B90;

    constexpr auto always       = 0x0207;
    constexpr auto replace      = 0x1E01;
    constexpr auto keep         = 0x1E00;
    constexpr auto not_equal    = 0x0205;
    constexpr auto less         = 0x0201;
}