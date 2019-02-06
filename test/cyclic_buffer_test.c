#include "unity/fixture/unity_fixture.h"

#include "cyclic_buffer/cyclic_buffer.h"

TEST_GROUP(cyclic_buffer);

TEST_SETUP(cyclic_buffer)
{
   /* Init before every test */
}

TEST_TEAR_DOWN(cyclic_buffer)
{
   /* Cleanup after every test */
}

TEST(cyclic_buffer, first)
{
   TEST_FAIL_MESSAGE("initial test setup");
}

//after init buffer is empty
//after pushing single item, the same item is returned
//after adding 2 items, they are returned in the same order
//when max capacity is reached, first item is overriden
