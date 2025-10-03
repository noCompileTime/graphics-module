#pragma once

namespace opengl
{
    class Object
    {
    public:
        virtual auto  create() -> void = 0;
        virtual auto destroy() -> void = 0;

        virtual   ~Object()  = default;

        auto handle() const -> uint32_t;
        auto   info() const -> uint32_t;

    protected:
        uint32_t _handle { };
        uint32_t _info   { };
    };
}