#define _GNU_SOURCE
#include <stdlib.h>
#include "libmusl.h"

char *secure_getenv(const char *name)
{
	return libc.secure ? NULL : getenv(name);
}
