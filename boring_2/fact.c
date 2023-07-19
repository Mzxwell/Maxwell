//
// Created by Jinx on 2023/7/19.
//
#include "stdio.h"
#define mod %1000000007
int main(){
    int n;
    scanf("%d", &n);
    unsigned long long a=n>110000000?281863274:1,b=n>110000000?267529910:0;
    for (int i=n>110000000?110000001:1;i<=n;++i) {
        a=(a mod)*(i mod);
        b=(b mod)+(a mod);
    }
    printf("%llu", b mod);
}