#pragma once

namespace opengl::functions
{
    using  PFNGLCREATESHADERPROC     = auto(APIENTRY*)(uint32_t   type) -> uint32_t;
    using  PFNGLDELETESHADERPROC     = auto(APIENTRY*)(uint32_t shader) -> void;

    using  PFNGLSHADERBINARYPROC     = auto(APIENTRY*)(int32_t count, const uint32_t* shaders, uint32_t format, const void* binary, int32_t length) -> void;
    using  PFNGLSPECIALIZESHADERPROC = auto(APIENTRY*)(uint32_t shader, const char* entry, uint32_t constants, const uint32_t* indices, const uint32_t* values) -> void;

    inline PFNGLCREATESHADERPROC     glCreateShader;
    inline PFNGLDELETESHADERPROC     glDeleteShader;

    inline PFNGLSHADERBINARYPROC     glShaderBinary;
    inline PFNGLSPECIALIZESHADERPROC glSpecializeShader;
}