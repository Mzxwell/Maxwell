//
// Created by Jinx on 2022/10/22.
//
#include <stdio.h>
#include <stdbool.h>
#include "sys/time.h"
int main () {
    int n;
    int count = 1;
    int prime[348514] = {2};
    struct timeval start,end;
    scanf("%d", &n);
    gettimeofday(&start,NULL);
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
        printf("%d\n", count);
    }
    gettimeofday(&end,NULL);
    printf("%f",(double)(end.tv_sec - start.tv_sec) + (double)(end.tv_usec - start.tv_usec) / 1000000.0);
}