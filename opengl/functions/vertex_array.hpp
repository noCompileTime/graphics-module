#pragma once

namespace opengl::functions
{
     using PFNGLCREATEVERTEXARRAYSPROC = void(APIENTRY*)(int32_t n, uint32_t* arrays);
    inline PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays;

     using PFNGLDELETEVERTEXARRAYSPROC = void(APIENTRY*)(int32_t n, const uint32_t* arrays);
    inline PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

     using PFNGLVERTEXARRAYVERTEXBUFFERPROC  = void(APIENTRY*)(uint32_t vao, uint32_t index, uint32_t buffer, size_t offset, int32_t stride);
    inline PFNGLVERTEXARRAYVERTEXBUFFERPROC  glVertexArrayVertexBuffer;

     using PFNGLVERTEXARRAYELEMENTBUFFERPROC = void(APIENTRY*)(uint32_t vao, uint32_t buffer);
    inline PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer;

     using PFNGLVERTEXARRAYATTRIBFORMATPROC = void(APIENTRY*)(uint32_t vao, uint32_t index, uint32_t size, uint32_t type, uint8_t normalized, uint32_t offset);
    inline PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat;

     using PFNGLVERTEXARRAYATTRIBBINDINGPROC = void(APIENTRY*)(uint32_t vao, uint32_t index, uint32_t binding);
    inline PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding;

     using PFNGLENABLEVERTEXARRAYATTRIBPROC  = void(APIENTRY*)(uint32_t vao, uint32_t index);
    inline PFNGLENABLEVERTEXARRAYATTRIBPROC  glEnableVertexArrayAttrib;

     using PFNGLBINDVERTEXARRAYPROC = void(APIENTRY*)(uint32_t array);
    inline PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
}