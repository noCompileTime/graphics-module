#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEVERTEXARRAYSPROC = auto(APIENTRY*)(int32_t n, uint32_t* arrays) -> void;
    inline PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays;

    using  PFNGLDELETEVERTEXARRAYSPROC = auto(APIENTRY*)(int32_t n, const uint32_t* arrays) -> void;
    inline PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

    using  PFNGLVERTEXARRAYVERTEXBUFFERPROC  = auto(APIENTRY*)(uint32_t vao, uint32_t index, uint32_t buffer, size_t offset, int32_t stride) -> void;
    using  PFNGLVERTEXARRAYELEMENTBUFFERPROC = auto(APIENTRY*)(uint32_t vao, uint32_t buffer)                                                -> void;

    using  PFNGLVERTEXARRAYATTRIBFORMATPROC  = auto(APIENTRY*)(uint32_t vao, uint32_t index,  int32_t size, uint32_t type, uint8_t normalized, uint32_t offset) -> void;
    using  PFNGLVERTEXARRAYATTRIBBINDINGPROC = auto(APIENTRY*)(uint32_t vao, uint32_t index, uint32_t binding)                                                  -> void;
    using  PFNGLENABLEVERTEXARRAYATTRIBPROC  = auto(APIENTRY*)(uint32_t vao, uint32_t index)                                                                    -> void;

    using  PFNGLBINDVERTEXARRAYPROC = auto(APIENTRY*)(uint32_t array) -> void;
    inline PFNGLBINDVERTEXARRAYPROC glBindVertexArray;

    inline PFNGLVERTEXARRAYVERTEXBUFFERPROC  glVertexArrayVertexBuffer;
    inline PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer;

    inline PFNGLVERTEXARRAYATTRIBFORMATPROC  glVertexArrayAttribFormat;
    inline PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding;
    inline PFNGLENABLEVERTEXARRAYATTRIBPROC  glEnableVertexArrayAttrib;
}