#include "commands.hpp"

namespace opengl
{
    auto Commands::clear(const uint32_t flags) noexcept -> void
    {
        functions::glClear(flags);
    }

    auto Commands::clear(const float r, const float g, const float b, const float a) noexcept -> void
    {
        functions::glClearColor(r, g, b, a);
    }

    auto Commands::draw_vertices(const uint32_t primitive, const int32_t count, const int32_t offset) noexcept -> void
    {
        functions::glDrawArrays(primitive, offset, count);
    }

    auto Commands::draw_elements(const uint32_t primitive, const int32_t count, const uint32_t type, const int32_t offset) noexcept -> void
    {
        functions::glDrawElements(primitive, count, type, reinterpret_cast<const void*>(offset * sizeof(uint32_t)));
    }

    auto Commands::viewport(const int32_t x, const int32_t y, const int32_t width, const int32_t height) noexcept -> void
    {
        functions::glViewport(x, y, width, height);
    }
}