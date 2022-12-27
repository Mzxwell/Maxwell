//
// Created by Jinx on 2022/10/14.
//
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i*i <= n; i++){
        printf ("%d ", i*i);
    }
}
