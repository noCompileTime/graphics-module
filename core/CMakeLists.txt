#=======================================================================================================================
target_include_directories(${PROJECT_NAME} PRIVATE PUBLIC ..)     # TODO remove this CMAKE file? seems to not be needed
     target_link_libraries(${PROJECT_NAME} PRIVATE common_module) # TODO remove the common_module from here
#=======================================================================================================================