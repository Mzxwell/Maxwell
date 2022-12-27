//
// Created by Jinx on 2022/10/7.
//
#include <stdio.h>
int main(){
    int a;
    int b=1,c=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        b=b*(i%10007);
        b=b%10007;
        c=c+b;
    };
    printf("%d",c%10007);
}
