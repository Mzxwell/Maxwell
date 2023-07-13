#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
typedef struct s {
    char **table;
    bool correct;
} sudoku;
bool valid(char **a, int i, int j, char b) {
    int i0 = (i / 3) * 3, j0 = (j / 3) * 3;
    for (int k = 0; k < 9; ++k) if (a[i][k] == b || a[k][j] == b)return 0;
    for (int k = i0; k < i0 + 3; ++k) for (int l = j0; l < j0 + 3; ++l) if (a[k][l] == b)return 0;
    return 1;
}
sudoku *copy(sudoku *a) {
    sudoku *b = (sudoku *) malloc(sizeof(sudoku));
    b->table = (char **) malloc(72);
    for (int i = 0; i < 9; ++i) {
        b->table[i] = (char *) malloc(10);
        for (int j = 0; j < 10; ++j) b->table[i][j] = a->table[i][j];
    }
    b->correct = a->correct;
    return b;
}
sudoku *Solve(sudoku *a) {
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j) {
            if (a->table[i][j] == 48) {
                for (char k = 49; k < 58; ++k)
                    if (valid(a->table, i, j, k)) {
                        sudoku *b = copy(a);
                        b->table[i][j] = k;
                        sudoku *c = Solve(b);
                        if (c->correct)return c;
                    }
                return a;
            }
        }
    a->correct = 1;
    return a;
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
        sudoku one = {sudoku0[i], 0};
        sudoku *result = Solve(&one);
        for (int j = 0; j < 9; ++j) printf("%s\n", result->table[j]);
    }
}