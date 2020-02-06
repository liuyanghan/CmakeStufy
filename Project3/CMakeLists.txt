#project(PRO3)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-fPIC")

set(HEADERS
		./include/a3.h
	)

set(SOURCE_FILES
		./source/a3.cpp
        )

add_library(PRO3 ${HEADERS} ${SOURCE_FILES})