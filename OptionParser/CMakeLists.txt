# Set the project name
project (OptionParser)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/OptionParser.cpp)
add_library(sub::OptionParser ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)
