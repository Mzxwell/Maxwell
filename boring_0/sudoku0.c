//
// Created by Jinx on 2023/7/14.
//
#include "stdio.h"
#include "stdlib.h"
char valid(char **a, int i, int j, char b) {
    int i0 = (i / 3) * 3, j0 = (j / 3) * 3;
    for (int k = 0; k < 9; ++k) if (a[i][k] == b || a[k][j] == b)return 0;
    for (int k = i0; k < i0 + 3; ++k) for (int l = j0; l < j0 + 3; ++l) if (a[k][l] == b)return 0;
    return 1;
}
char Solve(char **a, int row, int col) {
    row+=col/9;
    col=col%9;
    if (row == 9)return 1;
    if (a[row][col] == 48) {
        for (char i = 49; i < 58; ++i)
            if (valid(a, row, col, i)) {
                a[row][col] = i;
                if (Solve(a, row, col + 1))return 1;
            }
        a[row][col]=48;
        return 0;
    }
    return Solve(a,row,col+1);
}
int main() {
    int T;
    scanf("%d\n", &T);
    char ***sudoku0 = (char ***) malloc(8 * T);
    for (int i = 0; i < T; ++i) {
        sudoku0[i] = (char **) malloc(72);
        for (int j = 0; j < 9; ++j) {
            sudoku0[i][j] = (char *) malloc(10);
            fgets(sudoku0[i][j], 10, stdin);
            getchar();
        }
    }
    for (int i = 0; i < T; ++i) {
        Solve(sudoku0[i],0,0);
        for (int j = 0; j < 9; ++j) printf("%s\n", sudoku0[i][j]);
    }
}