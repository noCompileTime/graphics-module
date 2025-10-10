#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCLEARPROC        = auto(APIENTRY*)(GLbitfield mask)                                 -> void;
    using  PFNGLCLEARCOLORPROC   = auto(APIENTRY*)(float red, float green, float blue, float alpha) -> void;

    using  PFNGLDRAWARRAYSPROC   = auto(APIENTRY*)(GLenum mode, GLint first, GLsizei count)                      -> void;
    using  PFNGLDRAWELEMENTSPROC = auto(APIENTRY*)(GLenum mode, GLsizei count, GLenum type, const void* indices) -> void;

    using  PFNGLVIEWPORTPROC     = auto(APIENTRY*)(GLint x, GLint y, GLsizei width, GLsizei height) -> void;

    inline PFNGLCLEARPROC        clear;
    inline PFNGLCLEARCOLORPROC   clear_color;

    inline PFNGLDRAWARRAYSPROC   draw_arrays;
    inline PFNGLDRAWELEMENTSPROC draw_elements;
    inline PFNGLVIEWPORTPROC          viewport;
}