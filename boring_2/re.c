//
// Created by Jinx on 2022/11/28.
//
#include<stdlib.h>
#include<stdio.h>
int main(){
    int a = 1, b = 1, c = ++a, d = b++;
    printf("%d %d %d %d", d, c, a, b);
}