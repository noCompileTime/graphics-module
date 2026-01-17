#pragma once

namespace opengl::functions
{
    using  PFNGLCREATESAMPLERSPROC    = auto(APIENTRY*)(int32_t n,           uint32_t* samplers) -> void;
    using  PFNGLDELETESAMPLERSPROC    = auto(APIENTRY*)(int32_t count, const uint32_t* samplers) -> void;

    using  PFNGLSAMPLERPARAMETERIPROC = auto(APIENTRY*)(uint32_t sampler, uint32_t name, int32_t param) -> void;

    using  PFNGLBINDSAMPLERPROC       = auto(APIENTRY*)(uint32_t unit, uint32_t sampler) -> void;

    inline PFNGLCREATESAMPLERSPROC    glCreateSamplers;
    inline PFNGLDELETESAMPLERSPROC    glDeleteSamplers;

    inline PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;

    inline PFNGLBINDSAMPLERPROC       glBindSampler;
}