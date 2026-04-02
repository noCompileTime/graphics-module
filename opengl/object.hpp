#pragma once

namespace opengl
{
    class Object
    {
    public:
                 Object() = default;
        virtual ~Object() = default;

        explicit Object(std::uint32_t info);

        virtual auto  create() noexcept -> void = 0;
        virtual auto destroy() noexcept -> void = 0;

        [[nodiscard]] auto handle() const noexcept -> std::uint32_t;
        [[nodiscard]] auto   info() const noexcept -> std::uint32_t;

    protected:
        std::uint32_t _handle { };
        std::uint32_t _info   { };
    };
}