#pragma once

namespace opengl::functions
{
     using PFNGLCREATEBUFFERSPROC = void(APIENTRY*)(int32_t n, uint32_t* buffers);
    inline PFNGLCREATEBUFFERSPROC glCreateBuffers;

     using PFNGLDELETEBUFFERSPROC = void(APIENTRY*)(int32_t n, const uint32_t* buffers);
    inline PFNGLDELETEBUFFERSPROC glDeleteBuffers;

     using PFNGLBINDBUFFERPROC = void(APIENTRY*)(uint32_t target, uint32_t buffer);
    inline PFNGLBINDBUFFERPROC glBindBuffer;

     using PFNGLBINDBUFFERBASEPROC = void(APIENTRY*)(uint32_t target, uint32_t index, uint32_t buffer);
    inline PFNGLBINDBUFFERBASEPROC glBindBufferBase;

     using PFNGLBINDBUFFERRANGEPROC = void(APIENTRY*)(uint32_t target, uint32_t index, uint32_t buffer, size_t offset, size_t size);
    inline PFNGLBINDBUFFERRANGEPROC glBindBufferRange;

     using PFNGLBUFFERSTORAGEPROC = void(APIENTRY*)(uint32_t buffer, size_t size, const void* data, uint32_t flags);
    inline PFNGLBUFFERSTORAGEPROC glBufferStorage;

     using PFNGLBUFFERSUBDATAPROC = void(APIENTRY*)(uint32_t buffer, size_t offset, size_t size, const void* data);
    inline PFNGLBUFFERSUBDATAPROC glBufferSubData;

     using PFNGLMAPBUFFERPROC = void*(APIENTRY*)(uint32_t buffer, uint32_t access);
    inline PFNGLMAPBUFFERPROC glMapBuffer;

     using PFNGLUNMAPBUFFERPROC = uint8_t(APIENTRY*)(uint32_t buffer);
    inline PFNGLUNMAPBUFFERPROC glUnmapBuffer;
}