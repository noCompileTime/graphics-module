#pragma once

namespace opengl
{
    class Object
    {
    public:
                 Object() = default;
        virtual ~Object() = default;

        explicit Object(uint32_t info);

        virtual auto  create() noexcept -> void = 0;
        virtual auto release() noexcept -> void = 0;

        [[nodiscard]] auto handle() const noexcept -> uint32_t;
        [[nodiscard]] auto   info() const noexcept -> uint32_t;

    protected:
        uint32_t _handle { };
        uint32_t _info   { };
    };
}