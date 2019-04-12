project(Point_and_Line)

set(POINTLINE_HEADER_FILES
    ${CMAKE_CURRENT_LIST_DIR}/inc/Point.h
    ${CMAKE_CURRENT_LIST_DIR}/inc/Line.h
   )

set(POINTLINE_SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/src/Point.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/Line.cpp
    )

add_library(${PROJECT_NAME}_lib
	        ${POINTLINE_HEADER_FILES}
	        ${POINTLINE_SOURCE_FILES}
	       )
target_include_directories(${PROJECT_NAME}_lib PUBLIC inc)

add_subdirectory(test)
