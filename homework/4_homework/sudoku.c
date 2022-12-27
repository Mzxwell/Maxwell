//
// Created by Jinx on 2022/10/21.
//
#include<stdio.h>
int main () {
    int sudoku[9][9] = {0};
    int check_1[9][9] = {0};
    int check_2[9][9] = {0};
    int check_3[9][9] = {0};
    int check = 0;

    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            scanf("%d", &sudoku[i][j]);
        }
    }

    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            check_1[i][sudoku[i][j] - 1] ++;
            }
    }

    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            check_2[i][sudoku[j][i] - 1] ++;
        }
    }

    for (int a = 0; a <= 6; a = a + 3){
        for (int b = 0; b <= 6; b = b + 3){
            for (int i = 0; i < 3; i ++){
                for (int j = 0; j < 3; j ++){
                    check_3[a + b / 3][sudoku[a + i][b + j] - 1] ++;
                }
            }
        }
    }

    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            if (check_1[i][j] == 1) {
                check ++;
            }
        }
    }

    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            if (check_2[i][j] == 1) {
                check ++;
            }
        }
    }

    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            if (check_3[i][j] == 1) {
                check ++;
            }
        }
    }

    if (check == 243) {
        printf("YES");
    } else {
        printf("NO");
    }
}