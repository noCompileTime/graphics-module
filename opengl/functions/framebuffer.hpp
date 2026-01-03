#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEFRAMEBUFFERSPROC      = auto(APIENTRY*)(int32_t n,       uint32_t* framebuffers) -> void;
    using  PFNGLDELETEFRAMEBUFFERSPROC      = auto(APIENTRY*)(int32_t n, const uint32_t* framebuffers) -> void;

    using  PFNGLBINDFRAMEBUFFERPROC         = auto(APIENTRY*)(uint32_t target, uint32_t  framebuffer)  -> void;

    using  PFNGLFRAMEBUFFERTEXTUREPROC      = auto(APIENTRY*)(uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level)        -> void;
    using  PFNGLFRAMEBUFFERRENDERBUFFERPROC = auto(APIENTRY*)(uint32_t framebuffer, uint32_t attachment, uint32_t target, uint32_t renderbuffer) -> void;

    using  PFNGLCHECKFRAMEBUFFERSTATUSPROC  = auto(APIENTRY*)(uint32_t framebuffer, uint32_t target) ->  uint32_t;

    inline PFNGLCREATEFRAMEBUFFERSPROC      glCreateFramebuffers;
    inline PFNGLDELETEFRAMEBUFFERSPROC      glDeleteFramebuffers;

    inline PFNGLBINDFRAMEBUFFERPROC         glBindFramebuffer;

    inline PFNGLFRAMEBUFFERTEXTUREPROC      glFramebufferTexture;
    inline PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;

    inline PFNGLCHECKFRAMEBUFFERSTATUSPROC  glCheckFramebufferStatus;
}