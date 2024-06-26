/*
 # This file is part of the Astrometry.net suite.
 # Licensed under a 3-clause BSD style license - see LICENSE
 */
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#include "os-features.h"

#if defined(_POSIX_SYNCHRONIZED_IO) && (_POSIX_SYNCHRONIZED_IO > 0)
#define NEED_FDATASYNC 0
#else
#define NEED_FDATASYNC 1
#endif

#ifndef _WIN32 //# Modified by Jasem Mutlaq for the StellarSolver Internal Library
#include <unistd.h>
#endif

//# Modified by Robert Lancaster for the StellarSolver Internal Library
//#if NEED_CANONICALIZE_FILE_NAME
//char* canonicalize_file_name(const char* fn) {
//    char* path = malloc(1024);
//    char* canon;
//    canon = realpath(fn, path);
//    if (!canon) {
//        free(path);
//        return NULL;
//    }
//    path = realloc(path, strlen(path) + 1);
//    return path;
//}
//#endif
//
//#if NEED_FDATASYNC
//int fdatasync(int fd) {
//    return fsync(fd);
//}
//#endif