// Added to make the code easier to compile on multiple platforms

#ifdef WIN32
#include "apr.hw"
#elif defined(__APPLE__)
#include "apr_mac.h" // handles both PPC and Intel
#else
ERROR !!! UNSUPPORTED PLATFORM
#endif
