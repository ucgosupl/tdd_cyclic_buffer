#include "cyclic_buffer.h"

void cbuf_init(struct cbuf *buf)
{
    (void) buf;
}

bool cbuf_is_empty(struct cbuf *buf)
{
    (void) buf;

    return true;
}

void cbuf_push(struct cbuf *buf, uint32_t item)
{
    buf->item = item;
}

uint32_t cbuf_pop(struct cbuf *buf)
{
    return buf->item;
}
