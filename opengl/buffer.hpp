#pragma once

#include "object.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto storage(const core::data::buffer& buffer, uint32_t  usage = constants::static_draw) const noexcept -> void;
        auto  upload(const core::data::buffer& buffer, uint32_t offset = 0)                      const noexcept -> void;

        auto  bind(uint32_t target, uint32_t index) const noexcept -> void;
    };
}