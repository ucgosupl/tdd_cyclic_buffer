#include "unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(cyclic_buffer)
{
   /* Test cases to run */
   RUN_TEST_CASE(cyclic_buffer, BufferEmptyAfterInit);
}
