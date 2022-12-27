#include<stdio.h>
int main(){
    int n,a,b,c,d,e;
    scanf("%d",&n);
    a=n/50;
    b=(n%50)/20;
    c=((n%50)%20)/10;
    d=(((n%50)%20)%10)/5;
    e=(((n%50)%20)%10)%5;
    printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);

};
// Created by Jinx on 2022/10/5.
//
