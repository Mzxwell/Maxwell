//
// Created by Jinx on 2022/11/11.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void StrCopy(char *dest, const char *src) {
    while (*dest++ = *src++);
}

int main() {
    char msg[100];
    gets(msg);
    gets(msg + 50);
    char *dest = malloc(strlen(msg) + 1);
    StrCopy(dest, msg);
    printf("%s ", dest);
    printf("%llu %llu ", strlen(msg), strlen(msg + 50));
    free (dest);
    unsigned long long int a = 0 - 1;
    printf("%llu", a);
}