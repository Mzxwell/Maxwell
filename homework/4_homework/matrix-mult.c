//
// Created by Jinx on 2022/10/22.
//
#include<stdio.h>

int main () {
    int m, n ,p;
    int A[101][101] = {0}, B[101][101] = {0}, C[101][101] = {0};
    scanf("%d%d%d", &m, &n, &p);

    for (int i = 1; i <= m; i ++) {
        for (int j = 1; j <= n; j ++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= p; j ++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 1; i <= m; i ++) {
        for (int j = 1; j <= p; j ++) {
            for (int f = 1; f <= n; f ++) {
                C[i][j] = A[i][f] * B[f][j] + C[i][j];
            }
        }
    }

    for (int i = 1; i <= m; i ++) {
        for (int j = 1; j <= p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

}