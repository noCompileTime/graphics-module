#pragma once

namespace opengl
{
    class Pipeline
    {
    public:
        static auto  enable(uint32_t flag) noexcept -> void;
        static auto disable(uint32_t flag) noexcept -> void;

        static auto polygon(uint32_t face, uint32_t mode) noexcept -> void;
        static auto   blend(uint32_t src,  uint32_t dst)  noexcept -> void;

        Pipeline() = delete;
    };
}