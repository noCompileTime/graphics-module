#include "functions.hpp"

namespace opengl
{
    auto Functions::init() -> void
    {
              common_functions();

       shader_stages_functions();
              shader_functions();

              buffer_functions();
     texture_sampler_functions();
             texture_functions();

        vertex_array_functions();
    }

    auto Functions::common_functions() -> void
    {
        if (const auto instance = LoadLibrary("opengl32.dll"))
        {
            functions::glClear        = reinterpret_cast<functions::PFNGLCLEARPROC>       (GetProcAddress(instance, "glClear"));
            functions::glClearColor   = reinterpret_cast<functions::PFNGLCLEARCOLORPROC>  (GetProcAddress(instance, "glClearColor"));

            functions::glDrawArrays   = reinterpret_cast<functions::PFNGLDRAWARRAYSPROC>  (GetProcAddress(instance, "glDrawArrays"));
            functions::glDrawElements = reinterpret_cast<functions::PFNGLDRAWELEMENTSPROC>(GetProcAddress(instance, "glDrawElements"));

            functions::glViewport     = reinterpret_cast<functions::PFNGLVIEWPORTPROC>    (GetProcAddress(instance, "glViewport"));

            functions::glEnable       = reinterpret_cast<functions::PFNGLENABLEPROC>(GetProcAddress(instance, "glEnable"));

            FreeLibrary(instance);
        }
    }

    auto Functions::shader_functions() -> void
    {
        functions::glCreateShader     = reinterpret_cast<functions::PFNGLCREATESHADERPROC>(wglGetProcAddress("glCreateShader"));
        functions::glDeleteShader     = reinterpret_cast<functions::PFNGLDELETESHADERPROC>(wglGetProcAddress("glDeleteShader"));

        functions::glSpecializeShader = reinterpret_cast<functions::PFNGLSPECIALIZESHADERPROC>(wglGetProcAddress("glSpecializeShader"));
        functions::glShaderBinary     = reinterpret_cast<functions::PFNGLSHADERBINARYPROC>    (wglGetProcAddress("glShaderBinary"));
    }

    auto Functions::shader_stages_functions() -> void
    {
        functions::glCreateProgram = reinterpret_cast<functions::PFNGLCREATEPROGRAMPROC>(wglGetProcAddress("glCreateProgram"));
        functions::glDeleteProgram = reinterpret_cast<functions::PFNGLDELETEPROGRAMPROC>(wglGetProcAddress("glDeleteProgram"));

        functions::glUseProgram    = reinterpret_cast<functions::PFNGLUSEPROGRAMPROC>   (wglGetProcAddress("glUseProgram"));
        functions::glLinkProgram   = reinterpret_cast<functions::PFNGLLINKPROGRAMPROC>  (wglGetProcAddress("glLinkProgram"));

        functions::glAttachShader  = reinterpret_cast<functions::PFNGLATTACHSHADERPROC> (wglGetProcAddress("glAttachShader"));
        functions::glDetachShader  = reinterpret_cast<functions::PFNGLDETACHSHADERPROC> (wglGetProcAddress("glDetachShader"));
    }

    auto Functions::buffer_functions() -> void
    {
        functions::glCreateBuffers   = reinterpret_cast<functions::PFNGLCREATEBUFFERSPROC>(wglGetProcAddress("glCreateBuffers"));
        functions::glDeleteBuffers   = reinterpret_cast<functions::PFNGLDELETEBUFFERSPROC>(wglGetProcAddress("glDeleteBuffers"));

        functions::glBindBuffer      = reinterpret_cast<functions::PFNGLBINDBUFFERPROC>     (wglGetProcAddress("glBindBuffer"));
        functions::glBindBufferBase  = reinterpret_cast<functions::PFNGLBINDBUFFERBASEPROC> (wglGetProcAddress("glBindBufferBase"));
        functions::glBindBufferRange = reinterpret_cast<functions::PFNGLBINDBUFFERRANGEPROC>(wglGetProcAddress("glBindBufferRange"));

        functions::glBufferStorage   = reinterpret_cast<functions::PFNGLBUFFERSTORAGEPROC>(wglGetProcAddress("glNamedBufferStorage"));
        functions::glBufferSubData   = reinterpret_cast<functions::PFNGLBUFFERSUBDATAPROC>(wglGetProcAddress("glNamedBufferSubData"));
    }

    auto Functions::texture_functions() -> void
    {
        functions::glCreateTextures    = reinterpret_cast<functions::PFNGLCREATETEXTURESPROC>(wglGetProcAddress("glCreateTextures"));
        functions::glDeleteTextures    = reinterpret_cast<functions::PFNGLDELETETEXTURESPROC>(wglGetProcAddress("glDeleteTextures"));

        functions::glTextureStorage2D  = reinterpret_cast<functions::PFNGLTEXTURESTORAGE2DPROC> (wglGetProcAddress("glTextureStorage2D"));
        functions::glTextureSubImage2D = reinterpret_cast<functions::PFNGLTEXTURESUBIMAGE2DPROC>(wglGetProcAddress("glTextureSubImage2D"));

        functions::glBindTextureUnit   = reinterpret_cast<functions::PFNGLBINDTEXTUREUNITPROC>(wglGetProcAddress("glBindTextureUnit"));
    }

    auto Functions::texture_sampler_functions() -> void
    {
        functions::create_samplers    = reinterpret_cast<functions::PFNGLCREATESAMPLERSPROC>(wglGetProcAddress("glCreateSamplers"));
        functions::delete_samplers    = reinterpret_cast<functions::PFNGLDELETESAMPLERSPROC>(wglGetProcAddress("glDeleteSamplers"));

        functions::sampler_parameteri = reinterpret_cast<functions::PFNGLSAMPLERPARAMETERIPROC>(wglGetProcAddress("glSamplerParameteri"));

        functions::bind_sampler       = reinterpret_cast<functions::PFNGLBINDSAMPLERPROC>(wglGetProcAddress("glBindSampler"));
    }

    auto Functions::vertex_array_functions() -> void
    {
        functions::create_vertex_arrays = reinterpret_cast<functions::PFNGLCREATEVERTEXARRAYSPROC>(wglGetProcAddress("glCreateVertexArrays"));
        functions::delete_vertex_arrays = reinterpret_cast<functions::PFNGLDELETEVERTEXARRAYSPROC>(wglGetProcAddress("glDeleteVertexArrays"));
        functions::  bind_vertex_array  = reinterpret_cast<functions::PFNGLBINDVERTEXARRAYPROC>   (wglGetProcAddress("glBindVertexArray"));

        functions::vertex_array_vertices_buffer = reinterpret_cast<functions::PFNGLVERTEXARRAYVERTEXBUFFERPROC> (wglGetProcAddress("glVertexArrayVertexBuffer"));
        functions::vertex_array_elements_buffer = reinterpret_cast<functions::PFNGLVERTEXARRAYELEMENTBUFFERPROC>(wglGetProcAddress("glVertexArrayElementBuffer"));

        functions::vertex_array_attrib_format   = reinterpret_cast<functions::PFNGLVERTEXARRAYATTRIBFORMATPROC> (wglGetProcAddress("glVertexArrayAttribFormat"));
        functions::vertex_array_attrib_binding  = reinterpret_cast<functions::PFNGLVERTEXARRAYATTRIBBINDINGPROC>(wglGetProcAddress("glVertexArrayAttribBinding"));
        functions::vertex_array_attrib_enable   = reinterpret_cast<functions::PFNGLENABLEVERTEXARRAYATTRIBPROC> (wglGetProcAddress("glEnableVertexArrayAttrib"));
    }
}
