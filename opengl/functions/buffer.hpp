#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATEBUFFERS     = auto(APIENTRY*)(GLsizei n,       GLuint* buffers) ->  void;
    using  PFNGLDELETEBUFFERS     = auto(APIENTRY*)(GLsizei n, const GLuint* buffers) ->  void;

    using  PFNGLBUFFERSTORAGEPROC = auto(APIENTRY*)(GLuint buffer, GLsizeiptr size, const void* data, GLbitfield flags) -> void;

    inline PFNGLCREATEBUFFERS     create_buffers;
    inline PFNGLDELETEBUFFERS     delete_buffers;

    inline PFNGLBUFFERSTORAGEPROC buffer_storage;
}