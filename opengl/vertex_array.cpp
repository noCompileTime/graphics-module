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

    auto VertexArray::attach_vertices(const Buffer& buffer, const std::int32_t stride) const noexcept -> void
    {
        functions::glVertexArrayVertexBuffer(_handle, 0, buffer.handle(), 0, stride);
    }

    auto VertexArray::attach_elements(const Buffer& buffer) const noexcept -> void
    {
        functions::glVertexArrayElementBuffer(_handle, buffer.handle());
    }

    auto VertexArray::attach(const core::vertex::attribute& attribute) const noexcept -> void
    {
        functions::glVertexArrayAttribFormat (_handle, attribute.index, attribute.size, attribute.type, 0, attribute.offset);
        functions::glVertexArrayAttribBinding(_handle, attribute.index, 0); // TODO add the binding to attribute

        functions::glEnableVertexArrayAttrib (_handle, attribute.index);
    }

    auto VertexArray::bind() const noexcept -> void
    {
        functions::glBindVertexArray(_handle);
    }
}