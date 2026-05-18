#include "pipeline.hpp"

namespace opengl
{
    auto Pipeline::enable(const uint32_t flag) noexcept -> void
    {
        functions::glEnable(flag);
    }

    auto Pipeline::disable(const uint32_t flag) noexcept -> void
    {
        functions::glDisable(flag);
    }

    auto Pipeline::polygon(const uint32_t face, const uint32_t mode) noexcept -> void
    {
        functions::glPolygonMode(face, mode);
    }

    auto Pipeline::blend(const uint32_t src, const uint32_t dst) noexcept -> void
    {
        functions::glBlendFunc(src, dst);
    }
}