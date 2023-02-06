//
// Created by Jinx on 2023/2/5.
//

#include "stdio.h"

int main(){
#ifdef __x86_64__
    printf("I am 64!");
#else
    printf("I am 32!");
#endif
}