//
// Created by Jinx on 2023/2/5.
//

#include "stdio.h"

#define eval(expr) printf(#expr" = %d\n", expr)
#define concat(a, b) a ## b
#define c(a) #a


int main() {
    int a, b, concat(a, b);
    scanf("%d%d%d", &a, &b, &concat(a, b));
    eval(a + b + concat(a, b));
    printf("%d", ab);
}