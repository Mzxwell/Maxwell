//
// Created by Jinx on 2022/12/2.
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i = 0, a = 0;
    char names[1000];
    memset(names, '\0', 1000);
    char **c = malloc(1000);
    while(scanf("%c", &names[i++]) != EOF);
    int j = strlen(names);
    *c = names;

    for (int k = 0; k < j; ++k) {
        if(names[k] == '\n') {
            names[k] = '\0';
            a++;
            *(c + a) = names + k + 1;
        }
    }

    for (int k = 0; k < a + 1; ++k) {
        for (int l = k + 1; l < a + 1; ++l) {
            if (strcmp(*(c + k), *(c + l)) > 0){
                char *b = *(c + k);
                *(c + k) = *(c + l);
                *(c + l) = b;
            }
        }
    }

    for (int k = 0; k < a + 1; ++k) {
        printf("%s\n", *(c + k));
    }
}