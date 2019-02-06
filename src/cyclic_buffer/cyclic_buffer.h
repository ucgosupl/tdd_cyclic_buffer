#pragma once

#include <stdbool.h>

struct cbuf
{

};

void cbuf_init(struct cbuf *buf);
bool cbuf_is_empty(struct cbuf *buf);
