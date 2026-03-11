#pragma once

namespace opengl::functions
{
     using PFNGLCREATEFRAMEBUFFERSPROC = void(APIENTRY*)(int32_t n, uint32_t* framebuffers);
    inline PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers;

     using PFNGLDELETEFRAMEBUFFERSPROC = void(APIENTRY*)(int32_t n, const uint32_t* framebuffers);
    inline PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;

     using PFNGLBINDFRAMEBUFFERPROC = void(APIENTRY*)(uint32_t target, uint32_t  framebuffer);
    inline PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;

     using PFNGLFRAMEBUFFERTEXTUREPROC = void(APIENTRY*)(uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level);
    inline PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;

     using PFNGLFRAMEBUFFERRENDERBUFFERPROC = void(APIENTRY*)(uint32_t framebuffer, uint32_t attachment, uint32_t target, uint32_t renderbuffer);
    inline PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;

     using PFNGLCHECKFRAMEBUFFERSTATUSPROC = uint32_t(APIENTRY*)(uint32_t framebuffer, uint32_t target);
    inline PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
}