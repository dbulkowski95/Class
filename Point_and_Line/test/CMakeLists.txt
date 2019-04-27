project(Point_and_Line_tests)

set(POINT_AND_LINE_TESTS_SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/mainClass.cpp
   )

add_executable(${PROJECT_NAME} ${POINT_AND_LINE_TESTS_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} Point_and_Line_lib)
