#include "commands.hpp"

namespace opengl
{
    auto Commands::clear(const uint32_t flags) -> void
    {
        functions::clear(flags);
    }

    auto Commands::clear(const float r, const float g, const float b, const float a) -> void
    {
        functions::clear_color(r, g, b, a);
    }

    auto Commands::draw_vertices(const uint32_t primitive, const int32_t count, const int32_t offset) -> void
    {
        functions::draw_arrays(primitive, offset, count);
    }

    auto Commands::draw_elements(const uint32_t primitive, const int32_t count, const int32_t offset) -> void
    {
        functions::draw_elements(primitive, count, constants::uint32_type, reinterpret_cast<const void*>(offset * sizeof(uint32_t)));
    }

    auto Commands::viewport(const int32_t x, const int32_t y, const int32_t width, const int32_t height) -> void
    {
        functions::viewport(x, y, width, height);
    }
}