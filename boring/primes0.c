//
// Created by Jinx on 2023/7/10.
//
#include <stdio.h>
#include <stdlib.h>

int countPrimes(int n) {
    if (n <= 1) {
        return 0;
    }

    // 创建一个数组用于标记是否为素数，默认全部初始化为 1
    char* isPrime = (char*)malloc((n + 1) * sizeof(char));
    for (int i = 2; i <= n; i++) {
        isPrime[i] = 1;
    }

    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // 将 i 的倍数标记为非素数
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    // 统计素数个数
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    // 释放动态分配的内存
    free(isPrime);

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int primeCount = countPrimes(n);
    printf("%d",primeCount);

    return 0;
}