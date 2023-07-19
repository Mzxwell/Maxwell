#include "stdio.h"

#define mod %1000000007

int main() {
    unsigned long long a = 1;
    for (int j = 1; j <= 2000; ++j) {
        a = a * j;
        if(a!=a mod){
            a=a mod;
            printf("%llu %d\n",a,j);
        }
    }
}