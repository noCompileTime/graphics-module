#include "texture.hpp"

namespace opengl
{
    Texture::Texture(const uint32_t target)
        : Object { target }
    {
    }

    auto Texture::create() noexcept -> void
    {
        functions::glCreateTextures(_info, 1, &_handle);
    }

    auto Texture::destroy() noexcept -> void
    {
        functions::glDeleteTextures(1, &_handle);
    }

    auto Texture::storage(const core::data::image& image, const uint32_t format, const int32_t levels) const noexcept -> void
    {
        functions::glTextureStorage2D(_handle, levels, format, image.width, image.height);
    }

    auto Texture::upload(const core::data::image& image, const uint32_t format, const int32_t level) const noexcept -> void
    {
        functions::glTextureSubImage2D(_handle, level, 0, 0, image.width, image.height, format, constants::type_uint8, image.pixels.data());
    }

    auto Texture::bind(const uint32_t index) const noexcept -> void
    {
        functions::glBindTextureUnit(index, _handle);
    }
}