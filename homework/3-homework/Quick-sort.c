//
// Created by Jinx on 2022/10/15.
//
#include<stdio.h>
int main(){
    int l = 0;
    int n, k, r, trans, trans1, trans2;
    int num[100000] = {0};
    scanf("%d%d", &n, &k);

    for (int j = 0; j < n; j++){
        scanf("%d", &num[j]);
    }
    trans2 = num[k - 1];
    r = n - 1;
    trans1 =k - 1;


    done:
    while (l < n){
        if (num[l] >= trans2){
            break;
        }
        l++;
    }

    while (r >= 0){
        if (num[r] < trans2){
            break;
        }
        r--;
    }

    if (l < r){
        trans = num[l];
        num[l] = num[r];
        num[r] = trans;
        if (l == trans1) {
            trans1 = r;
        }
        goto done;
    }
    else if (l < k - 1){
        trans = num[l];
        num[l] = num[k - 1];
        num[k - 1] = trans;
    } else if (l > k - 1){
        trans = num[l];
        num[l] = num[trans1];
        num[trans1] = trans;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", num[i]);
    }
}
//int max;
//max = num[l];
//int trans0;
//trans0 = l;
//while (trans0 < k - 1){
//trans0++;
//if (num[trans0] > max){
//max = num[trans0];
//trans1 = trans0;
//}
//}
//num[trans1] = num[k - 1];
//num[k - 1] = max;
//    if (num[l] > num[trans1]){
//        trans = num[l];
//        num[l] = num[trans1];
//        num[trans1] = trans;
//    }