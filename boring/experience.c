//
// Created by Jinx on 2022/10/20.
//
#include <stdio.h>
#include<stdlib.h>
int jsws (int n);

int main () {
    int n, m;
    int count = 1;
    int prime[517000] = {2};
    printf("Please enter an integer greater than zero, then I will list all the primes less than it and count the primes\nINPUT:");
    scanf("%d", &n);

    if (n == 2) {
        printf("1");
    } else {

            printf("2");
            for (int b = 0; b < jsws(n); b++) {
                printf(" ");
            }

        for (int i = 3; i <= n; i += 2) {
            int k = 1;
            for (int j = 0; prime[j] * prime[j] <= i; j++) {
                if (i % prime[j] == 0) {
                    k = 0;
                    break;
                }
            }

            if (k) {
                if (count < 517000) {
                    prime[count] = i;
                }

                    printf("%d", i);
                    for (int b = 0; b < jsws(n) - jsws(i) + 1; b++) {
                        printf(" ");
                    }

                count++;
                    if (!(count % 12)) {
                        printf("\n");
                    }
            }
        }
        printf("\nCount: %d", count);
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