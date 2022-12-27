//
// Created by Jinx on 2022/10/6.
//
#include<stdio.h>
#include<math.h>
int main(){
    int p,q;
    scanf("%d %d",&p,&q);
    double x1= cbrt((0-q)/2.0+ sqrt((q/2.0)*(q/2.0)+ pow(p/3.0,3)))+ cbrt((0-q)/2.0- sqrt((q/2.0)*(q/2.0)+ pow(p/3.0,3)));
    printf("%.3lf",x1);
}