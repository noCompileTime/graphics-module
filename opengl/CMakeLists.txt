#=======================================================================================================================
target_precompile_headers(${PROJECT_NAME} PRIVATE headers.hpp)
    target_link_libraries(${PROJECT_NAME} PRIVATE opengl32)
           target_sources(${PROJECT_NAME} PRIVATE functions.cpp object.cpp buffer.cpp vertex_array.cpp commands.cpp
                                                  shader.cpp shader_stage.cpp texture.cpp)
#=======================================================================================================================