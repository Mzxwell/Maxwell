//
// Created by Jinx on 2022/12/6.
//
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "conio.h"
#include "time.h"
int main(){

    srand(0);
    int a = rand() % 2834 + 500;
    printf("%d", a);
}