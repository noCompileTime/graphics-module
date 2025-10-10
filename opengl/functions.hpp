#pragma once

namespace opengl
{
    class Functions
    {
    public:
        static auto init() -> void;

               Functions()  = delete;

    private:
        static auto  common_functions() -> void;

        static auto  shader_functions() -> void;
        static auto program_functions() -> void;

        static auto  buffer_functions() -> void;
        static auto texture_functions() -> void;

        static auto  vertex_array_functions() -> void;
    };
}