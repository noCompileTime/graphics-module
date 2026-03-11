#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEPROGRAMPROC = uint32_t(APIENTRY*)();
    using  PFNGLDELETEPROGRAMPROC = void(APIENTRY*)(uint32_t program);

    using  PFNGLUSEPROGRAMPROC    = void(APIENTRY*)(uint32_t program);
    using  PFNGLLINKPROGRAMPROC   = void(APIENTRY*)(uint32_t program);

    using  PFNGLATTACHSHADERPROC  = void(APIENTRY*)(uint32_t program, uint32_t shader);
    using  PFNGLDETACHSHADERPROC  = void(APIENTRY*)(uint32_t program, uint32_t shader);

    inline PFNGLCREATEPROGRAMPROC glCreateProgram;
    inline PFNGLDELETEPROGRAMPROC glDeleteProgram;

    inline PFNGLATTACHSHADERPROC  glAttachShader;
    inline PFNGLDETACHSHADERPROC  glDetachShader;

    inline PFNGLUSEPROGRAMPROC    glUseProgram;
    inline PFNGLLINKPROGRAMPROC   glLinkProgram;
}