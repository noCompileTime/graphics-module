#pragma once

namespace opengl::functions
{
     using PFNGLCREATERENDERBUFFERSPROC = void(APIENTRY*)(int32_t n, uint32_t* renderbuffers);
    inline PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers;

     using PFNGLDELETERENDERBUFFERSPROC = void(APIENTRY*)(int32_t n, const uint32_t* renderbuffers);
    inline PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;

     using PFNGLRENDERBUFFERSTORAGEPROC = void(APIENTRY*)(uint32_t renderbuffer, uint32_t format, int32_t width, int32_t height);
    inline PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
}