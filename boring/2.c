//
// Created by Jinx on 2022/11/25.
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char *s = malloc(1000);
    char **b = malloc(100);
    for (int i = 0; i < 5; ++i) {
        scanf("%s", s + 10 * i);
    }
    for (int i = 0; i < 5; ++i) {
        *(b + i) = (s + 10 * i);
    }
    for (int i = 0; i < 5; ++i) {
        printf("(%s) ", *(b + i));
    }
}
//char a0[100];
//gets(a0);
//gets(a0 + 10);
//printf("%s %s", a0, a0 + 10);
//while (scanf("%s", s) != EOF)
//printf("%s\n", s);