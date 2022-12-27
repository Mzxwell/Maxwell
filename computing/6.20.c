//
// Created by Jinx on 2022/10/30.
//
#include<stdio.h>
int main() {
    int n;
    int i = 1;
    int arr[32] = {0};
    scanf("%d", &n);

    while (n) {
        arr[32 - i] = n % 2;
        n = n / 2;
        i ++;
    }

    for (int j = 0; j < 32; j ++) {
        printf("%d", arr[j]);
    }
}