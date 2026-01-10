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

    auto Texture::storage(const uint32_t width, const uint32_t height, const uint32_t format, const int32_t levels) const noexcept -> void
    {
        functions::glTextureStorage2D(_handle, levels, format, width, height);
    }

    auto Texture::upload(const uint32_t width, const uint32_t height, const uint32_t format, const int32_t level, const void* data) const noexcept -> void
    {
        functions::glTextureSubImage2D(_handle, level, 0, 0, width, height, format, constants::uint8_type, data);
    }

    auto Texture::bind(const uint32_t index) const noexcept -> void
    {
        functions::glBindTextureUnit(index, _handle);
    }
}