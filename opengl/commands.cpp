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

    auto Commands::draw_vertices(const std::uint32_t primitive, const std::int32_t start, const std::int32_t count) noexcept -> void
    {
        functions::glDrawArrays(primitive, start, count);
    }

    auto Commands::draw_elements(const std::uint32_t primitive, const std::int32_t start, const std::int32_t count, const std::uint32_t type) noexcept -> void
    {
        functions::glDrawElements(primitive, count, type, reinterpret_cast<const void*>(start * sizeof(uint32_t))); // TODO here sizeof should be different if the type is not uint32_t
    }

    auto Commands::viewport(const int32_t x, const int32_t y, const int32_t width, const int32_t height) noexcept -> void
    {
        functions::glViewport(x, y, width, height);
    }
}