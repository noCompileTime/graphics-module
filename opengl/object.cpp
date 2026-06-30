#include "object.hpp"

namespace opengl
{
    Object::Object(const uint32_t meta)
        : _meta { meta }
    {
    }

    auto Object::handle() const noexcept -> uint32_t
    {
        return _handle;
    }

    auto Object::meta() const noexcept -> uint32_t
    {
        return _meta;
    }
}