//
// Created by Jinx on 2023/2/5.
//

#include "stdio.h"

//#define A(a0) a0
//
//#if (A(a0) > 1)
//#define B() printf("%d > 1", A(a0))
//#elif (A(a0) == 1)
//#define B() printf("%d = 1", A(a0))
//#else
//#define B() printf("%d < 1", A(a0))
//#endif

#define A SEGMENTATION_FAULT

#if A == 0
#define B() printf("Yes")
#endif

#ifndef B
#define B() printf("No")
#endif

int main(){
//    int a0;
//    scanf("%d", &a0);
//    A(a0);
//    B();
    B();
}