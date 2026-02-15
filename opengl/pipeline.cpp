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
}