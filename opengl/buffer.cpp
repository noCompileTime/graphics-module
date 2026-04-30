#include "buffer.hpp"

namespace opengl
{
    auto Buffer::create() noexcept -> void
    {
        functions::glCreateBuffers(1, &_handle);
    }

    auto Buffer::destroy() noexcept -> void
    {
        functions::glDeleteBuffers(1, &_handle);
    }

    auto Buffer::storage(const std::span<const std::byte> buffer, const std::uint32_t flags) const noexcept -> void
    {
        functions::glBufferStorage(_handle, buffer.size(), buffer.data(), flags);
    }

    auto Buffer::upload(const std::span<const std::byte> buffer, const std::uint32_t offset) const noexcept -> void
    {
        functions::glBufferSubData(_handle, offset, buffer.size(), buffer.data());
    }

    auto Buffer::storage(const uint32_t size, const uint32_t flags) const noexcept -> void
    {
        functions::glBufferStorage(_handle, size, nullptr, flags);
    }

    auto Buffer::bind(const uint32_t target, const uint32_t index) const noexcept -> void
    {
        functions::glBindBufferBase(target, index, _handle);
    }

    auto Buffer::bind(const uint32_t target) const noexcept -> void
    {
        functions::glBindBuffer(target, _handle);
    }
}