#pragma once

namespace opengl::constants
{
    constexpr auto uniform_buffer = 0x8A11;
    constexpr auto   pixel_buffer = 0x88EB;

    constexpr auto dynamic_draw   = 0x0100;
    constexpr auto  static_draw   = 0;

    constexpr auto    read_only   = 0x88B8;
    constexpr auto     map_read   = 0x0001;
}