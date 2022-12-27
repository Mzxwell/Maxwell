//
// Created by Jinx on 2022/10/22.
//

#include<stdio.h>
#include<string.h>

int main() {
    char strA[1000], strB[1000];
    int a, n;
    int vectors[6] = {-3, -2, -1, 1, 2, 3};
    scanf("%d%*c", &n);
    scanf("%s", strA);
    a = strlen(strA);
    memset(strB, '.', 1000);

    for (int k = 0; k < n; k ++ ) {
        for (int i = 0; i < a; i++) {

            if (strA[i] == '.') {
                int sta[3] = {0};
                for (int j = 0; j < 6; j++) {
                    if (strA[i + vectors[j]] == 'A') {
                        sta[1]++;
                    }
                    if (strA[i + vectors[j]] == 'B') {
                        sta[2]++;
                    }
                }

                if (sta[1] * sta[2] == 0) {
                    if (sta[1] >= 2 && sta[1] <= 4) {
                        strB[i] = 'A';
                    }
                    if (sta[2] >= 2 && sta[2] <= 4) {
                        strB[i] = 'B';
                    }
                }
            } else {

                if (strA[i] == 'A') {
                    int sta[3] = {0};
                    for (int j = 0; j < 6; j++) {
                        if (strA[i + vectors[j]] == 'B') {
                            sta[0] = 0;
                            break;
                        }
                        if (strA[i + vectors[j]] == 'A') {
                            sta[0] ++;
                        }
                    }
                    if (sta[0] < 5 && sta[0] > 1) {
                        strB[i] = 'A';
                    }
                } else {

                    if (strA[i] == 'B') {
                        int sta[3] = {0};
                        for (int j = 0; j < 6; j++) {
                            if (strA[i + vectors[j]] == 'A') {
                                sta[0] = 0;
                                break;
                            }
                            if (strA[i + vectors[j]] == 'B') {
                                sta[0]++;
                            }
                        }
                        if (sta[0] < 5 && sta[0] > 1) {
                            strB[i] = 'B';
                        }
                    }
                }
            }
        }
        strncpy (strA, strB, a);
        memset(strB, '.', 1000);
    }
    printf("%s", strA);
}