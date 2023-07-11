//
// Created by Jinx on 2022/10/30.
//
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void process(char *a, int *b) {
    int d = 0, e = 0, f = 0, g = 0, h = 0, j = 0;
    int c = !strcmp(a, "const") + !strcmp(a, "int") +
            !strcmp(a, "float") + !strcmp(a, "double") +
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

int main() {
    char a[10] = "const";
    int b[10];
    process(a, b + 1);
    printf("%d", b[1]);
//    char a0[10] = "extern";
//    int b[10];
//    process(a0, b);
//    if (b[0] == 1)
//        printf("reserved");
//    char s[300];
//    int i = 0;
//    char a0[] = "yes";
//    while (scanf("%s", &s[i]) != EOF) {
//        i += 40;
//    };
//    printf("%s\n", s);
//    if (*s == *a0)
//        printf("%s\n%s", s, s + 40);
//    char *a0 = malloc(10 * sizeof (char));
//    a0 = "sdakfh";
//    printf("%s", a0);
}
//int a0, b;
//scanf("%d%d", &a0, &b);
//a0 = (a0 > b)? a0 : b;
//printf("%d", a0);