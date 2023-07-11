//
// Created by Jinx on 2023/2/6.
//

#include "stdio.h"

#define Log(fmt, ...)fprintf(stderr, "[in file %s, line %d, function %s]" fmt "\n", __FILE__, __LINE__, __func__, __VA_ARGS__)

int main() {
    Log("%s", "print a0 log");
}