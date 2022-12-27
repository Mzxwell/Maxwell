//
// Created by Jinx on 2022/10/14.
//
#include<stdio.h>

int main() {
    char alphabet[1002];
    int alpha[125] = {0};
    int n;
    int max = 0;
    int max2 = 0;
    scanf("%d%*c", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%c", &alphabet[i]);
    }

    for (int j = 1; j <= n; j++) {
        int g;
        g = (int)alphabet[j];
        alpha[g] = alpha[g] + 1;
    }

    for (int a = 65; a <= 122; a++) {
        if (max < alpha[a]) {
            max = alpha[a];
        }
    }

    for (int d = 97; d <= 122; d++) {
        if (alpha[d] != 0) {
            max2++;
        }
        if (alpha[d] == 0 && alpha[d - 32] != 0){
            max2++;
        }
    }

    max2 = max2 * 2 - 1;

    for (int h = 65; h <= 90; h++){
        if (alpha[h] != 0 && alpha[h + 32] != 0){
            max2++;
        }
    }

    for (int b = 1; b <= max; b++) {
        for (int c = 1; c <= 26; c++) {
            if (alpha[96 + c] != 0 || alpha[64 + c] != 0) {
                if (alpha[96 + c] >= max + 1 - b) {
                    printf("=");
                }else if (alpha[96 + c] !=0) {
                    printf(" ");
                }
                if (alpha[64 + c] >= max + 1 - b) {
                    printf("=");
                }else if (alpha[64 + c] !=0) {
                    printf(" ");
                }
                    printf(" ");
            }
        }
        printf("\n");
    }

    for (int e = 1; e <= max2; e++){
        printf("-");
    }

    printf("\n");

    for (int f = 97; f <= 122; f++) {
        if (alpha[f] != 0 || alpha[f - 32] != 0) {
            if (alpha[f] != 0){
                printf("%c", f);
            }
            if (alpha[f - 32] != 0){
                printf("%c", f - 32);
            }
            printf(" ");
        }
    }
}
//        }
//    printf("%d", max);