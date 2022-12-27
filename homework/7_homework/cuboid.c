//
// Created by Jinx on 2022/11/12.
//
#include<stdio.h>

int main() {
    int T;
    int cuboid[50][3] = {0};
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d%d%d", &cuboid[i][0], &cuboid[i][1], &cuboid[i][2]);
    }

    for (int j = 0; j < T; j++) {
        int b = 0;
        int x = cuboid[j][1] < cuboid[j][2] ? cuboid[j][1] : cuboid[j][2];
        for (int i = 0; i < x; i++) {
            int x0 = 2 * (cuboid[j][1] - i);

            for (int k = 0; k < x0; k++)
                printf(" ");

            for (int a = 0; a < cuboid[j][0]; a++) {
                printf("+-");
                if (a == cuboid[j][0] - 1)
                    printf("+");
            }

            b = x < i ? x : i;

            while (b) {
                printf(" +");
                b--;
            }

            printf("\n");
            int x1 = 2 * (cuboid[j][1] - i) - 1;

            for (int k = 0; k < x1; k++)
                printf(" ");

            for (int a = 0; a < cuboid[j][0]; a++) {
                printf("/ ");
                if (a == cuboid[j][0] - 1)
                    printf("/|");
            }

            b = x < i ? x : i;

            while (b) {
                printf("/|");
                b--;
            }

            printf("\n");
        }

        if(cuboid[j][1] < cuboid[j][2]) {
            int x2 = cuboid[j][2] - cuboid[j][1];
            for (int i = 0; i < x2; i++) {

                for (int a = 0; a < cuboid[j][0]; a++) {
                    printf("+-");
                    if (a == cuboid[j][0] - 1)
                        printf("+");
                }

                b = cuboid[j][1];

                while (b) {
                    printf(" +");
                    b--;
                }

                printf("\n");

                for (int a = 0; a < cuboid[j][0]; a++) {
                    printf("| ");
                    if (a == cuboid[j][0] - 1)
                        printf("|");
                }

                b = cuboid[j][1];

                while (b) {
                    printf("/|");
                    b--;
                }

                printf("\n");
            }
        }

        if(cuboid[j][1] > cuboid[j][2]) {
            int x3 = cuboid[j][1] - cuboid[j][2];
            for (int i = 0; i < x3; i++) {

                int x4 = 2 * (cuboid[j][1] - cuboid[j][2]);
                for (int k = 0; k < x4 - 2 * i; k++)
                    printf(" ");

                for (int a = 0; a < cuboid[j][0]; a++) {
                    printf("+-");
                    if (a == cuboid[j][0] - 1)
                        printf("+");
                }

                b = cuboid[j][2];

                while (b) {
                    printf(" +");
                    b--;
                }

                printf("\n");
                for (int k = 0; k < x4 - 2 * i - 1; k++)
                    printf(" ");

                for (int a = 0; a < cuboid[j][0]; a++) {
                    printf("/ ");
                    if (a == cuboid[j][0] - 1)
                        printf("/");
                }

                b = x;

                while (b) {
                    printf("|/");
                    b--;
                }

                printf("\n");
            }
        }

        for (int i = 0; i < x; i++) {

            for (int a = 0; a < cuboid[j][0]; a++) {
                printf("+-");
                if (a == cuboid[j][0] - 1)
                    printf("+");
            }

            b = x < x - i ? x : x - i;

            while (b) {
                printf(" +");
                b--;
            }

            printf("\n");

            for (int a = 0; a < cuboid[j][0]; a++) {
                printf("| ");
                if (a == cuboid[j][0] - 1)
                    printf("|/");
            }

            b = x - 1 < x - i - 1 ? x - 1 : x - i - 1;

            while (b) {
                printf("|/");
                b--;
            }

            printf("\n");
        }
        for (int a = 0; a < cuboid[j][0]; a++) {
            printf("+-");
            if (a == cuboid[j][0] - 1)
                printf("+");
        }
        printf("\n");
    }
}