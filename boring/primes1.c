//
// Created by Jinx on 2023/7/10.
//
#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"
int main() {
    int n, count = 0;
    scanf("%d", &n);
    bool *a = (bool *) malloc(n + 1);
    for (int i = 0; i < n + 1; ++i) a[i] = 1;
    if(n>=2) {
        for (int i = 2; i * i <= n; ++i) if (a[i])for (int j = i * i; j <= n; j = j + i) a[j] = 0;
        for (int i = 2; i < n + 1; ++i) count += a[i];
    }
    printf("%d", count);
}