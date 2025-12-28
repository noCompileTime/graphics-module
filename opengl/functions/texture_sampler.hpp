#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATESAMPLERSPROC    = auto(APIENTRY*)(GLsizei n,           GLuint* samplers)     -> void;
    using  PFNGLDELETESAMPLERSPROC    = auto(APIENTRY*)(GLsizei count, const GLuint* samplers)     -> void;

    using  PFNGLSAMPLERPARAMETERIPROC = auto(APIENTRY*)(GLuint sampler, GLenum pname, GLint param) -> void;
    using  PFNGLBINDSAMPLERPROC       = auto(APIENTRY*)(GLuint unit,    GLuint sampler)            -> void;

    inline PFNGLCREATESAMPLERSPROC    create_samplers;
    inline PFNGLDELETESAMPLERSPROC    delete_samplers;

    inline PFNGLSAMPLERPARAMETERIPROC sampler_parameteri;

    inline PFNGLBINDSAMPLERPROC       bind_sampler;
}