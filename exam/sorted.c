//
// Created by Jinx on 2023/2/17.
//

#include "stdio.h"

int main() {
    int T, n[10] = {0}, m[10] = {0}, n_arr[10][1000] = {0}, m_arr[10][1000] = {0}, trans;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        scanf("%d%d", n + i, m + i);
        for (int j = 0; j < n[i]; ++j) {
            scanf("%d", n_arr[i] + j);
        }
        for (int j = 0; j < m[i]; ++j) {
            scanf("%d", m_arr[i] + j);
        }
    }
    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < m[i]; ++j) {
            trans = n_arr[i][m_arr[i][j] - 1];
            for (int k = m_arr[i][j] - 1; k > 0; --k) {
                n_arr[i][k] = n_arr[i][k - 1];
            }
            n_arr[i][0] = trans;
        }
    }
    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < n[i] - 1; ++j) {
            if(n_arr[i][j] > n_arr[i][j + 1]){
                printf("mayi is a0 good teacher\n");
                break;
            }
            if(j == n[i] - 2){
                printf("I love C programming language\n");
            }
        }
    }
}