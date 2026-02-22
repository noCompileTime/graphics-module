#pragma once

namespace opengl::functions
{
    using     GLDEBUGPROC                = auto(APIENTRY*)(uint32_t source, uint32_t type, uint32_t id, uint32_t severity, int32_t length, const uint8_t* message,
                                                                                 const void* param) ->  void;
    using  PFNGLDEBUGMESSAGECALLBACKPROC = auto(APIENTRY*)(GLDEBUGPROC callback, const void* param) ->  void;

    inline PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;
}