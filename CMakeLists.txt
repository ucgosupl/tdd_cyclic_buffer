cmake_minimum_required(VERSION 3.10)

project(tdd_cyclic_buffer)

set(INCLUDE_DIRS
	src
)

set(TEST_INCLUDE_DIRS
	test
	.
)

set(SRCS

)

set(TEST_SRCS
	test/cyclic_buffer_main.c
	test/cyclic_buffer_runner.c
	test/cyclic_buffer_test.c
	unity/core/unity.c
	unity/fixture/unity_fixture.c
)

set(GLOBAL_DEFINES

)

include_directories(${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
add_definitions(${GLOBAL_DEFINES})

add_executable(unit_tests ${SRCS} ${TEST_SRCS})
