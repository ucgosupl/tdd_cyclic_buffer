#pragma once

#include <stdbool.h>
#include <stdint.h>

struct cbuf
{
    uint32_t item;
};

void cbuf_init(struct cbuf *buf);
bool cbuf_is_empty(struct cbuf *buf);
void cbuf_push(struct cbuf *buf, uint32_t item);
uint32_t cbuf_pop(struct cbuf *buf);
