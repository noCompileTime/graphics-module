#=======================================================================================================================
    target_link_libraries(${PROJECT_NAME} PRIVATE opengl32)
target_precompile_headers(${PROJECT_NAME} PRIVATE headers.hpp internal.hpp)
           target_sources(${PROJECT_NAME} PRIVATE texture_sampler.cpp vertex_array.cpp shader_stage.cpp framebuffer.cpp
                                                  texture.cpp pipeline.cpp commands.cpp shader.cpp buffer.cpp object.cpp
                                                  renderbuffer.cpp functions.cpp)
#=======================================================================================================================