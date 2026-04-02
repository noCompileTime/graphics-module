#pragma once

namespace opengl
{
    class Pipeline
    {
    public:
        Pipeline() = delete;

        static auto  enable(std::uint32_t flag) noexcept -> void;
        static auto disable(std::uint32_t flag) noexcept -> void;

        static auto polygon(std::uint32_t face, std::uint32_t mode) noexcept -> void;
    };
}