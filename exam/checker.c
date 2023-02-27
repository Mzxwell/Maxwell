//
// Created by Jinx on 2023/2/26.
//

#include "stdio.h"
#include "stdbool.h"
#include "string.h"

bool is_hui_wen(char a[]){
    int b = strlen(a);
    for (int i = 0; i < b; ++i) {
        if(a[i] != a[b - 1 - i]){
            return false;
        }
    }
    return true;
}

int main() {
    int T, n, a, length, b[2];
    char q_a_a[2][1000001];
    bool is_correct[80] = {0}, used[100];
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < 100; ++j) {
            used[j] = 0;
        }
        a = 0;
        scanf("%d%s%s", &n, q_a_a[0], q_a_a[1]);
        length = strlen(q_a_a[1]);
        if(is_hui_wen(q_a_a[1])) {
            for (int j = 0; j < n / 2; ++j) {
                if (q_a_a[0][n - j - 1] == '?') {
                    if (q_a_a[0][j] == '?') {
                        if (q_a_a[1][j + a] == q_a_a[1][length - a - 1 - j] &&
                            q_a_a[1][j + a + 1] == q_a_a[1][length - a - 2 - j]) {
                            b[0] = (q_a_a[1][j + a] - 48) * 10 + q_a_a[1][j + a + 1] - 48;
                            b[1] = (q_a_a[1][j + a + 1] - 48) * 10 + q_a_a[1][j + a] - 48;
                            if (used[b[0]]) {
                                if (used[b[1]]) {
                                    is_correct[i] = 1;
                                    break;
                                } else {
                                    used[b[1]] = 1;
                                }
                            } else {
                                used[b[0]] = 1;
                            }
                            a++;
                        } else {
                            is_correct[i] = 1;
                            break;
                        }
                    } else {
                        if (q_a_a[1][j + a] != q_a_a[0][j]) {
                            is_correct[i] = 1;
                            break;
                        }
                    }
                } else {
                    if (q_a_a[0][n - j - 1] != q_a_a[1][j + a]) {
                        is_correct[i] = 1;
                        break;
                    }
                }
            }
        }else{
            is_correct[i] = 1;
            break;
        }
    }
    for (int i = 0; i < T; ++i) {
        if(is_correct[i]){
            printf("Wrong Answer!\n");
        }else{
            printf("Correct.\n");
        }
    }
}