#pragma once

namespace opengl::functions
{
     using PFNGLCREATESAMPLERSPROC = void(APIENTRY*)(int32_t n, uint32_t* samplers);
    inline PFNGLCREATESAMPLERSPROC glCreateSamplers;

     using PFNGLDELETESAMPLERSPROC = void(APIENTRY*)(int32_t count, const uint32_t* samplers);
    inline PFNGLDELETESAMPLERSPROC glDeleteSamplers;

     using PFNGLSAMPLERPARAMETERIPROC = void(APIENTRY*)(uint32_t sampler, uint32_t name, int32_t param);
    inline PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;

     using PFNGLBINDSAMPLERPROC = void(APIENTRY*)(uint32_t unit, uint32_t sampler);
    inline PFNGLBINDSAMPLERPROC glBindSampler;
}