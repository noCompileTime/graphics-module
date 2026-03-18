#include "pipeline_debug.hpp"

namespace opengl
{
    auto PipelineDebug::init() noexcept -> void
    {
        functions::glEnable(constants::debug_output);
        //functions::glEnable(constants::debug_output_synchronous);

        //functions::glDebugMessageControl(constants::dont_care, constants::dont_care, constants::debug_severity_notification, 0, nullptr, false);

        functions::glDebugMessageCallback([](uint32_t /* source   */,
                                             uint32_t /* type     */,
                                             uint32_t /* id       */,
                                             uint32_t /* severity */, int32_t /* length */, const char* message, const void* /* param */) {
            std::println("{}", message);

        }, nullptr);
    }

    auto PipelineDebug::polygon_mode(const uint32_t mode) noexcept -> void
    {
        functions::glPolygonMode(constants::front_and_back, mode);
    }
}