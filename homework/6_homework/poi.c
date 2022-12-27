//
// Created by Jinx on 2022/11/4.
//

#include<stdio.h>
int f[10005] = {0};
int find(int x);

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        scanf("%d", &f[i]);
    }

    for (int i =1; i <= n; i ++) {
        printf("%d ", find(f[i]));
    }
}

int find(int x) {
    if (x == f[x]) {
        return x;
    }
    return find(f[x]);
}