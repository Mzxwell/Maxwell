//
// Created by Jinx on 2022/11/4.
//
#include<stdio.h>
int pascal (int a, int b);
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", pascal(a, b));
}
int pascal (int a, int b) {
    if (a == b || b == 1) {
        return 1;
    }
    return pascal(a - 1, b) + pascal(a - 1, b - 1);
}