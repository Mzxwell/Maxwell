//
// Created by Jinx on 2023/7/16.
//
#include "stdlib.h"
#include "stdio.h"
#define FOR(a,b) for (int (a) = 0; (a) < (b); ++(a))
#define PRINT for (int k = 0; k < n; ++k)printf("%d%c", cube[i][j][k], k == n - 1 ? 10 : ' ');
int main() {
    char op[13];
    int n, side, line[4][3], chara, valid;
    scanf("%s%d", op, &n);
    int **cube[6];
    for (int i = 0; i < 6; ++i) {
        cube[i] = (int **) malloc(8 * n);
        for (int j = 0; j < n; ++j) {
            cube[i][j] = (int *) malloc(4 * n);
            FOR(k,n) scanf("%d", cube[i][j] + k);
        }
    }
    if (op[0] == 'r') {
        scanf("%d", &side);
        for (int i = 0; i < 6; ++i)
            if (side == i)FOR(k,n)for (int j = n - 1; j >= 0; --j)printf("%d%c", cube[i][j][k], j ? ' ': 10);
            else FOR(j,n)PRINT
    } else {
        for (int i = 0; i < 4; ++i) {
            scanf("%d%d", line[i], line[i] + 1);
            line[i][2] = line[i][0] * 1000 + line[i][1];
        }
        for (int i = 0; i < 6; ++i)
            for (int j = 0; j < n; ++j) {
                chara = i * 1000 + j;
                valid = 5;
                for (int k = 0; k < 4; ++k)
                    if (chara == line[k][2]) {
                        valid = (k+3)%4;
                        break;
                    }
                if(valid==5)PRINT
                else for (int k = 0; k < n; ++k)printf("%d%c", cube[line[valid][0]][line[valid][1]][k], k == n - 1 ? 10 : ' ');
            }
    }
}