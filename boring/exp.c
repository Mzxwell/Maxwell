//
// Created by Jinx on 2022/11/5.
//
#include<stdio.h>
#include"forfun.h"
int main() {
    int a[2] = {0};
    a[0] ^= a[1];
    printf("%d", a[0]);
}