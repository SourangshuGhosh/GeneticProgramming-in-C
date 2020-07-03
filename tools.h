#ifndef   DEBUG
	#define   PRINTD(arg, ...)
#else
	#define   PRINTD(arg, ...)     printf(arg, ##__VA_ARGS__)
#endif
