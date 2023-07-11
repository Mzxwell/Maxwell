//
// Created by Jinx on 2022/11/26.
//
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void process(char *a, int *b);
int main() {
    int i = 0;
    char *s = malloc(5000 * sizeof(*s));
    int *a = malloc(5000 * sizeof(*a));

    while (scanf("%s", s) != EOF) {
        char *position = strchr(s, ';');
        if (position == NULL) {
            process(s, a + i);
            i ++;
        }else {
            *position = '\0';
            if(*s != ' ' && *s != '\n' && *s != '\0') {
                process(s, a + i);
                i++;
            }
            *(a + i) = 6;
            i++;
            if(*(position + 1) != ' ' && *(position + 1) != '\n' && *(position + 1) != '\0') {
                process((position + 1), a + i);
                i++;
            }
        }
    }

    for (int j = 0; j < i; ++j) {
//        printf("%d ", *(a0 + j));
        if (*(a + j) == 0) {
            printf("Compile Error");
            goto label;
        }
    }

    for (int j = 0; j < i; ++j) {
        if(*(a + j) == 1)
            printf("reserved ");
        else if(*(a + j) == 2)
            printf("integer ");
        else if(*(a + j) == 3)
            printf("float ");
        else if(*(a + j) == 4)
            printf("operator ");
        else if(*(a + j) == 5)
            printf("variable ");
        else if(*(a + j) == 6)
            printf("\n");
    }
    label:
    free(a);
    free(s);
}

void process(char *a, int *b) {
    int d = 0, e = 0, f = 0, g = 0, h = 0, j = 0;
    int c = !strcmp(a, "const") + !strcmp(a, "int") +
            !strcmp(a, "float") + !strcmp(a, "long") +
            !strcmp(a, "double") + !strcmp(a, "static") +
            !strcmp(a, "void") + !strcmp(a, "char") +
            !strcmp(a, "extern") + !strcmp(a, "return") +
            !strcmp(a, "break") + !strcmp(a, "enum") +
            !strcmp(a, "struct") + !strcmp(a, "typedef") +
            !strcmp(a, "union") + !strcmp(a, "goto");

    if (c)
        *b = 1;
    else{
        while(*(a + h) != '\0'){
            if (*a >= 48 && *a <= 57)
                break;
            if ((*(a + h) >= 48 && *(a + h) <= 57) || *(a + h) >= 65 && *(a + h) <= 90 || *(a + h) >= 97 && *(a + h) <= 122
                || *(a + h) == '_')
                j = 1;
            else{
                j = 0;
                break;
            }
            h++;
        }

        if(j)
            *b = 5;
    }

    for(int i = 0; *(a + i) != '\0'; i ++){
        if (*(a + i) >= 48 && *(a + i) <= 57)
            d = 1;
        else {
            d = 0;
            break;
        }
    }

    if(d)
        *b = 2;

    while(*(a + e) != '\0'){
        if (*(a + e) >= 48 && *(a + e) <= 57)
            f++;
        if (*(a + e) == '.')
            g++;
        e++;
    }

    if (g == 1 && e == f + g)
        *b = 3;

    if(strlen(a) <= 2){
        if(*a == '=' || *a == '<' || *a == '>' || *a == '/' ||*a == '-' || *a == '*' || *a == '+' ||
           (*(a + 1) == '=' && (*a == '=' || *a == '!' || *a == '>' || *a == '=' || *a == '<')))
            *b = 4;
    }
}