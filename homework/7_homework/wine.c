//
// Created by Jinx on 2022/11/12.
//
#include<stdio.h>
int maxi(int nums[][10000], int n);

int main(){
    int n, L, max0, max1, max2 = 0;
    int price[2][10000] = {0};
    scanf("%d%d", &n, &L);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &price[0][i]);
    }

    for (int i = 0; i < n; i ++) {
        scanf("%d", &price[1][i]);
    }

    while (L) {
        max1 = maxi(price, n);
        max2 += L > price[1][max1] ? price[0][max1] * price[1][max1] : L * price[0][max1];
        price[0][max1] = 0;
        L = L > price[1][max1] ? L - price[1][max1] : 0;
    }

    printf("%d", max2);
}

int maxi(int nums[][10000], int n){
    int i = 0;
    for (int j = 0; j < n; j ++){
        i = nums[0][j] > nums[0][i] ? j : i;
    }
    return i;
}