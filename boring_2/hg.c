//
// Created by Jinx on 2022/12/1.
//
#include<stdio.h>
void Strpy5 (char *dest, const char *src) {
    while ((*dest++ = *src++));
}
int main(){
    char str[] ="sdfljsdl";
    char str0[50];
    Strpy5(str0, str);
    printf("%s\n%s", str, str0);
}