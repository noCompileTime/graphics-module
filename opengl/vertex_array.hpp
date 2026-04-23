#pragma once

#include "buffer.hpp"

namespace opengl
{
    class VertexArray final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto attach(const Buffer& buffer, std::int32_t stride) const noexcept -> void;
        auto attach(const Buffer& buffer)                      const noexcept -> void;

        auto attach(const core::vertex::attribute& attribute)  const noexcept -> void;

        auto bind() const noexcept -> void;
    };
}