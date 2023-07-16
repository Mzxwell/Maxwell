//
// Created by Jinx on 2023/7/16.
//
#include "stdio.h"

int ans[30];

void findDecomposition(int n, int min, int nFound) {
    if (!n) {
        for (int i = 0; i < nFound; ++i) printf("%d ", ans[i]);
        printf("\n");
        return;
    }
    if (n < min)return;
    for (int i = min; i <= n; ++i) {
        ans[nFound] = i;
        findDecomposition(n - i, i, nFound + 1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    findDecomposition(n,1,0);
}