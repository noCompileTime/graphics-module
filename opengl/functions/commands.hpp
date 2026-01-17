#pragma once

namespace opengl::functions
{
    using  PFNGLCLEARPROC        = auto(APIENTRY*)(uint32_t mask)                                   -> void;
    using  PFNGLCLEARCOLORPROC   = auto(APIENTRY*)(float red, float green, float blue, float alpha) -> void;

    using  PFNGLDRAWARRAYSPROC   = auto(APIENTRY*)(uint32_t mode, int32_t first,  int32_t count)                      -> void;
    using  PFNGLDRAWELEMENTSPROC = auto(APIENTRY*)(uint32_t mode, int32_t count, uint32_t  type, const void* indices) -> void;

    using  PFNGLVIEWPORTPROC     = auto(APIENTRY*)(int32_t x, int32_t y, int32_t width, int32_t height) -> void;

    inline PFNGLCLEARPROC        glClear;
    inline PFNGLCLEARCOLORPROC   glClearColor;

    inline PFNGLDRAWARRAYSPROC   glDrawArrays;
    inline PFNGLDRAWELEMENTSPROC glDrawElements;

    inline PFNGLVIEWPORTPROC     glViewport;
}