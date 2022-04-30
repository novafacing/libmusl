#include <unistd.h>
#include "syscall.h"
#include "libmusl.h"

int setgid(gid_t gid)
{
	return __setxid(SYS_setgid, gid, 0, 0);
}
