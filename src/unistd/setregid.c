#include <unistd.h>
#include "syscall.h"
#include "libmusl.h"

int setregid(gid_t rgid, gid_t egid)
{
	return __setxid(SYS_setregid, rgid, egid, 0);
}
