//
// Created by Jinx on 2022/11/13.
//
#include<stdio.h>

int main() {
    int T;
    char c;
    char kuohao[30][10000];

    scanf("%d%*c", &T);

    for (int i = 0; i < T; i++) {
        gets(kuohao[i]);
    }

    for (int i = 0; i < T; i++) {
        int j = 0, k = 1;
        char is[10000];

        while (kuohao[i][j] != '\0') {
            is[k] = kuohao[i][j];

            if (is[k] == is[k - 1] + 1 || is[k] == is[k - 1] + 2) {
                is[k] = '\0';
                is[k - 1] = '\0';
                k -= 2;
            }

            if ((is[k] - is[k - 1]) != 51 &&
                (is[k] - is[k - 1]) != 83 &&
                (is[k] - is[k - 1]) != 32 &&
                (is[k] - is[k - 1]) != -83 &&
                (is[k] - is[k - 1]) != -51 &&
                (is[k] - is[k - 1]) != -32 &&
                (is[k] - is[k - 1]) != 0 && k > 1)
                break;

            j++;
            k++;
        }
        if (is[1] != '\0')
            printf("False\n");
        else
            printf("True\n");
    }
}

//for(int i = 0; i < T; i ++)
//{
//int j = 0, a0 = 0;
//while (kuohao[i][j] != '\0')
//{
//c = kuohao[i][j];
//while (kuohao[i][a0] != '\0')
//{
//if (c == kuohao[i][a0] + 1 || c == kuohao[i][a0] + 2)
//{
//kuohao[i][a0] = '\0';
//kuohao[i][j] = '\0';
//break;
//}
//a0++;
//}
//}
//}