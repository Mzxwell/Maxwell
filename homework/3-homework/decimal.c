//
// Created by Jinx on 2022/10/15.
//
#include <stdio.h>
#include<math.h>

int main() {
    int len, N;
    int a = 0;
    char s[32];
    int num[32] = {0};
    scanf("%d%d%*c", &len, &N);

    for (int i = 1; i <= len; i++) {
        scanf("%c", &s[i]);
    }

    for (int i = 1; i <= len; i++) {
        num[i] = s[i];
    }

    for (int i = 1; i <= len; i++) {
        if (num[i] >= 48 && num[i] <= 57) {
            num[i] = num[i] - 48;
        } else if (num[i] >= 65 && num[i] <= 70) {
            num[i] = num[i] - 55;
        } else {
            num[i] = -1;
        }
    }

    for (int i = 1; i <= len; i++) {
        if (num[i] == -1) {
            printf("Error");
            goto done;
        } else if (num[i] >= N) {
            printf("Error");
            goto done;
        } else {
            num[i] = num[i] * pow(N, len - i);
        }
    }

    for (int j = 1; j <= len; j++) {
        a = a + num[j];
    }

    printf("%d", a);
    done:;
}