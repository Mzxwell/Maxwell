//
// Created by Jinx on 2022/11/27.
//
#include<stdio.h>
#define p(x) ((x == 56) | (x == 61) | (x == 58))
int main(){
    int a;
    int b = ~scanf("%d", &a);
    int c = a | -1;
    if(p(a))
        printf("Yes");
    else
        printf("No");
    printf("\n%d %d %d", b, ~(p(a) - 1), c);
}