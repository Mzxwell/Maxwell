//
// Created by Jinx on 2022/11/18.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a = 6;
    int *arr = &a;
    *(arr + 1) = 0;
    int len;
    scanf("%d", &len);
    printf("%p %d", arr, *(arr + 1));
//    for (int i = 0; i < 100; i ++) {
//        *(arr + i) = i;shift + F6 改名
//        printf("%d ", *(arr + i));
//    }
    int *numbers = malloc(len * sizeof (*numbers));
    if (numbers == NULL){
        return 0;
    }
    for (int i = 0; i < len; i ++)
        scanf("%d", &numbers[i]);
    free(numbers);
}
