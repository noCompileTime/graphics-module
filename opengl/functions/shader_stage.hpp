#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATESHADERPROC     = auto(APIENTRY*)(uint32_t type)   -> uint32_t;
    using  PFNGLDELETESHADERPROC     = auto(APIENTRY*)(uint32_t shader) -> void;

    using  PFNGLSHADERBINARYPROC     = auto(APIENTRY*)(GLsizei count, const GLuint* shaders,   GLenum format,    const void* binary, GLsizei length)                         -> void;
    using  PFNGLSPECIALIZESHADERPROC = auto(APIENTRY*)(GLuint shader, const char* entry_point, GLuint constants, const GLuint* constant_index, const GLuint* constant_value) -> void;

    inline PFNGLCREATESHADERPROC     create_shader;
    inline PFNGLDELETESHADERPROC     delete_shader;

    inline PFNGLSPECIALIZESHADERPROC shader_specialize;
    inline PFNGLSHADERBINARYPROC     shader_binary;
}