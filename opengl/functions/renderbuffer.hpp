#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATERENDERBUFFERSPROC = auto(APIENTRY*)(GLsizei n,       GLuint* renderbuffers) -> void;
    using  PFNGLDELETERENDERBUFFERSPROC = auto(APIENTRY*)(GLsizei n, const GLuint* renderbuffers) -> void;

    inline PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers;
    inline PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
}