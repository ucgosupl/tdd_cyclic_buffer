cmake_minimum_required(VERSION 3.10)

project(tdd_cyclic_buffer C)

add_subdirectory(unity)

set(CMAKE_C_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra")

set(INCLUDE_DIRS
	src
)

set(TEST_INCLUDE_DIRS
	test
	.
)

set(SRCS
	src/cyclic_buffer/cyclic_buffer.c
)

set(TEST_SRCS
	test/cyclic_buffer_main.c
	test/cyclic_buffer_runner.c
	test/cyclic_buffer_test.c
)

set(GLOBAL_DEFINES

)

include_directories(${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
add_definitions(${GLOBAL_DEFINES})

link_libraries(unity)
add_executable(unit_tests ${SRCS} ${TEST_SRCS})

enable_testing()
add_test(tests unit_tests)
