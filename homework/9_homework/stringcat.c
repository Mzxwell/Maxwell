//
// Created by Jinx on 2022/11/25.
//
#include<stdio.h>
#include<stdlib.h>

int main() {
    int T;
    scanf("%d%*c", &T);
    char *p = malloc(1000000 * sizeof(*p));
    for (int i = 0; i < T; ++i) {
        gets(p + i * 2000);
    }
    for (int i = 0; i < T; ++i) {
        int j = 0, k = 0, a = 0, b = 0;

        while (*(p + 2000 * i + j) != ' ') {
            printf("%c", *(p + 2000 * i + j));
            j++;
        }
        k = j + 1;
        b = k;
        j = 0;

       while(*(p + 2000 * i + j) != ' '){
           a++; j = a; k = b;
           while (*(p + 2000 * i + j) == *(p + 2000 * i + k)){
               j++; k++;
           }
       }

        while (*(p + 2000 * i + k) != '\0') {
            printf("%c", *(p + 2000 * i + k));
            k++;
        }
        printf("\n");
    }

}