#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEBUFFERSPROC   = auto(APIENTRY*)(int32_t n,       uint32_t* buffers) -> void;
    using  PFNGLDELETEBUFFERSPROC   = auto(APIENTRY*)(int32_t n, const uint32_t* buffers) -> void;

    using  PFNGLBINDBUFFERPROC      = auto(APIENTRY*)(uint32_t target,                 uint32_t buffer)                              -> void;
    using  PFNGLBINDBUFFERBASEPROC  = auto(APIENTRY*)(uint32_t target, uint32_t index, uint32_t buffer)                              -> void;
    using  PFNGLBINDBUFFERRANGEPROC = auto(APIENTRY*)(uint32_t target, uint32_t index, uint32_t buffer, size_t offset, size_t size)  -> void;

    using  PFNGLBUFFERSTORAGEPROC   = auto(APIENTRY*)(uint32_t buffer, size_t size,                const void* data, uint32_t flags) -> void;
    using  PFNGLBUFFERSUBDATAPROC   = auto(APIENTRY*)(uint32_t buffer, size_t offset, size_t size, const void* data)                 -> void;

    inline PFNGLCREATEBUFFERSPROC   glCreateBuffers;
    inline PFNGLDELETEBUFFERSPROC   glDeleteBuffers;

    inline PFNGLBINDBUFFERPROC      glBindBuffer;
    inline PFNGLBINDBUFFERBASEPROC  glBindBufferBase;
    inline PFNGLBINDBUFFERRANGEPROC glBindBufferRange;

    inline PFNGLBUFFERSTORAGEPROC   glBufferStorage;
    inline PFNGLBUFFERSUBDATAPROC   glBufferSubData;
}