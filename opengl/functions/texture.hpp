#pragma once

namespace opengl::functions
{
     using PFNGLCREATETEXTURESPROC = void(APIENTRY*)(uint32_t target, int32_t n, std::uint32_t* textures);
    inline PFNGLCREATETEXTURESPROC glCreateTextures;

     using PFNGLDELETETEXTURESPROC = void(APIENTRY*)(int32_t n, const uint32_t* textures);
    inline PFNGLDELETETEXTURESPROC glDeleteTextures;

     using PFNGLTEXTURESTORAGE2DPROC = void(APIENTRY*)(std::uint32_t texture, std::int32_t levels, std::uint32_t format, std::int32_t width, std::int32_t height);
    inline PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D;

     using PFNGLTEXTURESUBIMAGE2DPROC = void(APIENTRY*)(std::uint32_t texture, std::int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, const void* pixels);
    inline PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D;

     using PFNGLBINDTEXTUREUNITPROC = void(APIENTRY*)(std::uint32_t unit, std::uint32_t texture);
    inline PFNGLBINDTEXTUREUNITPROC glBindTextureUnit;
}