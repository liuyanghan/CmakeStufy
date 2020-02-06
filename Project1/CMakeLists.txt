project(PRO1)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-fPIC")

AUX_SOURCE_DIRECTORY(./source/ SOURCES)
set(HEADERS
	./include/a1.h
)

SET(SOURCE_FILES ${SOURCES})

#link_directories("../third_party/lib")
add_executable(exe ${HEADERS} ${SOURCE_FILES})
target_link_libraries(exe PRO2 PRO3)