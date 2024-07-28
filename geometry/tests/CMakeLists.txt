enable_testing()

find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Test)

add_executable(test_geometry
    ${CMAKE_SOURCE_DIR}/tests/test_main.cpp
    # Add other test files here
)

target_link_libraries(test_geometry PRIVATE
    Qt${QT_VERSION_MAJOR}::Test
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Gui
)

add_test(NAME GeometryTests COMMAND test_geometry)