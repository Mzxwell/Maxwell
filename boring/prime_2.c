//
// Created by Jinx on 2022/10/22.
//
#include<stdio.h>
#define a 500000
int main () {
    int n;
    int arr[a] = {0};
    int v = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i ++) {
        if (arr[i] != 1) {
            for (int k = 2; k * (i + 1) <= n; k ++) {
                if ((i + 1) * k <= n) {
                    arr[k * (i + 1) - 1] = 1;
                }
            }
            v ++;
        }
    }
    printf("%d", v);
}