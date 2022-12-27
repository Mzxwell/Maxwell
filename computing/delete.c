//
// Created by Jinx on 2022/10/30.
//
#include<stdio.h>
#include<string.h>
int main () {
    char str[100];
    int j;
    fgets(str,100,stdin);
    j = strlen(str);
    int i = 0;
    while (i < j - 1) {
        if (str[i] != ' ') {
            printf("%c", str[i]);
        }
        i ++;
    }
}