#pragma once

namespace opengl::functions
{
    using  PFNGLENABLEPROC  = auto(APIENTRY*)(uint32_t cap) -> void;
    using  PFNGLDISABLEPROC = auto(APIENTRY*)(uint32_t cap) -> void;

    inline PFNGLENABLEPROC  glEnable;
    inline PFNGLDISABLEPROC glDisable;
}