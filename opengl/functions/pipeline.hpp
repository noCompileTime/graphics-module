#pragma once

namespace opengl::functions
{
     using PFNGLDEPTHMASKPROC = void(APIENTRY*)(uint8_t flag);
    inline PFNGLDEPTHMASKPROC glDepthMask;

     using PFNGLDEPTHFUNCPROC = void(APIENTRY*)(uint32_t func);
    inline PFNGLDEPTHFUNCPROC glDepthFunc;

     using PFNGLSTENCILMASKPROC = void(APIENTRY*)(uint32_t mask);
    inline PFNGLSTENCILMASKPROC glStencilMask;

     using PFNGLSTENCILFUNCPROC = void(APIENTRY*)(uint32_t func, int32_t ref, uint32_t mask);
    inline PFNGLSTENCILFUNCPROC glStencilFunc;

     using PFNGLSTENCILOPPROC = void(APIENTRY*)(uint32_t fail, uint32_t zfail, uint32_t zpass);
    inline PFNGLSTENCILOPPROC glStencilOp;

     using PFNGLPOLYGONMODEPROC = void(APIENTRY*)(uint32_t face, uint32_t mode);
    inline PFNGLPOLYGONMODEPROC glPolygonMode;

     using PFNGLENABLEPROC = void(APIENTRY*)(uint32_t cap);
    inline PFNGLENABLEPROC glEnable;

     using PFNGLDISABLEPROC = void(APIENTRY*)(uint32_t cap);
    inline PFNGLDISABLEPROC glDisable;
}