//
// Created by Jinx on 2022/10/28.
//
#include<stdio.h>
void swap (int *a, int *b);

int main () {
    int n;
    int arr[2000];
    scanf("%d", &n);
    int j = n - 1;
    int k = n - 1;
    int l = n - 1;

    for (int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }

    while (j > 0) {
        if (arr[j] < arr[j - 1]) {
            j --;
        } else {
            break;
        }
    }

   while (k >= j) {
       if (arr[k] < arr[j - 1]) {
           k --;
       } else {
           swap(&arr[k], &arr[j - 1]);
           break;
       }
   }

   for (int i = 0; i < j; i ++) {
       printf("%d ", arr[i]);
   }

   for (l; l >= j; l --) {
       printf("%d ", arr[l]);
   }
}

void swap (int *a, int *b) {
    int p;
    p = *a;
    *a = *b;
    *b = p;
}