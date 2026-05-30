#=======================================================================================================================
target_include_directories(${PROJECT_NAME} PRIVATE PUBLIC ..)     # TODO remove this CMAKE file? seems to not be needed
 target_precompile_headers(${PROJECT_NAME} PRIVATE headers.hpp)
#=======================================================================================================================