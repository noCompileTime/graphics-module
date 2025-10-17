#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATEBUFFERS      = auto(APIENTRY*)(GLsizei n,       GLuint* buffers)           ->  void;
    using  PFNGLDELETEBUFFERS      = auto(APIENTRY*)(GLsizei n, const GLuint* buffers)           ->  void;

    using  PFNGLBINDBUFFERBASEPROC = auto(APIENTRY*)(GLenum target, GLuint index, GLuint buffer) -> void;

    using  PFNGLBUFFERSTORAGEPROC  = auto(APIENTRY*)(GLuint buffer, GLsizeiptr size, const void* data, GLbitfield flags) -> void;

    inline PFNGLCREATEBUFFERS      create_buffers;
    inline PFNGLDELETEBUFFERS      delete_buffers;

    inline PFNGLBINDBUFFERBASEPROC bind_buffer_base;

    inline PFNGLBUFFERSTORAGEPROC  buffer_storage;
}