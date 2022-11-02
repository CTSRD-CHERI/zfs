#if !defined(__CHERI__) && !defined(__CHERI_HYBRID__)
#ifndef copyinptr
#define        copyinptr       copyin
#endif
#ifndef copyoutptr
#define        copyoutptr      copyout
#endif
#endif
