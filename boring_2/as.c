//
// Created by Jinx on 2022/11/28.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char *a = malloc(11);
    char *b = malloc(11);
    char *c = b;
    memset(a, '\0', 10);
    memset(b, '\0', 10);
    a = "sdffs";
//    printf("%c", *(a + 1));
    while ((*++c = *++a));
    printf("%s", b + 1);
}