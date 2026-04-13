#pragma once

namespace opengl
{
    class Commands
    {
    public:
        static auto clear(std::uint32_t flags)                noexcept -> void;
        static auto clear(float r, float g, float b, float a) noexcept -> void;

        static auto draw_vertices(std::uint32_t primitive, std::int32_t count,                     std::int32_t offset) noexcept -> void;
        static auto draw_elements(std::uint32_t primitive, std::int32_t count, std::uint32_t type, std::int32_t offset) noexcept -> void;

        static auto viewport(int32_t x, int32_t y, int32_t width, int32_t height) noexcept -> void;

    private:
        Commands() = delete;
    };
}