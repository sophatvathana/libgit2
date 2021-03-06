#include <assert.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>
#include <stdarg.h>

#include <sys/types.h>
#include <sys/stat.h>

#include <regex.h>

#include <io.h>
#include <direct.h>
#ifdef GIT_THREADS
 #include "win32/pthread.h"
#endif

#include "git2.h"
#include "common.h"
