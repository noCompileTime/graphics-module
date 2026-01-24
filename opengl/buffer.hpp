#pragma once

#include "object.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto storage(const core::data::buffer& buffer, uint32_t usage  = constants::default_usage)        noexcept -> void;
        auto  upload(const core::data::buffer& buffer, uint32_t offset = constants::default_offset) const noexcept -> void;

        //   used when you want to allocate the buffer but not actually send the data up front
        auto storage(uint32_t buffer_size, uint32_t usage = constants::default_usage) noexcept -> void;

        auto  bind(uint32_t target, uint32_t index) const noexcept -> void;
        auto  bind(uint32_t target)                 const noexcept -> void;
    };
}