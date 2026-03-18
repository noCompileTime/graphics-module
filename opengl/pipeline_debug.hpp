#pragma once

namespace opengl
{
    class PipelineDebug
    {
    public:
        PipelineDebug() = delete;

        static auto init() noexcept -> void;

        static auto polygon_mode(uint32_t mode) noexcept -> void;
    };
}