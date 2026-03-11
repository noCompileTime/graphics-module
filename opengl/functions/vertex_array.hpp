#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEVERTEXARRAYSPROC = void(APIENTRY*)(int32_t n, uint32_t* arrays);
    inline PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays;

    using  PFNGLDELETEVERTEXARRAYSPROC = void(APIENTRY*)(int32_t n, const uint32_t* arrays);
    inline PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

    using  PFNGLVERTEXARRAYVERTEXBUFFERPROC  = void(APIENTRY*)(uint32_t vao, uint32_t index, uint32_t buffer, size_t offset, int32_t stride);
    using  PFNGLVERTEXARRAYELEMENTBUFFERPROC = void(APIENTRY*)(uint32_t vao, uint32_t buffer);

    using  PFNGLVERTEXARRAYATTRIBFORMATPROC  = void(APIENTRY*)(uint32_t vao, uint32_t index,  int32_t size, uint32_t type, uint8_t normalized, uint32_t offset);
    using  PFNGLVERTEXARRAYATTRIBBINDINGPROC = void(APIENTRY*)(uint32_t vao, uint32_t index, uint32_t binding);
    using  PFNGLENABLEVERTEXARRAYATTRIBPROC  = void(APIENTRY*)(uint32_t vao, uint32_t index);

    using  PFNGLBINDVERTEXARRAYPROC = void(APIENTRY*)(uint32_t array);
    inline PFNGLBINDVERTEXARRAYPROC glBindVertexArray;

    inline PFNGLVERTEXARRAYVERTEXBUFFERPROC  glVertexArrayVertexBuffer;
    inline PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer;

    inline PFNGLVERTEXARRAYATTRIBFORMATPROC  glVertexArrayAttribFormat;
    inline PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding;
    inline PFNGLENABLEVERTEXARRAYATTRIBPROC  glEnableVertexArrayAttrib;
}