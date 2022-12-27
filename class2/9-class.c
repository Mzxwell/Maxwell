//
// Created by Jinx on 2022/12/2.
//
#include<stdio.h>
#include<string.h>
int main() {
    int arr0[10] = {0};
    char *arr[] = {
            "fs",
            "sfsd",
            "kjghkdfhgi"
    };
    char *p = arr[0];
    arr[0] = arr[1];
    arr[1] = p;
    for (int i = 0; i < sizeof (arr) / sizeof(char*); ++i) {
        printf("%s\n", arr[i]);
    }
    printf("%llu", sizeof (int));
}

void Swap(char **left, char **right) {

}