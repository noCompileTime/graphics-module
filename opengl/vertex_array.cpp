#include "vertex_array.hpp"

namespace opengl
{
    auto VertexArray::create() -> void
    {
        functions::create_vertex_arrays(1, &_handle);
    }

    auto VertexArray::destroy() -> void
    {
        functions::delete_vertex_arrays(1, &_handle);
    }

    auto VertexArray::attach_vertices(const Buffer& buffer, const int32_t stride) const -> void
    {
        functions::vertex_array_vertices_buffer(_handle, 0, buffer.handle(), 0, stride);
    }

    auto VertexArray::attach_elements(const Buffer& buffer) const -> void
    {
        functions::vertex_array_elements_buffer(_handle, buffer.handle());
    }

    auto VertexArray::attach_attribute(const core::vertex::attribute& attribute) const -> void
    {
        functions::vertex_array_attrib_format (_handle, attribute.index, attribute.size, attribute.type, 0, attribute.offset);
        functions::vertex_array_attrib_binding(_handle, attribute.index, 0);

        functions::vertex_array_attrib_enable (_handle, attribute.index);
    }

    auto VertexArray::bind() const -> void
    {
        functions::bind_vertex_array(_handle);
    }
}