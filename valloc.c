#define _BSD_SOURCE
#include <stdlib.h>
#include <malloc.h>
#include "meta.h"

void *valloc(size_t size)
{
	return memalign(PGSZ, size);
}
