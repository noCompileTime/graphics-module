#pragma once

namespace opengl::functions
{
    using     GLDEBUGMESSAGECALLBACK     = auto(APIENTRY*)(uint32_t source, uint32_t type,  uint32_t id, uint32_t  severity, int32_t length, const char* message,
                                                                                            const void*  param) -> void;
    using  PFNGLDEBUGMESSAGECALLBACKPROC = auto(APIENTRY*)(GLDEBUGMESSAGECALLBACK callback, const void*  param) -> void;
    using  PFNGLDEBUGMESSAGECONTROLPROC  = auto(APIENTRY*)(uint32_t source, uint32_t type,  uint32_t severity, int32_t count, const uint32_t* ids, uint8_t enabled) -> void;

    inline PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;
    inline PFNGLDEBUGMESSAGECONTROLPROC  glDebugMessageControl;
}