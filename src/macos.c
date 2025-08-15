#define qsort macos

#define __FBSDID(x)
#define __unused
#define __predict_false(x) (x)
#define flsl(x) ((sizeof(x) << 3) - __builtin_clzl(x))

#include "libs/macos/qsort.c"
