#include "commands.hpp"

namespace opengl
{
    auto Commands::draw_vertices(const uint32_t primitive, const int32_t start, const int32_t count) noexcept -> void
    {
        functions::glDrawArrays(primitive, start, count);
    }

    auto Commands::draw_elements(const uint32_t primitive, const int32_t start, const int32_t count) noexcept -> void
    {
        functions::glDrawElements(primitive, count, constants::unsigned_int, reinterpret_cast<const void*>(static_cast<uintptr_t>(start) * sizeof(uint32_t)));
    }

    auto Commands::viewport(const int32_t x, const int32_t y, const int32_t width, const int32_t height) noexcept -> void
    {
        functions::glViewport(x, y, width, height);
    }

    auto Commands::clear(const float r, const float g, const float b, const float a) noexcept -> void
    {
        functions::glClearColor(r, g, b, a);
    }

    auto Commands::clear(const uint32_t flags) noexcept -> void
    {
        functions::glClear(flags);
    }
}