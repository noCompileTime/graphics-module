#include "vertex_array.hpp"

namespace opengl
{
    auto VertexArray::create() noexcept -> void
    {
        functions::glCreateVertexArrays(1, &_handle);
    }

    auto VertexArray::destroy() noexcept -> void
    {
        functions::glDeleteVertexArrays(1, &_handle);
    }

    auto VertexArray::attach(const vertex_attribute& attribute) const noexcept -> void
    {
        functions::glVertexArrayAttribFormat (_handle, attribute.index, attribute.size, attribute.type, 0, attribute.start);
        functions::glVertexArrayAttribBinding(_handle, attribute.index, attribute.slot);

        functions::glEnableVertexArrayAttrib (_handle, attribute.index);
    }

    auto VertexArray::attach(const Buffer& buffer, const int32_t stride) const noexcept -> void
    {
        functions::glVertexArrayVertexBuffer(_handle, 0, buffer.handle(), 0, stride);
    }

    auto VertexArray::attach(const Buffer& buffer) const noexcept -> void
    {
        functions::glVertexArrayElementBuffer(_handle, buffer.handle());
    }

    auto VertexArray::bind() const noexcept -> void
    {
        functions::glBindVertexArray(_handle);
    }
}