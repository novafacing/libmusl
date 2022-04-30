#define _GNU_SOURCE
#include <unistd.h>
#include "libmusl.h"

int getpagesize(void)
{
	return PAGE_SIZE;
}
