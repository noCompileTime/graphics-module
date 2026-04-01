#include "functions.hpp"

#include "functions/framebuffer.hpp"
#include "functions/shader.hpp"
#include "functions/sampler.hpp"
#include "functions/shader_stage.hpp"
#include "functions/buffer.hpp"
#include "functions/renderbuffer.hpp"
#include "functions/commands.hpp"
#include "functions/pipeline_debug.hpp"

namespace opengl
{
    auto Functions::init() noexcept -> void
    {
              common_functions();

              shader_functions();
       shader_stages_functions();

              buffer_functions();
         framebuffer_functions();
        renderbuffer_functions();
             texture_functions();
             sampler_functions();

        vertex_array_functions();
    }

    auto Functions::common_functions() noexcept -> void
    {
        if (const auto instance = LoadLibrary("opengl32.dll"))
        {
            /* commands */

            functions::glClear        = reinterpret_cast<functions::PFNGLCLEARPROC>       (GetProcAddress(instance, "glClear"));
            functions::glClearColor   = reinterpret_cast<functions::PFNGLCLEARCOLORPROC>  (GetProcAddress(instance, "glClearColor"));

            functions::glDrawArrays   = reinterpret_cast<functions::PFNGLDRAWARRAYSPROC>  (GetProcAddress(instance, "glDrawArrays"));
            functions::glDrawElements = reinterpret_cast<functions::PFNGLDRAWELEMENTSPROC>(GetProcAddress(instance, "glDrawElements"));

            functions::glViewport     = reinterpret_cast<functions::PFNGLVIEWPORTPROC>    (GetProcAddress(instance, "glViewport"));

            /* pipeline */

            functions::glDepthMask    = reinterpret_cast<functions::PFNGLDEPTHMASKPROC>   (GetProcAddress(instance, "glDepthMask"));
            functions::glDepthFunc    = reinterpret_cast<functions::PFNGLDEPTHFUNCPROC>   (GetProcAddress(instance, "glDepthFunc"));

            functions::glBlendFunc    = reinterpret_cast<functions::PFNGLBLENDFUNCPROC>   (GetProcAddress(instance, "glBlendFunc"));

            functions::glStencilMask  = reinterpret_cast<functions::PFNGLSTENCILMASKPROC> (GetProcAddress(instance, "glStencilMask"));
            functions::glStencilFunc  = reinterpret_cast<functions::PFNGLSTENCILFUNCPROC> (GetProcAddress(instance, "glStencilFunc"));
            functions::glStencilOp    = reinterpret_cast<functions::PFNGLSTENCILOPPROC>   (GetProcAddress(instance, "glStencilOp"));

            functions::glPolygonMode  = reinterpret_cast<functions::PFNGLPOLYGONMODEPROC> (GetProcAddress(instance, "glPolygonMode"));

            functions::glEnable       = reinterpret_cast<functions::PFNGLENABLEPROC>      (GetProcAddress(instance, "glEnable"));
            functions::glDisable      = reinterpret_cast<functions::PFNGLDISABLEPROC>     (GetProcAddress(instance, "glDisable"));

            FreeLibrary(instance);
        }

        /* debug */

        functions::glDebugMessageCallback = reinterpret_cast<functions::PFNGLDEBUGMESSAGECALLBACKPROC>(wglGetProcAddress("glDebugMessageCallback"));
        functions::glDebugMessageControl  = reinterpret_cast<functions::PFNGLDEBUGMESSAGECONTROLPROC> (wglGetProcAddress("glDebugMessageControl"));
    }

    auto Functions::shader_stages_functions()  noexcept -> void
    {
        functions::glCreateShader     = reinterpret_cast<functions::PFNGLCREATESHADERPROC>(wglGetProcAddress("glCreateShader"));
        functions::glDeleteShader     = reinterpret_cast<functions::PFNGLDELETESHADERPROC>(wglGetProcAddress("glDeleteShader"));

        functions::glSpecializeShader = reinterpret_cast<functions::PFNGLSPECIALIZESHADERPROC>(wglGetProcAddress("glSpecializeShader"));
        functions::glShaderBinary     = reinterpret_cast<functions::PFNGLSHADERBINARYPROC>    (wglGetProcAddress("glShaderBinary"));
    }

