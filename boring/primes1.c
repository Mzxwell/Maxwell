//
// Created by Jinx on 2023/7/10.
//
#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"
//#include "sys/time.h"
int main() {
//    struct timeval start,end;
    int n, count = 0;
    scanf("%d", &n);
//    gettimeofday(&start,NULL);
    bool *a = (bool *) malloc(n + 1);
    for (int i = 0; i < n + 1; ++i) a[i] = 1;
    if(n>=2) {
        for (int i = 2; i * i <= n; ++i) if (a[i])for (int j = i * i; j <= n; j = j + i) a[j] = 0;
        for (int i = 1; i < n + 1; i+=2) count += a[i];
    }
    printf("%d\n", count);
//    gettimeofday(&end,NULL);
//    printf("%f",(double)(end.tv_sec - start.tv_sec) + (double)(end.tv_usec - start.tv_usec) / 1000000.0);
}