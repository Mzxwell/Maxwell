//
// Created by Jinx on 2023/2/17.
//

#include "stdio.h"

int main() {
    int T, a, b;
    char qi_pan[6][21][21];
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < 20; ++j) {
            scanf("%s", qi_pan[i][j]);
        }
    }
    for (int i = 0; i < T; ++i) {
        b = 0;
        for (int j = 0; j < 20; ++j) {
            for (int k = 0; k < 20; ++k) {
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if (j + l - 2 >= 0 && j + l - 2 < 20) {
                        if (qi_pan[i][j + l - 2][k] == '#') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j + l - 2][k] == '*') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    printf("Lose\n");
                    goto label;
                }
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if(j + l - 2 >=0 && j + l - 2 < 20 && k + l - 2 >= 0 && k + l - 2 < 20) {
                        if (qi_pan[i][j + l - 2][k + l - 2] == '#') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j + l - 2][k + l - 2] == '*') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    printf("Lose\n");
                    goto label;
                }
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if(k > 1 && k < 18) {
                        if (qi_pan[i][j][k + l - 2] == '#') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j][k + l - 2] == '*') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    printf("Lose\n");
                    goto label;
                }
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if(j > 1 && j < 18 && k < 18 && k > 1) {
                        if (qi_pan[i][j + l - 2][k + 2 - l] == '#') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j + l - 2][k + 2 - l] == '*') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    printf("Lose\n");
                    goto label;
                }
            }
        }
        for (int j = 0; j < 20; ++j) {
            for (int k = 0; k < 20; ++k) {
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if(j > 1 && j < 18) {
                        if (qi_pan[i][j + l - 2][k] == '*') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j + l - 2][k] == '#') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    for (int l = 0; l < 5; ++l) {
                        if (qi_pan[i][j + l - 2][k] == '_' && !b) {
                            qi_pan[i][j + l - 2][k] = '*';
                            break;
                        }
                    }
                    b++;
                }
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if(j > 1 && j < 18 && k > 1 && k < 18) {
                        if (qi_pan[i][j + l - 2][k + l - 2] == '*') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j + l - 2][k + l - 2] == '#') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    for (int l = 0; l < 5; ++l) {
                        if (qi_pan[i][j + l - 2][k + l - 2] == '_' && !b) {
                            qi_pan[i][j + l - 2][k + l - 2] = '*';
                            break;
                        }
                    }
                    b++;
                }
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if(k > 1 && k < 18) {
                        if (qi_pan[i][j][k + l - 2] == '*') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j][k + l - 2] == '#') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    for (int l = 0; l < 5; ++l) {
                        if (qi_pan[i][j][k + l - 2] == '_' && !b) {
                            qi_pan[i][j][k + l - 2] = '*';
                            break;
                        }
                    }
                    b++;
                }
                a = 0;
                for (int l = 0; l < 5; ++l) {
                    if(j > 1 && j < 18 && k > 1 && k < 18) {
                        if (qi_pan[i][j + l - 2][k + 2 - l] == '*') {
                            a--;
                            break;
                        }
                        if (qi_pan[i][j + l - 2][k + 2 - l] == '#') {
                            a++;
                        }
                    }
                }
                if (a == 4) {
                    for (int l = 0; l < 5; ++l) {
                        if (qi_pan[i][j + l - 2][k + 2 - l] == '_' && !b) {
                            qi_pan[i][j + l - 2][k + 2 - l] = '*';
                            break;
                        }
                    }
                    b++;
                }
                if (b >= 2) {
                    printf("Win\n");
                    goto label;
                }
            }
        }
        printf("Not Sure\n");
        label:
        continue;
    }
}