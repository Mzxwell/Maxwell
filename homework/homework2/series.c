//
// Created by Jinx on 2022/10/7.
//
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double x;
    double a=0;
    scanf("%lf%d",&x,&n);
    for (int i=0;i<=n;i++){
        a=a + (2 * (0 - (i % 2) + 0.5))*pow(x,2 * i+1)/(2*i+1);
    };
    a=4*a;
    printf("%.10lf",a);

    return 0;
}
//double a=pow(-1,3);
//printf("%lf",a);