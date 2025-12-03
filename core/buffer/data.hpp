#pragma once

namespace core::buffer
{
    struct data
    {
        const void*  ptr  { };
        const size_t size { };
    };

    template <typename type>
              requires std::is_class_v     <type> ||
                       std::is_integral_v  <type>
    static auto make_data(const std::vector<type>& elements) -> data
    {
        return
        {
            elements.data(),
            elements.size() * sizeof(type),
        };
    }

    template <typename type>
              requires std::is_class_v<type>
    static auto make_data(const type*  ptr) -> data
    {
        assert(ptr != nullptr);
        return
        {
            ptr,
            sizeof(type)
        };
    }
}