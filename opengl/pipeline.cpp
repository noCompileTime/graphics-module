#include "pipeline.hpp"

#include "constants/pipeline.hpp"
#include "functions/pipeline.hpp"

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

    auto Pipeline::polygon(const uint32_t mode) noexcept -> void
    {
        functions::glPolygonMode(constants::front_and_back, mode);
    }
}