//
// Created by Jinx on 2022/10/7.
//
#include<stdio.h>

int main() {
    int n, max, i;
    scanf("%d", &n);
    max = n;
    for (i = 0; n != 1; i++) {
        if (n % 2 == 1) {
            n = n * 3 + 1;
        } else {
            n = n / 2;
        }
        if (max <= n) {
            max = n;
        }
    }
    printf("%d %d", i, max);
}