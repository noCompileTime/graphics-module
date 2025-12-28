#include "vertex_array.hpp"

namespace opengl
{
    auto VertexArray::create() -> void
    {
        functions::glCreateVertexArrays(1, &_handle);
    }

    auto VertexArray::destroy() -> void
    {
        functions::glDeleteVertexArrays(1, &_handle);
    }

    auto VertexArray::attach_vertices(const Buffer& buffer, const int32_t stride) const -> void
    {
        functions::glVertexArrayVertexBuffer(_handle, 0, buffer.handle(), 0, stride);
    }

    auto VertexArray::attach_elements(const Buffer& buffer) const -> void
    {
        functions::glVertexArrayElementBuffer(_handle, buffer.handle());
    }

    auto VertexArray::attach_attribute(const core::vertex::attribute& attribute) const -> void
    {
        functions::glVertexArrayAttribFormat (_handle, attribute.index, attribute.size, attribute.type, 0, attribute.offset);
        functions::glVertexArrayAttribBinding(_handle, attribute.index, 0);

        functions::glEnableVertexArrayAttrib (_handle, attribute.index);
    }

    auto VertexArray::bind() const -> void
    {
        functions::glBindVertexArray(_handle);
    }
}