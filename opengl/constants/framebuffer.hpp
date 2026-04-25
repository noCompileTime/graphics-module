#pragma once

namespace opengl::constants
{
    constexpr auto         color_attachment0 = 0x8CE0; // TODO maybe have this without 0 or without space
    constexpr auto         depth_attachment  = 0x8D00;
    constexpr auto       stencil_attachment  = 0x8D20;
    constexpr auto depth_stencil_attachment  = 0x821A;

    constexpr auto   framebuffer_complete = 0x8CD5;
    constexpr auto   framebuffer          = 0x8D40;

    constexpr auto   color = 0x1800;
    constexpr auto   depth = 0x1801;
}