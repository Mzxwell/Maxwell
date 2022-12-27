//
// Created by Jinx on 2022/11/4.
//
#include<stdio.h>
long long tiles (int a);
int main() {
    int a;
    scanf("%d", &a);
    printf("%lld", tiles(a));
}
long long tiles (int a) {
    if (a < 2) {
        return 1;
    }
    long long b = 1;
    for (int i = 0; i <= a - 2; i ++) {
        b += tiles(a - 2 - i);
    }
    return b;
}