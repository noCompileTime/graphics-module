#pragma once

namespace opengl
{
    class Commands
    {
    public:
        static auto  clear(uint32_t flags)                            -> void;
        static auto  clear(float r, float g, float b, float a = 1.0f) -> void;

        static auto  draw_vertices(uint32_t primitive, int32_t count, int32_t offset = 0) -> void;
        static auto  draw_elements(uint32_t primitive, int32_t count, int32_t offset = 0) -> void;

        static auto  viewport(int32_t x, int32_t y, int32_t width, int32_t height)        -> void;

        Commands() = delete;
    };
}