    auto Functions::shader_functions() noexcept -> void
    {
        functions::glCreateProgram = reinterpret_cast<functions::PFNGLCREATEPROGRAMPROC>(wglGetProcAddress("glCreateProgram"));
        functions::glDeleteProgram = reinterpret_cast<functions::PFNGLDELETEPROGRAMPROC>(wglGetProcAddress("glDeleteProgram"));

        functions::glUseProgram    = reinterpret_cast<functions::PFNGLUSEPROGRAMPROC>   (wglGetProcAddress("glUseProgram"));
        functions::glLinkProgram   = reinterpret_cast<functions::PFNGLLINKPROGRAMPROC>  (wglGetProcAddress("glLinkProgram"));

        functions::glAttachShader  = reinterpret_cast<functions::PFNGLATTACHSHADERPROC> (wglGetProcAddress("glAttachShader"));
        functions::glDetachShader  = reinterpret_cast<functions::PFNGLDETACHSHADERPROC> (wglGetProcAddress("glDetachShader"));
    }

    auto Functions::buffer_functions() noexcept -> void
    {
        functions::glCreateBuffers   = reinterpret_cast<functions::PFNGLCREATEBUFFERSPROC>(wglGetProcAddress("glCreateBuffers"));
        functions::glDeleteBuffers   = reinterpret_cast<functions::PFNGLDELETEBUFFERSPROC>(wglGetProcAddress("glDeleteBuffers"));

        functions::glBindBuffer      = reinterpret_cast<functions::PFNGLBINDBUFFERPROC>     (wglGetProcAddress("glBindBuffer"));
        functions::glBindBufferBase  = reinterpret_cast<functions::PFNGLBINDBUFFERBASEPROC> (wglGetProcAddress("glBindBufferBase"));
        functions::glBindBufferRange = reinterpret_cast<functions::PFNGLBINDBUFFERRANGEPROC>(wglGetProcAddress("glBindBufferRange"));

        functions::glBufferStorage   = reinterpret_cast<functions::PFNGLBUFFERSTORAGEPROC>(wglGetProcAddress("glNamedBufferStorage"));
        functions::glBufferSubData   = reinterpret_cast<functions::PFNGLBUFFERSUBDATAPROC>(wglGetProcAddress("glNamedBufferSubData"));
    }

    auto Functions::framebuffer_functions()    noexcept -> void
    {
        functions::glCreateFramebuffers      = reinterpret_cast<functions::PFNGLCREATEFRAMEBUFFERSPROC>(wglGetProcAddress("glCreateFramebuffers"));
        functions::glDeleteFramebuffers      = reinterpret_cast<functions::PFNGLDELETEFRAMEBUFFERSPROC>(wglGetProcAddress("glDeleteFramebuffers"));

        functions::glBindFramebuffer         = reinterpret_cast<functions::PFNGLBINDFRAMEBUFFERPROC>(wglGetProcAddress("glBindFramebuffer"));

        functions::glFramebufferTexture      = reinterpret_cast<functions::PFNGLFRAMEBUFFERTEXTUREPROC>     (wglGetProcAddress("glNamedFramebufferTexture"));
        functions::glFramebufferRenderbuffer = reinterpret_cast<functions::PFNGLFRAMEBUFFERRENDERBUFFERPROC>(wglGetProcAddress("glNamedFramebufferRenderbuffer"));

        functions::glCheckFramebufferStatus  = reinterpret_cast<functions::PFNGLCHECKFRAMEBUFFERSTATUSPROC>(wglGetProcAddress("glCheckNamedFramebufferStatus"));
    }

