#pragma once

#include "object.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create() ->  void override;
        auto destroy() ->  void override;

        auto storage(const core::buffer::data& data, uint32_t flags = 0) const -> void;
    };
}