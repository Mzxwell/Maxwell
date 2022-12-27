//
// Created by Jinx on 2022/10/21.
//
#include <stdio.h>
int main () {
    int vectors[8][2] =
            {{0, 1},
             {0, -1},
             {1, 0},
             {-1, 0},
             {1, -1},
             {1,1},
             {-1,1},
             {-1,-1}};

    int n;
    int check[102][102] = {0};
    char arr[102][102];
    scanf("%d%*c", &n);

    for (int i = 0; i < 102; i ++) {
        for (int j = 0; j < 102; j ++) {
            if (i == 0 || j == 0) {
                arr[i][j] =  'o';
            }
        }
    }

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            scanf("%c", &arr[i][j]);
        }
        scanf("%*c");
    }

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 0; k < 8; ++k) {
                int newI = i + vectors[k][0];
                int newJ = j + vectors[k][1];
                if (arr[newI][newJ] == '*') {
                    check[i][j]++;
                }
            }
        }
    }

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            if (arr[i][j] == 'o') {
                printf("%d", check[i][j]);
            } else {
                printf("*");
            }
        }
        if (i != n) {
            printf("\n");
        }
    }
}
//for (int i = 1; i <= n; i ++) {
//for (int j = 1; j <= n; j ++) {
//printf("%c", arr[i][j]);
//}
//}