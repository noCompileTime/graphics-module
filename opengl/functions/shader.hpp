#pragma once

namespace opengl::functions
{
     using PFNGLCREATEPROGRAMPROC = uint32_t(APIENTRY*)();
    inline PFNGLCREATEPROGRAMPROC glCreateProgram;

     using PFNGLDELETEPROGRAMPROC = void(APIENTRY*)(uint32_t program);
    inline PFNGLDELETEPROGRAMPROC glDeleteProgram;

     using PFNGLUSEPROGRAMPROC = void(APIENTRY*)(uint32_t program);
    inline PFNGLUSEPROGRAMPROC glUseProgram;

     using PFNGLLINKPROGRAMPROC = void(APIENTRY*)(uint32_t program);
    inline PFNGLLINKPROGRAMPROC glLinkProgram;

     using PFNGLATTACHSHADERPROC = void(APIENTRY*)(uint32_t program, uint32_t shader);
    inline PFNGLATTACHSHADERPROC glAttachShader;

     using PFNGLDETACHSHADERPROC = void(APIENTRY*)(uint32_t program, uint32_t shader);
    inline PFNGLDETACHSHADERPROC glDetachShader;
}