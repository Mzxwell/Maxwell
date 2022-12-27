//
// Created by Jinx on 2022/11/28.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
//    printf("%llu", sizeof (long long));
    char *abc = malloc(11);
    char *b = malloc(11);
    abc = "sdffs";
    char **p = malloc(3);
    *p = abc;
    *(p + 1) = b;
    while((*b++ = *abc++));
    printf("%s\n", *(p + 1));
    memset(b, '\0', 10);
    printf("%s", b);
    abc = *p;
    b = *(p + 1);
    while((*++b = *++abc));
    printf("%s\n", *(p + 1));
    memset(b, '\0', 10);
    abc = *p;
    b = *(p + 1);
    while((*(++b) = *(++abc)));
    printf("%s\n", *(p + 1));
    memset(b, '\0', 10);
    abc = *p;
    b = *(p + 1);
    while((*(++b) = *(++abc)));
    printf("%s\n", *(p + 1));
    free(abc);
    free(b);
    free(p);
}
void StrCpy0(char *dest, const char *src){
    while((*dest++ = *src++));
}