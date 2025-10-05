#pragma once

#include "buffer.hpp"

namespace opengl
{
    class VertexArray final : public Object
    {
    public:
        auto  create() -> void override;
        auto destroy() -> void override;

        auto attach_vertices (const Buffer& buffer, int32_t stride)     const -> void;
        auto attach_elements (const Buffer& buffer)                     const -> void;

        auto attach_attribute(const core::vertex::attribute& attribute) const -> void;

        auto bind() const  -> void;
    };
}