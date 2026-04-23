#pragma once

namespace opengl
{
    class PipelineDebug
    {
    public:
        static auto enable()                       noexcept -> void;
        static auto enable(std::uint32_t severity) noexcept -> void;

        PipelineDebug() = delete;
    };
}