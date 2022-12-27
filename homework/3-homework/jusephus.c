//
// Created by Jinx on 2022/10/15.
//
#include <stdio.h>

int main(){

    int num[1000] = {0};
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++){
        num[i] = i;
    }

    int a = 0;
    while (a < n - 1) {

        for (int i = 1; i < k; i++) {
            for (int j = 0; j < n - a; j++) {
                num[j] = num[j + 1];
            }
            num[n - a] = num[0];
        }

        for (int i = 1; i < n - a; i++) {
            num[i] = num[i + 1];
        }

        num[n - a] = 0;
        a++;
    }

    printf("%d", num[1]);
}
