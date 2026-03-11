#pragma once

namespace opengl::functions
{
    using  PFNGLCREATESHADERPROC     = uint32_t(APIENTRY*)(uint32_t type);
    using  PFNGLDELETESHADERPROC     = void(APIENTRY*)(uint32_t shader);

    using  PFNGLSHADERBINARYPROC     = void(APIENTRY*)(int32_t count, const uint32_t* shaders, uint32_t format, const void* binary, int32_t length);
    using  PFNGLSPECIALIZESHADERPROC = void(APIENTRY*)(uint32_t shader, const char* entry, uint32_t constants, const uint32_t* indices, const uint32_t* values);

    inline PFNGLCREATESHADERPROC     glCreateShader;
    inline PFNGLDELETESHADERPROC     glDeleteShader;

    inline PFNGLSHADERBINARYPROC     glShaderBinary;
    inline PFNGLSPECIALIZESHADERPROC glSpecializeShader;
}