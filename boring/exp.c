//
// Created by Jinx on 2022/11/5.
//

#include "stdio.h"
#include "stdbool.h"
#include<time.h>

int main () {
    int n;
    int count = 1;
    int prime[2237] = {2};
    scanf("%d", &n);
    clock_t start = clock();
    if (n == 2) {
        printf("1");
    } else {
        for (int i = 3; i <= n; i += 2) {
            bool k = 1;
            if(i > 3){
                for (int j = 1; prime[j] * prime[j] <= i; j++) {
                    if (i % prime[j] == 0) {
                        k = 0;
                        break;
                    }
                }
            }

            if (k) {
                if (count < 2237) {
                    prime[count] = i;
                }
                count++;
            }
        }
        clock_t end = clock();
        printf("%d\n%lu", count, end - start);
    }
}