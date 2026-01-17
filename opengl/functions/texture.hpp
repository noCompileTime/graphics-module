#pragma once

namespace opengl::functions
{
    using  PFNGLCREATETEXTURESPROC    = auto(APIENTRY*)(uint32_t target, int32_t n, uint32_t* textures) -> void;
    using  PFNGLDELETETEXTURESPROC    = auto(APIENTRY*)( int32_t n,           const uint32_t* textures) -> void;

    using  PFNGLTEXTURESTORAGE2DPROC  = auto(APIENTRY*)(uint32_t texture, int32_t levels, uint32_t format, int32_t width, int32_t height) -> void;
    using  PFNGLTEXTURESUBIMAGE2DPROC = auto(APIENTRY*)(uint32_t texture, int32_t level,  int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, const void* pixels) -> void;

    using  PFNGLBINDTEXTUREUNITPROC   = auto(APIENTRY*)(uint32_t unit, uint32_t texture) -> void;

    inline PFNGLCREATETEXTURESPROC    glCreateTextures;
    inline PFNGLDELETETEXTURESPROC    glDeleteTextures;

    inline PFNGLTEXTURESTORAGE2DPROC  glTextureStorage2D;
    inline PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D;

    inline PFNGLBINDTEXTUREUNITPROC   glBindTextureUnit;
}