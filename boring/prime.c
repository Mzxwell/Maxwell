//
// Created by Jinx on 2022/10/22.
//
#include <stdio.h>
#include <stdbool.h>

int main () {
    int n;
    int count = 1;
    int prime[348514] = {2};
    scanf("%d", &n);

    if (n == 2) {
        printf("1");
    } else {

        for (int i = 3; i <= n; i += 2) {
            bool k = 1;
            for (int j = 0; prime[j] * prime[j] <= i; j++) {
                if (i % prime[j] == 0) {
                    k = 0;
                    break;
                }
            }
            if (k) {
                if (count<348514) prime[count] = i;
                count++;
            }
        }
        printf("%d", count);
    }
}