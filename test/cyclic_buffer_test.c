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

TEST(cyclic_buffer, BufferEmptyAfterInit)
{
    struct cbuf buffer;

    cbuf_init(&buffer);

    TEST_ASSERT_TRUE(cbuf_is_empty(&buffer));
}

TEST(cyclic_buffer, AfterPushingItemTheSameIsReturned)
{
    struct cbuf buffer;
    uint32_t item = 0x55AA00FF;

    cbuf_init(&buffer);

    cbuf_push(&buffer, item);

    TEST_ASSERT_EQUAL_HEX32(item, cbuf_pop(&buffer));
}

//after adding 2 items, they are returned in the same order
//when max capacity is reached, first item is overriden
//number of items in the buffer is returned by function
//pass nullptr to functions
