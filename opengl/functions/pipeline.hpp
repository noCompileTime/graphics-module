#pragma once

#include "types.hpp"

namespace opengl::functions
{
    using  PFNGLENABLEPROC = void(APIENTRY*)(uint32_t cap);

    inline PFNGLENABLEPROC glEnable;
}