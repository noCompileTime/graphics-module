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

    auto Texture::upload(const int32_t x, const int32_t y, const int32_t width, const int32_t height, const uint32_t format, const int32_t level, const uint32_t type, const std::span<const uint8_t> buffer) const noexcept -> void
    {
        functions::glTextureSubImage2D(_handle, level, x, y, width, height, format, type, buffer.data()); // TODO buffer should be a span with std::byte, maybe without std::
    }

    auto Texture::storage(const int32_t width, const int32_t height, const uint32_t format, const int32_t levels) const noexcept -> void
    {
        functions::glTextureStorage2D(_handle, levels, format, width, height);
    }

    auto Texture::bind(const uint32_t index) const noexcept -> void
    {
        functions::glBindTextureUnit(index, _handle);
    }
}