cmake_minimum_required(VERSION 3.10)

set(WARNCFLAGS "-Wall -Wextra -Wfuzzle -Wbar -Werror -Wall -Wextra -pedantic
		    -Wcast-align -Winit-self -Wlogical-op -Wmissing-include-dirs 
		    -Wredundant-decls -Wshadow -Wstrict-overflow=5 -Wundef  
		    -Wwrite-strings -Wpointer-arith -Wmissing-declarations
		    -Wuninitialized -Wold-style-definition -Wstrict-prototypes 
		    -Wmissing-prototypes -Wswitch-default -Wbad-function-cast 
		    -Wnested-externs -Wconversion -Wunreachable-code" )
# ...
string(REPLACE " " ";" c_flags "${WARNCFLAGS}")
string(REPLACE " " ";" cxx_flags "${WARNCXXFLAGS} ${CXX1XCXXFLAGS}")
add_compile_options(
  "$<$<COMPILE_LANGUAGE:C>:${c_flags}>"
  "$<$<COMPILE_LANGUAGE:CXX>:${cxx_flags}>"
)

project(Class)
add_subdirectory(Point_and_Line)
