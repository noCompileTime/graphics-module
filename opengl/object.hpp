#pragma once

namespace opengl
{
    class Object
    {
    public:
                 Object() = default;
        virtual ~Object() = default;

        explicit Object(const uint32_t meta)
            : _meta { meta }
        {
        }

        [[nodiscard]] auto handle() const noexcept
        {
            return _handle;
        }

        [[nodiscard]] auto meta() const noexcept
        {
            return _meta;
        }

        virtual auto  create() noexcept -> void = 0;
        virtual auto destroy() noexcept -> void = 0;

    protected:
        uint32_t _handle { };
        uint32_t _meta   { };
    };
}