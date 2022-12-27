//
// Created by Jinx on 2022/10/28.
//
#include<stdio.h>
#include<math.h>

int main () {
    int n, t;
    int sum = 0;
    int SumArr[10] = {0};
    scanf("%d%d", &n, &t);

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j <= i; j ++){
            SumArr[i] = SumArr[i] + t * pow(10, j);
        }
    }

    for (int i = 0; i < n; i ++) {
        sum += SumArr[i];
    }
    printf("%d", sum);
}