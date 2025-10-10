#pragma once

namespace opengl::functions
{
    using  PFNGLCREATEPROGRAMPROC = auto(APIENTRY*)()               -> GLuint;
    using  PFNGLDELETEPROGRAMPROC = auto(APIENTRY*)(GLuint program) -> void;

    using  PFNGLUSEPROGRAMPROC    = auto(APIENTRY*)(GLuint program) -> void;
    using  PFNGLLINKPROGRAMPROC   = auto(APIENTRY*)(GLuint program) -> void;

    using  PFNGLATTACHSHADERPROC  = auto(APIENTRY*)(GLuint program, GLuint shader) -> void;
    using  PFNGLDETACHSHADERPROC  = auto(APIENTRY*)(GLuint program, GLuint shader) -> void;

    inline PFNGLCREATEPROGRAMPROC create_program;
    inline PFNGLDELETEPROGRAMPROC delete_program;

    inline PFNGLUSEPROGRAMPROC      bind_program;
    inline PFNGLLINKPROGRAMPROC     link_program;

    inline PFNGLATTACHSHADERPROC  attach_shader;
    inline PFNGLDETACHSHADERPROC  detach_shader;
}