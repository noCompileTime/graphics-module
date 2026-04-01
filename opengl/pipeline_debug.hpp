#pragma once

namespace opengl
{
    class PipelineDebug
    {
    public:
        PipelineDebug() = delete;

        static auto enable() noexcept -> void;
    };
}