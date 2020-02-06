project(PRO2)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-fPIC")

set(HEADERS
		./include/a2.h
	)

set(SOURCE_FILES
		./source/a2.cpp
        )


add_library(PRO2 ${HEADERS} ${SOURCE_FILES})