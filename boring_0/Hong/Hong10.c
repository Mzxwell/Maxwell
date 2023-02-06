//
// Created by Jinx on 2023/2/6.
//

#include "stdio.h"

int main() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("\33[%d;%dm%d\33[0m",40 + j, 30 + i, i * 10 +j);
            if(i * 10 +j >= 10)
                printf("\33[%d;%dm \33[0m",40 + j, 30 + i);
            else
                printf("\33[%d;%dm  \33[0m",40 + j, 30 + i);
        }
        printf("\n");
    }
}