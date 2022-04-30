#define _BSD_SOURCE
#include <unistd.h>
#include "libmusl.h"

int issetugid(void)
{
	return libc.secure;
}
