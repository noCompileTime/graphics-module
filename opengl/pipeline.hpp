#pragma once

namespace opengl
{
    class Pipeline
    {
    public:
        Pipeline() = delete;

        static auto  enable(uint32_t flag) noexcept -> void;
        static auto disable(uint32_t flag) noexcept -> void;

        static auto polygon(uint32_t mode) noexcept -> void;
    };
}