//
// Created by Jinx on 2023/7/17.
//
#include "stdio.h"
int main(){
    char a[1000];
    FILE *file= fopen("./test-*/main.c","r");
    fread(a,1,999,file);
    printf("%s", a);
}