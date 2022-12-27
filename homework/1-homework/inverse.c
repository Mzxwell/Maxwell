//
// Created by Jinx on 2022/10/6.
//
#include<stdio.h>
int main(){
    int a,s,d,f,g,h;
    scanf("%d",&h);
    d=h/10000;
    s=(h%10000)/1000;
    a=(h%1000)/100;
    g=(h%100)/10;
    f=h%10;
    printf("%d%d%d%d%d",a,s,d,f,g);

}