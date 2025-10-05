#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEVERTEXARRAYSPROC       = auto(APIENTRY*)(GLsizei n,       GLuint* arrays) -> void;
    using  PFNGLDELETEVERTEXARRAYSPROC       = auto(APIENTRY*)(GLsizei n, const GLuint* arrays) -> void;
    using  PFNGLBINDVERTEXARRAYPROC          = auto(APIENTRY*)(GLuint array)                    -> void;

    using  PFNGLVERTEXARRAYVERTEXBUFFERPROC  = auto(APIENTRY*)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) -> void;
    using  PFNGLVERTEXARRAYELEMENTBUFFERPROC = auto(APIENTRY*)(GLuint vaobj, GLuint buffer)                                                       -> void;

    using  PFNGLVERTEXARRAYATTRIBFORMATPROC  = auto(APIENTRY*)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) -> void;
    using  PFNGLVERTEXARRAYATTRIBBINDINGPROC = auto(APIENTRY*)(GLuint vaobj, GLuint attribindex, GLuint bindingindex)                                                  -> void;
    using  PFNGLENABLEVERTEXARRAYATTRIBPROC  = auto(APIENTRY*)(GLuint vaobj, GLuint index)                                                                             -> void;

    inline PFNGLCREATEVERTEXARRAYSPROC     create_vertex_arrays;
    inline PFNGLDELETEVERTEXARRAYSPROC     delete_vertex_arrays;
    inline PFNGLBINDVERTEXARRAYPROC          bind_vertex_array;

    inline PFNGLVERTEXARRAYVERTEXBUFFERPROC  vertex_array_vertices_buffer;
    inline PFNGLVERTEXARRAYELEMENTBUFFERPROC vertex_array_elements_buffer;

    inline PFNGLVERTEXARRAYATTRIBFORMATPROC  vertex_array_attrib_format;
    inline PFNGLVERTEXARRAYATTRIBBINDINGPROC vertex_array_attrib_binding;
    inline PFNGLENABLEVERTEXARRAYATTRIBPROC  vertex_array_attrib_enable;
}