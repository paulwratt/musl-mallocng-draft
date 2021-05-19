#define _GNU_SOURCE
#include <stdlib.h>
#include "meta.h"

void *pvalloc(size_t size)
{
	return valloc(((size + PGSZ - 1) / PGSZ) * PGSZ);
}
