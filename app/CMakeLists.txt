project(app)

# Create the executable
add_executable(${PROJECT_NAME} 
    app.cpp
    graphics.cpp
    )

# Link the static library from subproject1 using its alias sub::lib1
# Link the header only library from subproject2 using its alias sub::lib2
# This will cause the include directories for that target to be added to this project

target_include_directories(${PROJECT_NAME}
    PRIVATE "../SDL/include/"
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
    sub::OptionParser
    "${PROJECT_SOURCE_DIR}/../SDL/SDL2.lib"
    "${PROJECT_SOURCE_DIR}/../SDL/SDL2.dll"
    "${PROJECT_SOURCE_DIR}/../SDL/SDL2main.lib"
)
#add_compile_options(-Wall -Werror -mwindows)
set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE FALSE) 
