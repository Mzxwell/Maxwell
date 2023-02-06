//
// Created by Jinx on 2023/2/6.
//

#include "stdio.h"

#define this that
#define concat_temp(a, b) a ## b
#define concat(a, b) concat_temp(a, b)
#define str_temp(a) #a
#define str(a) str_temp(a)

int main() {
    int concat(this, func) = 0;
    printf(str(concat(this, func)) " = %d", concat(this, func));
}