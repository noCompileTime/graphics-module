#pragma once

namespace opengl::functions
{
     using PFNGLCLEARPROC = void(APIENTRY*)(uint32_t mask);
    inline PFNGLCLEARPROC glClear;

     using PFNGLCLEARCOLORPROC = void(APIENTRY*)(float red, float green, float blue, float alpha);
    inline PFNGLCLEARCOLORPROC glClearColor;

     using PFNGLDRAWARRAYSPROC = void(APIENTRY*)(uint32_t mode, int32_t first, int32_t count);
    inline PFNGLDRAWARRAYSPROC glDrawArrays;

     using PFNGLDRAWELEMENTSPROC = void(APIENTRY*)(uint32_t mode, int32_t count, uint32_t type, const void* indices);
    inline PFNGLDRAWELEMENTSPROC glDrawElements;

     using PFNGLVIEWPORTPROC = void(APIENTRY*)(int32_t x, int32_t y, int32_t width, int32_t height);
    inline PFNGLVIEWPORTPROC glViewport;
}