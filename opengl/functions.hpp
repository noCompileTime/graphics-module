#pragma once

namespace opengl
{
    class Functions
    {
    public:
        Functions() = delete;

        static auto init() -> void;

    private:
        static auto          common_functions() -> void;

        static auto          shader_functions() -> void;
        static auto   shader_stages_functions() -> void;

        static auto          buffer_functions() -> void;
        static auto         texture_functions() -> void;
        static auto texture_sampler_functions() -> void;

        static auto    vertex_array_functions() -> void;
    };
}