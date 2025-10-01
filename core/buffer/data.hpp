#pragma once

namespace core::buffer
{
    struct data
    {
        const size_t size { };
        const void*  ptr  { };
    };

    template <typename type>
    static auto make_data(const std::vector<type>& vector) -> data
    {
        return { vector.size() * sizeof(type), vector.data() };
    }
}