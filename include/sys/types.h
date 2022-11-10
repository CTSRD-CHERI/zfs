#include_next <sys/types.h>

#ifndef _PTRADDR_T_DECLARED
#ifdef __PTRADDR_TYPE__
typedef __PTRADDR_TYPE__        __ptraddr_t;
#else
typedef __uintptr_t     __ptraddr_t;
#endif
typedef __ptraddr_t             ptraddr_t;
#define	_PTRADDR_T_DECLARED
#endif

#ifndef _UINT64PTR_T_DECLARED
#if __SIZEOF_POINTER__ == 4
typedef __uint64_t      uint64ptr_t;
#else
typedef __uintptr_t     uint64ptr_t;
#endif
#define	_UINT64PTR_T_DECLARED
#endif
