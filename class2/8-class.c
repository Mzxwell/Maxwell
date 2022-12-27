//
// Created by Jinx on 2022/12/2.
//
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
//    for (int i = 0; i < argc; ++i) {
//        printf("%s\n", argv[i]);
//    }
    for(char **ptr = argv; *ptr != NULL; printf("%s\n", *ptr), ptr++);
    int **p = malloc(5 * sizeof (*p));
    for (int i = 0; i < 5; ++i) {
        *(p + i) = malloc(sizeof(int[5]));
        for (int j = 0; j < 5; ++j) {
            (*(p + i))[j] = 0;
        }
    }
    p[2][2] = 2;
    printf("%d %d\n", p[4][4], p[2][2]);
    for (int i = 0; i < 100 / sizeof(*p); ++i) {
        for (int j = 0; j < sizeof(*p) / sizeof(int); ++j) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}
int arr_0(int a[][5]){
    for (int i = 0; i < sizeof(a) / sizeof(int[5]); ++i) {
        for (int j = 0; j < 5; ++j) {
            int trans;
            trans = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = trans;
        }
    }
}