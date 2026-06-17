#=======================================================================================================================
target_compile_definitions(${PROJECT_NAME} PRIVATE WIN32_LEAN_AND_MEAN VC_EXTRALEAN NOMINMAX)
#=======================================================================================================================
 target_precompile_headers(${PROJECT_NAME} PRIVATE headers.hpp)
#=======================================================================================================================
     target_link_libraries(${PROJECT_NAME} PRIVATE gdi32)
#=======================================================================================================================
            target_sources(${PROJECT_NAME} PRIVATE pipeline_debug.cpp vertex_array.cpp shader_stage.cpp framebuffer.cpp
                                                   texture.cpp pipeline.cpp commands.cpp shader.cpp buffer.cpp object.cpp
                                                   renderbuffer.cpp functions.cpp sampler.cpp)
#=======================================================================================================================