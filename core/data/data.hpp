#pragma once

namespace core::data // TODO rename the file to some other name?
{
    template <typename type>
              requires std::is_trivially_copyable_v<type>
    static auto make_data_as_bytes(const std::vector<type>& data) noexcept -> std::span<const std::byte>
    {
        return std::as_bytes(std::span { data });
    }

    template <typename type>
              requires std::is_trivially_copyable_v<type>
    static auto make_data_as_bytes(const type& object) noexcept -> std::span<const std::byte>
    {
        return std::as_bytes(std::span { &object, 1 });
    }
}