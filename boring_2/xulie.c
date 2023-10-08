//
// Created by Jinx on 2023/10/8.
//
#include <memory.h>
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

bool isCorrect(int *a, bool *b, int i, int over, int len) {
    if (len == over)return 1;
    if (a[i])return isCorrect(a, b, i + 1, over, len);
    for (int j = len; j >= 1; --j) {
        if (b[j])continue;
        if(j==1){
            a[i] = j;b[j]=1;
            if (isCorrect(a, b, i + 1, over + 1, len))return 1;
            b[j]=0;a[i] = 0;return 0;
        }
        if (!i || (i+j<len*2-1&&!a[i + j])) {
            a[i] = j;a[i + j] = j;b[j]=1;
            if (isCorrect(a, b, i + 1, over + 1, len))return 1;
            b[j]=0;a[i] = 0;a[i + j] = 0;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int l1=n+1,l2=8*n-4;
    bool*b= (bool*)malloc(l1);
    int *a = (int *)malloc(l2);
    memset(a,0,l2);
    memset(b,0,l1);
    isCorrect(a,b,0,0,n);
    for (int i = 0; i < n*2-1; ++i) printf("%d ",a[i]);
}