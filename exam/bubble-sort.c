//
// Created by Jinx on 2023/2/19.
//

#include "stdio.h"
#include "stdbool.h"

int main() {
    int T, n, a[50000] = {0};
    scanf("%d", &T);
    bool yes_or_no[100000] = {};
    for (int i = 0; i < T; i++) {
        yes_or_no[i] = true;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < n; j++) {
            if (a[n - 1] < a[j]){
                yes_or_no[i] = false;
                break;
            }
        }
    }
    for (int i = 0; i < T; i++) {
        if (yes_or_no[i]) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
}