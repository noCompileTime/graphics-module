#include "functions.hpp"

namespace opengl
{
    auto Functions::init() -> void
    {
        init_core_functions();

        init_buffer_functions();

        init_vertex_array_functions();
    }

    auto Functions::init_core_functions() -> void
    {
        if (const auto instance    = LoadLibrary("opengl32.dll"))
        {
            functions::clear       = reinterpret_cast<functions::PFNGLCLEARPROC> (GetProcAddress(instance, "glClear"));
            functions::clear_color = reinterpret_cast<functions::PFNGLCLEARCOLOR>(GetProcAddress(instance, "glClearColor"));
        }
    }

    auto Functions::init_buffer_functions() -> void
    {
        functions::create_buffers = reinterpret_cast<functions::PFNGLCREATEBUFFERS>(wglGetProcAddress("glCreateBuffers"));
        functions::delete_buffers = reinterpret_cast<functions::PFNGLDELETEBUFFERS>(wglGetProcAddress("glDeleteBuffers"));

        functions::buffer_storage = reinterpret_cast<functions::PFNGLBUFFERSTORAGEPROC>(wglGetProcAddress("glNamedBufferStorage"));
    }

    auto Functions::init_vertex_array_functions() -> void
    {
        functions::bind_vertex_array            = reinterpret_cast<functions::PFNGLBINDVERTEXARRAYPROC>   (wglGetProcAddress("glBindVertexArray"));

        functions::create_vertex_arrays         = reinterpret_cast<functions::PFNGLCREATEVERTEXARRAYSPROC>(wglGetProcAddress("glCreateVertexArrays"));
        functions::delete_vertex_arrays         = reinterpret_cast<functions::PFNGLDELETEVERTEXARRAYSPROC>(wglGetProcAddress("glDeleteVertexArrays"));

        functions::vertex_array_vertices_buffer = reinterpret_cast<functions::PFNGLVERTEXARRAYVERTEXBUFFERPROC>  (wglGetProcAddress("glVertexArrayVertexBuffer"));
        functions::vertex_array_elements_buffer = reinterpret_cast<functions::PFNGLVERTEXARRAYELEMENTBUFFERPROC> (wglGetProcAddress("glVertexArrayElementBuffer"));

        functions::vertex_array_attrib_format   = reinterpret_cast<functions::PFNGLVERTEXARRAYATTRIBFORMATPROC> (wglGetProcAddress("glVertexArrayAttribFormat"));
        functions::vertex_array_attrib_binding  = reinterpret_cast<functions::PFNGLVERTEXARRAYATTRIBBINDINGPROC>(wglGetProcAddress("glVertexArrayAttribBinding"));
        functions::vertex_array_attrib_enable   = reinterpret_cast<functions::PFNGLENABLEVERTEXARRAYATTRIBPROC> (wglGetProcAddress("glEnableVertexArrayAttrib"));
    }
}