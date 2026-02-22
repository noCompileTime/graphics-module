#pragma once

namespace opengl::functions
{
    using     GLDEBUGCALLBACKPROC        = auto(APIENTRY*)(uint32_t source, uint32_t type, uint32_t id, uint32_t severity, int32_t length, const uint8_t* message,
                                                                                           const void* param) -> void;
    using  PFNGLDEBUGMESSAGECALLBACKPROC = auto(APIENTRY*)(GLDEBUGCALLBACKPROC callback,   const void* param) -> void;
    inline PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;

    using  PFNGLDEPTHMASKPROC   = auto(APIENTRY*)( uint8_t flag) -> void;
    using  PFNGLDEPTHFUNCPROC   = auto(APIENTRY*)(uint32_t func) -> void;

    using  PFNGLSTENCILMASKPROC = auto(APIENTRY*)(uint32_t mask)                                 -> void;
    using  PFNGLSTENCILFUNCPROC = auto(APIENTRY*)(uint32_t func,  int32_t ref,   uint32_t mask)  -> void;
    using  PFNGLSTENCILOPPROC   = auto(APIENTRY*)(uint32_t fail, uint32_t zfail, uint32_t zpass) -> void;

    using  PFNGLENABLEPROC      = auto(APIENTRY*)(uint32_t cap)  -> void;
    using  PFNGLDISABLEPROC     = auto(APIENTRY*)(uint32_t cap)  -> void;

    inline PFNGLDEPTHMASKPROC   glDepthMask;
    inline PFNGLDEPTHFUNCPROC   glDepthFunc;

    inline PFNGLSTENCILMASKPROC glStencilMask;
    inline PFNGLSTENCILFUNCPROC glStencilFunc;
    inline PFNGLSTENCILOPPROC   glStencilOp;

    inline PFNGLENABLEPROC      glEnable;
    inline PFNGLDISABLEPROC     glDisable;
}