//
// Created by Jinx on 2023/2/17.
//

#include "stdio.h"
#include "stdlib.h"

int main() {
    int n, q, cur_q, l, r;
    scanf("%d%d", &n, &q);
    int *n_arr = malloc(4 * n), *q_arr = malloc(4 * q);
    for (int i = 0; i < n; ++i) {
        scanf("%d", n_arr + i);
    }
    for (int i = 0; i < q; ++i) {
        l = 0;
        r = n - 1;
        scanf("%d", &cur_q);
        if (cur_q == n_arr[l]) {
            q_arr[i] = l;
            continue;
        }
        if (cur_q == n_arr[r]) {
            q_arr[i] = r;
            continue;
        }
        label:
        if (l == r || r - l ==1) {
            q_arr[i] = -1;
            continue;
        }
        if (cur_q == n_arr[(r + l) / 2]) {
            q_arr[i] = (r + l) / 2;
            continue;
        }
        if(cur_q > n_arr[(r + l) / 2]){
            l = (r + l) / 2;
            goto label;
        }
        if(cur_q < n_arr[(r + l) / 2]){
            r = (r + l) / 2;
            goto label;
        }
    }
    for (int i = 0; i < q; ++i) {
        printf("%d\n", q_arr[i]);
    }
}