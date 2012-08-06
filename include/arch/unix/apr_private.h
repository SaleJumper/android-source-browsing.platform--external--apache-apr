// Added to make the code easier to compile on multiple platforms

#ifdef __APPLE__
#include "apr_private_mac.h" /// handles both PPC and Intel
#else
ERROR !!! UNSUPPORTED PLATFORM
#endif

