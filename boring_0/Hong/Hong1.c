//
// Created by Jinx on 2023/2/5.
//

#include "stdio.h"

//#define A(a) a
//
//#if (A(a) > 1)
//#define B() printf("%d > 1", A(a))
//#elif (A(a) == 1)
//#define B() printf("%d = 1", A(a))
//#else
//#define B() printf("%d < 1", A(a))
//#endif

#define A SEGMENTATION_FAULT

#if A == 0
#define B() printf("Yes")
#endif

#ifndef B
#define B() printf("No")
#endif

int main(){
//    int a;
//    scanf("%d", &a);
//    A(a);
//    B();
    B();
}