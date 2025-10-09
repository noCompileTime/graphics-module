#pragma once

namespace opengl::functions
{
    using  PFNGLCREATESHADERPROC     = auto(APIENTRY*)(GLenum type)   -> GLuint;
    using  PFNGLDELETESHADERPROC     = auto(APIENTRY*)(GLuint shader) -> void;

    using  PFNGLSHADERBINARYPROC     = auto(APIENTRY*)(GLsizei count, const GLuint* shaders, GLenum format, const void* binary, GLsizei length)                              -> void;
    using  PFNGLSPECIALIZESHADERPROC = auto(APIENTRY*)(GLuint shader, const char* entry_point, GLuint constants, const GLuint* constant_index, const GLuint* constant_value) -> void;

    inline PFNGLCREATESHADERPROC         create_shader;
    inline PFNGLDELETESHADERPROC         delete_shader;

    inline PFNGLSPECIALIZESHADERPROC specialize_shader;
    inline PFNGLSHADERBINARYPROC         shader_binary;
}