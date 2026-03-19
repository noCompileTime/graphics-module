#pragma once

namespace opengl
{
    class PipelineDebug
    {
    public:
        PipelineDebug() = delete;

        static auto init() noexcept -> void;

        static auto polygon(uint32_t mode) noexcept -> void;
    };
}