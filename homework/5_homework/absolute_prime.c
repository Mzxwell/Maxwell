//
// Created by Jinx on 2022/10/28.
//
#include<stdio.h>
#include<math.h>

int PrimeArr(int n, int prime[]);

int overturn(int a);

int IsPrime(int a);

int main() {
    int n;
    int sum = 0;
    int sum_0 = 0;
    int prime_1[1000] = {0};
    int prime_2[1000] = {0};
    scanf("%d", &n);
    sum = PrimeArr(n, prime_1);
    for (int i = 0; i <= sum; i++) {
        prime_2[i] = overturn(prime_1[i]);
    }
    for (int i = 0; i <= sum; i++) {
        sum_0 += IsPrime(prime_2[i]);
    }

    if (n == 2) {
        printf("1");
    } else {
    if (n == 1) {
        printf("0");
    } else {
    if (n <= 0) {
        printf("0");
    } else {
        printf("%d", sum_0);
    }}}
}

int PrimeArr(int n, int prime[]) {
    int count = 0;
    prime[0] = 2;
    for (int i = 3; i <= n; i += 2) {
        int k = 1;
        for (int j = 0; prime[j] * prime[j] <= i; j++) {
            if (i % prime[j] == 0) {
                k = 0;
                break;
            }
        }
        if (k) {
            count++;
            prime[count] = i;
        }
    }
    return count;
}

int overturn(int a) {
    int arr_0[3] = {0};
    if (a < 10) {
        return a;
    } else {
        if (a < 100) {
            arr_0[0] = a % 10;
            arr_0[1] = a / 10;
            return arr_0[0] * 10 + arr_0[1];
        } else {
            arr_0[0] = a % 10;
            arr_0[1] = ((a - arr_0[0]) % 100) / 10;
            arr_0[2] = a / 100;
            return arr_0[0] * 100 + arr_0[1] * 10 + arr_0[2];
        }
    }
}

int IsPrime(int a) {
    int flag = 1; // 1 表示该数是素数
    for (int i = 2; i <= sqrt(a + 0.5); i++) {
        if (a % i == 0) {
            flag = 0;
        }
    }
    return flag;
}