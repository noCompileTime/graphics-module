#pragma once

namespace opengl
{
    class Commands
    {
    public:
        static auto  clear(uint32_t flags)                     noexcept -> void;
        static auto  clear(float r, float g, float b, float a) noexcept -> void;

        static auto  draw_vertices(uint32_t primitive, int32_t start, int32_t count) noexcept -> void;
        static auto  draw_elements(uint32_t primitive, int32_t start, int32_t count) noexcept -> void;

        static auto  viewport(int32_t x, int32_t y, int32_t width, int32_t height) noexcept -> void;

        Commands() = delete;
    };
}