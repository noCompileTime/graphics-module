#pragma once

#include "object.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create() ->  void override;
        auto destroy() ->  void override;

        auto bind_base(uint32_t target, uint32_t location) const -> void;

        auto   storage(const core::buffer::data& data, uint32_t  flags = 0) const -> void;
        auto    update(const core::buffer::data& data, uint32_t offset = 0) const -> void;
    };
}