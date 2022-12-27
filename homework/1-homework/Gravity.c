//
// Created by Jinx on 2022/10/6.
//
#include<stdio.h>
int main(){
    double G=6.674e-11,M=77.15,m,R;
    scanf("%lf %lf",&m,&R);
    double f=G*M*m/(R*R);
    printf("%.3e",f);

}