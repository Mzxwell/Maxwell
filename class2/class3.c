//
// Created by Jinx on 2022/10/14.
//
#include<stdio.h>
int Min(int arrr[], int len);
int main (){
    int arr[10] = {100,8,7,0,4,20,65,67,-5,-20};
    printf("%d", Min(arr, 10));
//    int number[] = {0};
//int a0 = sizeof number / sizeof (number[0]);
//long long b=0;
//    printf("%lld", b);
}

int Min(int arrr[], int len) {
    if (len == 2) {
        return arrr[len - 2] < arrr[len - 1] ? arrr[len - 2] : arrr[len - 1];
    }
    return Min(arrr, len - 1) < arrr[len - 1] ? Min(arrr, len - 1) : arrr[len - 1];
}
