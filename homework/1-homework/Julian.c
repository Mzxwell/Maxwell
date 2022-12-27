//
// Created by Jinx on 2022/10/6.
//
#include<stdio.h>
#include<math.h>
int main(){
    int year,month,day,JDN,a,y,m;
    scanf("%d %d %d",&year,&month,&day);
    a= floor((14-month)/12);
    y=year+4800-a;
    m=month+12*a-3;
    JDN=day+floor((153*m+2)/5)+365*y+ floor(y/4)- floor(y/100)+ floor(y/400)-32045;
    printf("%d",JDN);
}