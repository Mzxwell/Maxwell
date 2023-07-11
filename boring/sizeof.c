//
// Created by Jinx on 2023/2/17.
//

#include <stdbool.h>
#include "stdio.h"
#include "stdlib.h"

int main(){
    char *a = (char *)malloc(50000000);
    a[49999999]=50;
    printf("%llu ", sizeof (char *));
    printf("%c", a[49999999]);
}