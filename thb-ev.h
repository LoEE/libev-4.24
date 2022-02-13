#define EV_STANDALONE 1
#define EV_USE_FLOOR 1
#define EV_NO_THREADS 1
#define EV_USE_REALTIME 0
// #define EV_USE_WSASOCKET 1

#ifdef __ANDROID__
typedef int fd_mask;
#endif

#include "ev.h"
