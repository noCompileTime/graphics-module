#pragma once

namespace opengl::functions
{
    using  PFNGLCREATERENDERBUFFERSPROC = auto(APIENTRY*)(int32_t n,       uint32_t* renderbuffers) -> void;
    using  PFNGLDELETERENDERBUFFERSPROC = auto(APIENTRY*)(int32_t n, const uint32_t* renderbuffers) -> void;

    using  PFNGLRENDERBUFFERSTORAGEPROC = auto(APIENTRY*)(uint32_t renderbuffer, uint32_t format, int32_t width, int32_t height) -> void;

    inline PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers;
    inline PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;

    inline PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
}