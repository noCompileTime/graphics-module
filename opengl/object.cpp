#include "object.hpp"

namespace opengl
{
    Object::Object(const uint32_t info)
        : _info { info }
    {
    }

    auto Object::handle() const noexcept -> uint32_t
    {
        return _handle;
    }

    auto Object::info() const noexcept -> uint32_t
    {
        return _info;
    }
}