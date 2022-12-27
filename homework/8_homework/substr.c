//
// Created by Jinx on 2022/11/18.
//
#include<stdio.h>
#include<stdlib.h>

int main() {
    char *numbers = malloc(100005 * sizeof(*numbers));
    char *number = malloc(100005 * sizeof(*numbers));
    if (numbers == NULL || number == NULL) {
        return 0;
    }

    gets(numbers);
    gets(number);
    int i = 0;

    while (*(numbers + i) != '\0') {
        if (*(numbers + i) == *(number)) {
            int j = 0;
            while (*(numbers + j) != '\0') {
                if (*(numbers + i + j) != *(number + j))
                    break;
                else
                    j++;
                if (*(number + j) == '\0') {
                    printf("%d ", i);
                    break;
                }
            }
        }
        i ++;
    }
    free(numbers);
    free(number);
}