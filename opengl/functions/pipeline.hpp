#pragma once

namespace opengl::functions
{
    using  PFNGLDEPTHMASKPROC   = auto(APIENTRY*)( uint8_t flag) -> void;
    using  PFNGLDEPTHFUNCPROC   = auto(APIENTRY*)(uint32_t func) -> void;

    using  PFNGLSTENCILMASKPROC = auto(APIENTRY*)(uint32_t mask)                                 -> void;
    using  PFNGLSTENCILFUNCPROC = auto(APIENTRY*)(uint32_t func,  int32_t ref,   uint32_t mask)  -> void;
    using  PFNGLSTENCILOPPROC   = auto(APIENTRY*)(uint32_t fail, uint32_t zfail, uint32_t zpass) -> void;

    using  PFNGLPOLYGONMODEPROC = auto(APIENTRY*)(uint32_t face, uint32_t mode) -> void;

    using  PFNGLENABLEPROC      = auto(APIENTRY*)(uint32_t cap)  -> void;
    using  PFNGLDISABLEPROC     = auto(APIENTRY*)(uint32_t cap)  -> void;

    inline PFNGLDEPTHMASKPROC   glDepthMask;
    inline PFNGLDEPTHFUNCPROC   glDepthFunc;

    inline PFNGLSTENCILMASKPROC glStencilMask;
    inline PFNGLSTENCILFUNCPROC glStencilFunc;
    inline PFNGLSTENCILOPPROC   glStencilOp;

    inline PFNGLPOLYGONMODEPROC glPolygonMode;

    inline PFNGLENABLEPROC      glEnable;
    inline PFNGLDISABLEPROC     glDisable;
}