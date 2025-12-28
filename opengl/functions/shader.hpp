#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEPROGRAMPROC = auto(APIENTRY*)()                 -> uint32_t;
    using  PFNGLDELETEPROGRAMPROC = auto(APIENTRY*)(uint32_t program) -> void;

    using  PFNGLUSEPROGRAMPROC    = auto(APIENTRY*)(uint32_t program) -> void;
    using  PFNGLLINKPROGRAMPROC   = auto(APIENTRY*)(uint32_t program) -> void;

    using  PFNGLATTACHSHADERPROC  = auto(APIENTRY*)(uint32_t program, uint32_t shader) -> void;
    using  PFNGLDETACHSHADERPROC  = auto(APIENTRY*)(uint32_t program, uint32_t shader) -> void;

    inline PFNGLCREATEPROGRAMPROC glCreateProgram;
    inline PFNGLDELETEPROGRAMPROC glDeleteProgram;

    inline PFNGLATTACHSHADERPROC  glAttachShader;
    inline PFNGLDETACHSHADERPROC  glDetachShader;

    inline PFNGLUSEPROGRAMPROC    glUseProgram;
    inline PFNGLLINKPROGRAMPROC   glLinkProgram;
}