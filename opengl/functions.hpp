#pragma once

namespace opengl
{
    class Functions
    {
    public:
        Functions() = delete;

        static auto init() noexcept -> void;

    private:
        static auto        common_functions() noexcept -> void;

        static auto        shader_functions() noexcept -> void;
        static auto shader_stages_functions() noexcept -> void;

        static auto        buffer_functions() noexcept -> void;
        static auto   framebuffer_functions() noexcept -> void;
        static auto  renderbuffer_functions() noexcept -> void;
        static auto       texture_functions() noexcept -> void;
        static auto       sampler_functions() noexcept -> void;

        static auto  vertex_array_functions() noexcept -> void;
    };
}