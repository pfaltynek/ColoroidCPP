PROJECT(Coloroid)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")

IF (WIN32)
	SET(PLATFORM_DEPENDENT_SRC src/term_info_WIN.cpp)
ENDIF(WIN32)

IF (UNIX)
	SET(PLATFORM_DEPENDENT_SRC src/term_info_LINUX.cpp)
ENDIF(UNIX)

ADD_EXECUTABLE(coloroid src/main.cpp src/console_logo.cpp ${PLATFORM_DEPENDENT_SRC})