//
// Created by Jinx on 2022/10/14.
//
#include<stdio.h>

int main(){
    int n;
    int num[2002] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            if (j % i == 0){
                num[j]++;
            }
        }
    }
    for (int m = 1; m <= n; m++){
        if (num[m] % 2 != 0){
            printf("%d ", m);
        }
    }
}
