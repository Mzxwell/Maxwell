//
// Created by Jinx on 2022/10/6.
//
#include<stdio.h>
#include<math.h>
int main(){
    double pi = 4 * (4 * atan(1.0 / 5) - atan(1.0 / 239));
    double pi0=log(pow(640320,3)+744)/(sqrt(163));
    printf("%.15f\n%.15f\n",pi,pi0);
};