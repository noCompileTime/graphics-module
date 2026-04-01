#pragma once

namespace opengl::functions
{
     using GLDEBUGMESSAGECALLBACK = void(APIENTRY*)(uint32_t source, uint32_t type, uint32_t id, uint32_t severity, int32_t length, const char* message, const void* param);

     using PFNGLDEBUGMESSAGECALLBACKPROC = void(APIENTRY*)(GLDEBUGMESSAGECALLBACK callback, const void* param);
    inline PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;

     using PFNGLDEBUGMESSAGECONTROLPROC = void(APIENTRY*)(uint32_t source, uint32_t type, uint32_t severity, int32_t count, const uint32_t* ids, uint8_t enabled);
    inline PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl;
}