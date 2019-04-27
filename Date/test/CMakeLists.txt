project(Date_Test)

set(DATE_TESTS_SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/Date_test.cpp
   )

add_executable(${PROJECT_NAME} ${DATE_TESTS_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} Date_lib)
