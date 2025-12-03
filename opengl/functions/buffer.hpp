#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATEBUFFERSPROC  = auto(APIENTRY*)(int32_t n,       uint32_t* buffers)         -> void;
    using  PFNGLDELETEBUFFERSPROC  = auto(APIENTRY*)(int32_t n, const uint32_t* buffers)         -> void;

    using  PFNGLBINDBUFFERBASEPROC = auto(APIENTRY*)(GLenum target, GLuint index, GLuint buffer) -> void;

    using  PFNGLBUFFERSTORAGEPROC  = auto(APIENTRY*)(GLuint buffer, GLsizeiptr size, const void* data, GLbitfield flags) -> void;
    using  PFNGLBUFFERSUBDATAPROC  = auto(APIENTRY*)(GLuint buffer, GLintptr offset, GLsizeiptr  size, const void* data) -> void;

    inline PFNGLCREATEBUFFERSPROC  glCreateBuffers;
    inline PFNGLDELETEBUFFERSPROC  glDeleteBuffers;

    inline PFNGLBINDBUFFERBASEPROC bind_buffer_base;

    inline PFNGLBUFFERSTORAGEPROC  buffer_storage;
    inline PFNGLBUFFERSUBDATAPROC  buffer_update;
}