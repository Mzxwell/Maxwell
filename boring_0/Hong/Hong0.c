//
// Created by Jinx on 2023/2/5.
//

#define macro

#ifdef macro
DEFINED!
#else
UNDEFINED!
#endif

#undef macro

#ifdef macro
DEFINED!
#else
UNDEFINED!
#endif