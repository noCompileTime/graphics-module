#pragma once

namespace opengl::constants
{
    constexpr auto debug_output                = 0x92E0;
    constexpr auto debug_output_synchronous    = 0x8242;
    constexpr auto debug_severity_notification = 0x826B;

    constexpr auto front_and_back = 0x0408; // TODO mode this to pipeline

    constexpr auto fill_mode = 0x1B02; // TODO mode this to pipeline
    constexpr auto line_mode = 0x1B01; // TODO mode this to pipeline

    constexpr auto dont_care = 0x1100;
}