#pragma once

#include "object.hpp"

namespace opengl
{
    class Buffer final : public Object
    {
    public:
        auto  create() noexcept -> void override;
        auto destroy() noexcept -> void override;

        auto storage(std::span<const std::byte> buffer, uint32_t flags) const noexcept -> void;
        auto  upload(std::span<const std::byte> buffer, uint32_t start) const noexcept -> void;

        auto storage(uint32_t length, uint32_t flags) const noexcept -> void;

        auto    bind(uint32_t target, uint32_t index) const noexcept -> void;
        auto    bind(uint32_t target)                 const noexcept -> void;
    };
}