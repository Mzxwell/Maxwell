//
// Created by Jinx on 2022/10/7.
//
#include<stdio.h>
int jsws (int n) {
    int i = 0;
    while (n >= 10) {
        n = n / 10;
        i ++;
    }
    return i + 1;
}
int main(){
    printf("%d", jsws(1000));
}
//    int i, j;
//    int count = 0;
//
//    scanf("%d", &i);
//    for (j = 0; j < 32; j ++){
//        printf("%d ", i & (1 << j));
//        if(i & (1 << j)){
//            count ++;
//        }
//    }
//    printf("\n");
//    printf("%d\n", count);
//}
//    int n = 10001;
//    int a0;
//    a0 = n / 2;
//    scanf("%n",&n);
//    n=n+1;
//    printf("%d",n);
//    char alphabet[1002];
//    int alpha[125] = {0};
//    int n;
//    int max = 0;
//    int max2 = 0;
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        scanf("%c", &alphabet[i]);
//    }
//    max = (int)alphabet[6];
//    printf("%d", max);
//    printf("%c\n", 13 + 'A');
//    printf("%c\n", 13 + 'A');
//printf("%x",130);
