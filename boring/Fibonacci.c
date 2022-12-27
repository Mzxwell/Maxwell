//
// Created by Jinx on 2022/11/7.
//
#include<stdio.h>

int jsws(long long n);

int main() {
    printf("Enter a number n to calculate fib(n):\n");
    int n, i = 0, j = 0, b = 0;
    long long num[3][85000] = {{1},
                               {1},
                               {0}};

    scanf("%d", &n);
    if (!n)
        printf("fib(0) = 1");

    if (n) {
        while (i < n) {
            if (num[1][0] < 7000000000000000000) {
                if (n == ++i) {
                    printf("fib(%d) = %lld", i, num[1][0]);
                    break;
                }

                num[2][0] = num[1][0] + num[0][0];
                num[0][0] = num[1][0];
                num[1][0] = num[2][0];

            } else {
                done:

                j++;

                if (j > 1)
                    for (int k = 0; k < j - 1; k++) {
                        num[0][j - k] = num[0][j - k - 1];
                        num[1][j - k] = num[1][j - k - 1];
                    }

                num[0][1] = num[0][0] % 1000000000000000000;
                num[1][1] = num[1][0] % 1000000000000000000;
                num[0][0] = num[0][0] / 1000000000000000000;
                num[1][0] = num[1][0] / 1000000000000000000;

                while (i < n) {
                    if (n == i + 1) {
                        printf("fib(%d) = ", i + 1);

                        for (int k = 0; k <= j; k++) {
                            printf("%lld", num[1][k]);
                            if (k < j && num[1][k + 1] < 100000000000000000) {
                                for (int a = 0; a < 18 - jsws(num[2][k + 1]); a++)
                                    printf("0");
                            }
                        }
                        goto done0;
                    }

                    if (num[1][0] > 3500000000000000000 && j == 84999){
                        printf("ERROR");
                        goto done0;
                    }

                    if (num[1][0] > 3500000000000000000)
                        goto done;

                    for (int k = 0; k <= j; k++)
                        num[2][k] = num[0][k] + num[1][k];

                    for (int k = 0; k < j; k++)
                        if (num[2][j - k] > 1000000000000000000) {
                            num[2][j - k] -= 1000000000000000000;
                            num[2][j - k - 1]++;
                        }

                    i++;

                    for (int k = 0; k <= j; k++) {
                        num[0][k] = num[1][k];
                        num[1][k] = num[2][k];
                    }
                }
            }
        }
    }
    done0:;
}

int jsws(long long n) {
    int i = 0;
    long long k = n;
    while (k >= 10) {
        k = k / 10;
        i++;
    }
    return i + 1;
}