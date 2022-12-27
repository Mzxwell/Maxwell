//
// Created by Jinx on 2022/10/30.
//
#include<stdio.h>
#include<string.h>
int main () {
    char str[100];
    int i;
    gets(str);
    i = strlen(str);
    for (int j = 0; j < i; j ++) {
        if (str[j] >= 97 && str[j] <= 122) {
            printf("%c", str[j] - 32);
        } else {
            printf("%c", str[j]);
        }
    }
}