#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLCREATETEXTURESPROC    = auto(APIENTRY*)(GLenum target, GLsizei n, GLuint* textures) -> void;
    using  PFNGLDELETETEXTURESPROC    = auto(APIENTRY*)(GLsizei n,          const GLuint* textures) -> void;

    using  PFNGLTEXTURESTORAGE2DPROC  = auto(APIENTRY*)(GLuint texture, GLsizei levels, GLenum format, GLsizei width,   GLsizei height)                                                                -> void;
    using  PFNGLTEXTURESUBIMAGE2DPROC = auto(APIENTRY*)(GLuint texture,   GLint level,   GLint xoffset,  GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) -> void;

    using  PFNGLBINDTEXTUREUNITPROC   = auto(APIENTRY*)(GLuint unit, GLuint texture) -> void;

    inline PFNGLCREATETEXTURESPROC    create_textures;
    inline PFNGLDELETETEXTURESPROC    delete_textures;

    inline PFNGLTEXTURESTORAGE2DPROC  texture_storage2d;
    inline PFNGLTEXTURESUBIMAGE2DPROC texture_update2d;

    inline PFNGLBINDTEXTUREUNITPROC   bind_texture_unit;
}