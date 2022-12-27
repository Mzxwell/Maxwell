//
// Created by Jinx on 2022/12/2.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[5] = {0};
    int c;
    scanf("%d", &c);
    int **d = malloc(c * sizeof (int*));
    int (*b)[5] = malloc(c * sizeof (int[5]));
    printf("%d", b[c / 2][3]);
}