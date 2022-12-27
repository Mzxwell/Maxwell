//
// Created by Jinx on 2022/11/18.
//
#include<stdio.h>
int main(){
    int a;
    scanf("%x", &a);
    int *p = &a;
    unsigned int *q = &a;
    float *c= &a;
    printf("%d\n", (int)*p);
    printf("%u\n", (unsigned int)*q);
    printf("%f\n", *c);
    printf("%.3e", *c);
}