    auto Functions::renderbuffer_functions() noexcept -> void
    {
        functions::glCreateRenderbuffers = reinterpret_cast<functions::PFNGLCREATERENDERBUFFERSPROC>(wglGetProcAddress("glCreateRenderbuffers"));
        functions::glDeleteRenderbuffers = reinterpret_cast<functions::PFNGLDELETERENDERBUFFERSPROC>(wglGetProcAddress("glDeleteRenderbuffers"));

        functions::glRenderbufferStorage = reinterpret_cast<functions::PFNGLRENDERBUFFERSTORAGEPROC>(wglGetProcAddress("glRenderbufferStorage"));
    }

    auto Functions::texture_functions()  noexcept -> void
    {
        functions::glCreateTextures    = reinterpret_cast<functions::PFNGLCREATETEXTURESPROC>(wglGetProcAddress("glCreateTextures"));
        functions::glDeleteTextures    = reinterpret_cast<functions::PFNGLDELETETEXTURESPROC>(wglGetProcAddress("glDeleteTextures"));

        functions::glTextureStorage2D  = reinterpret_cast<functions::PFNGLTEXTURESTORAGE2DPROC> (wglGetProcAddress("glTextureStorage2D"));
        functions::glTextureSubImage2D = reinterpret_cast<functions::PFNGLTEXTURESUBIMAGE2DPROC>(wglGetProcAddress("glTextureSubImage2D"));

        functions::glBindTextureUnit   = reinterpret_cast<functions::PFNGLBINDTEXTUREUNITPROC>(wglGetProcAddress("glBindTextureUnit"));
    }

    auto Functions::sampler_functions() noexcept -> void
    {
        functions::glCreateSamplers    = reinterpret_cast<functions::PFNGLCREATESAMPLERSPROC>(wglGetProcAddress("glCreateSamplers"));
        functions::glDeleteSamplers    = reinterpret_cast<functions::PFNGLDELETESAMPLERSPROC>(wglGetProcAddress("glDeleteSamplers"));

        functions::glSamplerParameteri = reinterpret_cast<functions::PFNGLSAMPLERPARAMETERIPROC>(wglGetProcAddress("glSamplerParameteri"));
        functions::glBindSampler       = reinterpret_cast<functions::PFNGLBINDSAMPLERPROC>(wglGetProcAddress("glBindSampler"));
    }

    auto Functions::vertex_array_functions()   noexcept -> void
    {
        functions::glCreateVertexArrays        = reinterpret_cast<functions::PFNGLCREATEVERTEXARRAYSPROC>(wglGetProcAddress("glCreateVertexArrays"));
        functions::glDeleteVertexArrays        = reinterpret_cast<functions::PFNGLDELETEVERTEXARRAYSPROC>(wglGetProcAddress("glDeleteVertexArrays"));

        functions::glBindVertexArray           = reinterpret_cast<functions::PFNGLBINDVERTEXARRAYPROC>   (wglGetProcAddress("glBindVertexArray"));

        functions::glVertexArrayVertexBuffer   = reinterpret_cast<functions::PFNGLVERTEXARRAYVERTEXBUFFERPROC> (wglGetProcAddress("glVertexArrayVertexBuffer"));
        functions::glVertexArrayElementBuffer  = reinterpret_cast<functions::PFNGLVERTEXARRAYELEMENTBUFFERPROC>(wglGetProcAddress("glVertexArrayElementBuffer"));

        functions::glVertexArrayAttribFormat   = reinterpret_cast<functions::PFNGLVERTEXARRAYATTRIBFORMATPROC> (wglGetProcAddress("glVertexArrayAttribFormat"));
        functions::glVertexArrayAttribBinding  = reinterpret_cast<functions::PFNGLVERTEXARRAYATTRIBBINDINGPROC>(wglGetProcAddress("glVertexArrayAttribBinding"));
        functions::glEnableVertexArrayAttrib   = reinterpret_cast<functions::PFNGLENABLEVERTEXARRAYATTRIBPROC> (wglGetProcAddress("glEnableVertexArrayAttrib"));
    }
}