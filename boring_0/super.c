//
// Created by Jinx on 2023/7/11.
//
#include "stdio.h"
#include <stdlib.h>
#include "string.h"
#include "stdbool.h"

#define bk ;break;

char byte(char *a, int b) {
    if (b < 0)return 0;
    else return a[b] - 48;
}

char *add(char *a, char *b, bool c) {
    int len1 = (int) strlen(a) + 2, len2 = (int) strlen(b) + 2;
    int mLen = len1 > len2 ? len1 : len2;
    char *b3 = malloc(mLen), jin_wei = 0;
    for (int k = 0; k < mLen; ++k) b3[k] = 0;
    for (int k = 0; k < mLen - 1; ++k) {
        char temp = byte(a, len1 - 3 - k) + (c ? byte(b, len2 - 3 - k) : -byte(b, len2 - 3 - k)) + jin_wei;
        jin_wei = temp >= 10 ? 1 : (temp < 0 ? -1 : 0);
        temp = temp >= 10 ? temp - 10 : (temp < 0 ? temp + 10 : temp);
        b3[mLen - 2 - k] = temp + 48;
    }
    while ((b3++)[0] == 48);
    return (--b3)[0] ? b3 : "0";
}

char *mut0(char *a, int b) {
    char *c = "0";
    int len = (int) strlen(a);
    switch (b) {
        case 0:
            return c;
        case 10:
            c = (char *) malloc(len + 2);
            strcpy(c,a);
            c[len] = 48;
            c[len+1]=0;
            return c;
        default:
            for (int i = 0; i < b; ++i) c = add(a, c, 1);
            return c;
    }
}

char *mut1(char *a, char *b) {
    char *c = "0", *c0 = a;
    int len = (int) strlen(b);
    for (int i = 0; i < len; ++i) {
        c0 = i ? mut0(c0, 10) : c0;
        c = add(c, mut0(c0, b[len - 1 - i] - 48), 1);
    }
    return c;
}

char *divide(char *a, char *b) {
    char *c = "0", *d = "0";
    unsigned long long len = strlen(a);
    while (!(strlen(c) > len || (strcmp(c, a) >= 0 && strlen(c) == len))) {
        c = add(c, b, 1);
        d = add(d, "1", 1);
    }
    return strcmp(d, "0") ? add(d, "1", 0) : "0";
}

int main() {
    int T;
    scanf("%d\n", &T);
    char ***lines = (char ***) malloc(8 * T), line[20006], *number;
    for (int i = 0; i < T; ++i) {
        fgets(line, 20006, stdin);
        lines[i] = (char **) malloc(24);
        for (int j = 0; j < 3; ++j) {
            number = strtok(j ? NULL : line, " ");
            lines[i][j] = (char *) malloc(strlen(number) + 1);
            strcpy(lines[i][j], number);
        }
    }
    for (int i = 0; i < T; ++i) {
        if (lines[i][2][strlen(lines[i][2]) - 1] == 10)lines[i][2][strlen(lines[i][2]) - 1] = 0;
        switch (lines[i][1][0]) {
            case '+':
                printf("%s\n", add(lines[i][0], lines[i][2], 1))bk
            case '-':
                printf("%s\n", add(lines[i][0], lines[i][2], 0))bk
            case '*':
                printf("%s\n", mut1(lines[i][0], lines[i][2]))bk
            case '/':
                printf("%s\n", divide(lines[i][0], lines[i][2]))bk
        }
    }
}