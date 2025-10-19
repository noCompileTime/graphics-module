#pragma once

namespace core::buffer
{
    struct data
    {
        const size_t size { };
        const void*  ptr  { };
    };

    template <typename type>
              requires std::is_class_v<type> ||
                       std::is_integral_v<type>
    static auto  make_data(const std::vector<type>& elements) -> data
    {
        return { elements.size() * sizeof(type), elements.data() };
    }

    template <typename type>
              requires std::is_class_v<type>
    static auto  make_data(const type* ptr) -> data
    {
                        assert(ptr != nullptr);
        return { sizeof(type), ptr };
    }
}