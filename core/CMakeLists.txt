#=======================================================================================================================
target_include_directories(${PROJECT_NAME} PUBLIC ..)
 target_precompile_headers(${PROJECT_NAME} PUBLIC standard.hpp internal.hpp)
     target_link_libraries(${PROJECT_NAME} PUBLIC common_module)
#=======================================================================================================================