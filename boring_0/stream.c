//
// Created by Jinx on 2022/12/10.
//
#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    char a = 'a';
    char b = 'b';
    a = getchar();
    scanf("%d%d", &x, &y);
    b = getchar();

    printf("%d%d%c%c", x, y, a, b);
}