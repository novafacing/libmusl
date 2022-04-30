#include <unistd.h>
#include "libmusl.h"
#include "syscall.h"

int setegid(gid_t egid)
{
	return __setxid(SYS_setresgid, -1, egid, -1);
}
