#pragma once

#include "object.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create() ->  void override;
        auto destroy() ->  void override;

        auto storage(const core::buffer::data& data, uint32_t  usage) const -> void;
        auto  upload(const core::buffer::data& data, uint32_t offset) const -> void;

        auto    bind(uint32_t target, uint32_t location)              const -> void;
    };
}