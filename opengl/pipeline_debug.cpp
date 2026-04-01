#include "pipeline_debug.hpp"

namespace opengl
{
    auto PipelineDebug::enable() noexcept -> void
    {
        functions::glDebugMessageCallback([](uint32_t /* source   */,
                                             uint32_t /* type     */,
                                             uint32_t /* id       */,
                                             uint32_t /* severity */, int32_t /* length */, const char* message, const void* /* param */) {
            std::println("{}", message);

        }, nullptr);
    }
}