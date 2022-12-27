//
// Created by Jinx on 2022/11/5.
//

#include<stdio.h>
#include<math.h>
void tri(int n, int arr[][768], int x, int y);
void spa(int a);

int main() {
    int n;
    int triangle[512][768] = {0};
    scanf("%d", &n);
    tri(n, triangle, 0, 0);

    for (int i = 0; i < pow(2, n); i ++) {
        spa(pow(2, n) - i - 1);
        for (int j = 0; j < i * 2 + 2; j ++) {

            if (triangle[i][j] == 0) {
                printf(" ");
            }

            if (triangle[i][j] == 1) {
                printf("/");
            }

            if (triangle[i][j] == 2) {
                printf("\\");
            }

            if (triangle[i][j] == 3) {
                printf("_");
            }
        }
        printf("\n");
    }

}

void tri(int n, int arr[][768], int x, int y) {
    if (n == 1) {
        arr[x][y] = 1;
        arr[x][y +1] = 2;
        arr[x + 1][y] = 1;
        arr[x + 1][y + 1] = 3;
        arr[x + 1][y + 2] = 3;
        arr[x + 1][y + 3] = 2;
        return;
    }
    tri(n - 1, arr, x + pow(2, n - 1), y);
    tri(n- 1, arr, x, y);
    tri(n - 1, arr, x + pow(2, n - 1), y + pow(2, n));
    return;
}

void spa(int a) {
    for (int i = 0; i < a; i ++) {
        printf(" ");
    }
}
//for (int i = 0; i < n; i ++) {
//for (int j = 0; j < n; j ++) {
//tri(n - 1, arr, x + pow(2))
//}
//}