//
// Created by Jinx on 2023/2/6.
//

#include "stdio.h"

int main() {
    char c[30];
    FILE *a = fopen("test", "r");
    fscanf(a, "%[^\n]", c);
    printf("%s", c);
}