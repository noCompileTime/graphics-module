#pragma once

#include "object.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create() ->  void override;
        auto destroy() ->  void override;

        auto storage(const core::data::buffer& data, uint32_t  usage) const noexcept -> void;
        auto  upload(const core::data::buffer& data, uint32_t offset) const noexcept -> void;

        auto    bind(uint32_t target, uint32_t location)              const noexcept -> void;
    };
}