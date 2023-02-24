//
// Created by Jinx on 2023/2/24.
//

#include <stdio.h>
#include "string.h"

void Func(char* str);

int main(){
    char a[2000000];
    int i = 0;
    while (scanf("%c", a + (i++)) != EOF);
    Func(a);
    printf("%s", a);
}

void Func(char* str){
    char a;
    size_t b = strlen(str);
    size_t c = b / 2;
    for (int i = 0; i < c; ++i) {
        a = str[i];
        str[i] = str[b - 1 - i];
        str[b - 1 - i] = a;
    }
}