//
// Created by Jinx on 2022/12/3.
//
#include<stdio.h>
#include<stdlib.h>
void func(int **a);
int main(){
    int **p = malloc(5 * sizeof (*p));
    for (int i = 0; i < 5; ++i) {
        *(p + i) = malloc(sizeof(int[5]));
        for (int j = 0; j < 5; ++j) {
           (*(p + i))[j] = i * 5 + j;
        }
    }
    printf("%d %d %d\n%d %d %d\n", p[0][0], p[0][1], p[0][2], p[1][0], p[1][1], (*(p + 1))[2]);
    func(p);
    printf("%d %d %d\n%d %d %d", p[0][0], p[0][1], p[0][2], p[1][0], p[1][1], p[1][2]);
}
void func(int **a){
    int *trans = *a;
    *a = *(a + 1);
    *(a + 1) = trans;
}