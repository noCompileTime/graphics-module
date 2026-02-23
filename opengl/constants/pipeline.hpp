#pragma once

namespace opengl::constants
{
    constexpr auto      cull_face = 0x0B44;

    constexpr auto     depth_test = 0x0B71;
    constexpr auto   stencil_test = 0x0B90;

    constexpr auto    always      = 0x0207;
    constexpr auto    replace     = 0x1E01;
    constexpr auto   notequal     = 0x0205;
    constexpr auto     keep       = 0x1E00;
    constexpr auto     less       = 0x0201;

    constexpr auto front_and_back = 0x0408;
    constexpr auto      fill_mode = 0x1B02;
    constexpr auto      line_mode = 0x1B01;

    /* debug */

    constexpr auto  debug_output             = 0x92E0;
    constexpr auto  debug_output_synchronous = 0x8242;
}