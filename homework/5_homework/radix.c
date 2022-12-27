//
// Created by Jinx on 2022/10/28.
//
#include<stdio.h>
void chai (int a, int arr[]);

int main () {
    int p, q, r;
    int i = 2;
    int arr_1[10] = {0};
    int arr_2[10] = {0};
    int arr_3[10] = {0};
    scanf("%d%d%d", &p, &q, &r);
    chai (p, arr_1);
    chai (q, arr_2);
    chai (r, arr_3);

    while (i <= 40) {
        if (arr_3[0] + i * arr_3[1] == (arr_1[0] + i * arr_1[1]) * (arr_2[0] + i * arr_2[1]) && arr_3[0] < i && arr_1[0] < i && arr_2[0] < i && arr_1[1] < i && arr_3[1] < i && arr_2[1] < i) {
            break;
        }
            i ++;
    }

    if (i <= 40 && i >= 2) {
        printf("%d", i);
    } else {
        printf("0");
    }
}

void chai (int a, int arr[]) {
    for (int i = 0; i < 9; i ++) {
        arr[i] = a % 10;
        a = a / 10;
    }
}