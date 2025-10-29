#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATETEXTURESPROC = auto(APIENTRY*)(GLenum target, GLsizei n, GLuint* textures) -> void;
    using  PFNGLDELETETEXTURESPROC = auto(APIENTRY*)(GLsizei n,          const GLuint* textures) -> void;

    inline PFNGLCREATETEXTURESPROC create_textures;
    inline PFNGLDELETETEXTURESPROC delete_textures;
}