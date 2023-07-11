//
// Created by Jinx on 2023/7/10.
//
#include "stdio.h"

#define mod % 1000000007

int main() {
    int n;
    long long a = 1, b = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        a = (a mod) * (i mod);
        b = (b mod) + (a mod);
    }
    printf("%lld", b mod);
}