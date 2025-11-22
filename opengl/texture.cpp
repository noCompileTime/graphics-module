#include "texture.hpp"

namespace opengl
{
    auto Texture::create() -> void
    {
                            assert(_info != 0);
        functions::create_textures(_info,   1, &_handle);
    }

    auto Texture::destroy() -> void
    {
        functions::delete_textures(1, &_handle);
    }

    auto Texture::storage(const uint32_t width, const uint32_t height, const uint32_t format, const int32_t levels) const -> void
    {
        functions::texture_storage2d(_handle, levels, format, width, height);
    }

    auto Texture::update(const uint32_t width, const uint32_t height, const uint32_t format, const int32_t level, const void* data) const -> void
    {
        functions::texture_update2d(_handle, level, 0, 0, width, height, format, constants::uint8_type, data);
    }

    auto Texture::bind(const uint32_t location) const -> void
    {
        functions::bind_texture_unit(location, _handle);
    }

    auto Texture::type(const uint32_t type) -> void
    {
        _info = type;
    }
}