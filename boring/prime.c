//
// Created by Jinx on 2022/10/22.
//
#include <stdio.h>
int main () {
    int n;
    int count = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i ++) {
        int k = 1;
        for (int j = 2; j < i; j ++){
            if (i % j == 0) {
                k = 0;
                break;
            }
        }
        if (k) {
            printf("%d ", i);
        }
    }
}