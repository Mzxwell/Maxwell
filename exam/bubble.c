//
// Created by Jinx on 2023/2/19.
//

#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "limits.h"

#define max(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int T, n, a0 = 0, a1;
    scanf("%d", &T);
    bool *yes_or_no = malloc(T * sizeof(bool));
    for(int i = 0; i < T; i++){
        a1 = INT_MIN;
        scanf("%d", &n);
        for (int j = 0; j < n - 1; j++){
            scanf("%d", &a0);
            a1 = max(a1, a0);
        }
        scanf("%d", &a0);
        if(a1 < a0){
            yes_or_no[i] = 1;
        }else{
            yes_or_no[i] = 0;
        }
    }
    for(int i = 0; i < T; i++){
        if(yes_or_no[i]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}