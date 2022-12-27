//
// Created by Jinx on 2022/12/2.
//
#include<stdio.h>
int func(int **a);
int main(){
    int arr[3][3] = {
            1,2,3,4,5,6,5,78,9
    };
    printf("%llu\n", sizeof(*arr) / sizeof (int));
    for (int i = 0; i < sizeof(arr) / sizeof (*arr); ++i) {
        for (int j = 0; j < sizeof(*arr) / sizeof (int); ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    func(arr);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int func(int **a){
    for (size_t i = 0; i < sizeof(a) / sizeof(*a); ++i) {
        for (int j = 0; j < sizeof(*a) / sizeof(**a); ++j) {
            int trans;
            trans = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = trans;
        }
    }
}