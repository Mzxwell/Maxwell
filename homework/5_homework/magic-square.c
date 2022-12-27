//
// Created by Jinx on 2022/10/28.
//
#include<stdio.h>
int jsws (int n);

int main () {
    int n;
    int magic_squ[600][600] = {0};
    scanf("%d", &n);
    int k = n;
    magic_squ[0][(n - 1) / 2] = 1;
    int x = 0, y = (n - 1) / 2;

    for (int i = 2; i <= n * n; i ++) {
        int a, b;
        a = x - 1;
        b = y + 1;
        done:
        if (a < 0) {
            a = a + n;
        }
        if (b >= n) {
            b = 0 ;
        }
        if (magic_squ[a][b] == 0) {
            magic_squ[a][b] = i;
        } else {
            a = x + 1;
            b = y;
            goto done;
        }
        x = a;
        y = b;
    }

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
                printf("%d", magic_squ[i][j]);
                for (int a = 0; a < (jsws(k * k) - jsws(magic_squ[i][j]) + 1); a ++) {
                    printf(" ");
                }
        }
        printf("\n");
    }
}

int jsws (int n) {
    int i = 0;
    int k = n;
    while (k >= 10) {
        k = k / 10;
        i ++;
    }
    return i + 1;
}