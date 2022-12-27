//
// Created by Jinx on 2022/11/27.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int i = 0;
    char *c = malloc(1024 * sizeof(*c));
    char *a = malloc(129 * sizeof(*a));
    char *b = malloc(1025 * sizeof(*b));
    char *e = malloc(1025 * sizeof(*e));
    memset(c, '\0', 1024 * sizeof(*c));
    memset(b, '\0', 1025 * sizeof(*c));
    scanf("%s", a);
    int j = strlen(a);
    scanf("%s", e);

    while (scanf("%s", b) != EOF) {
        if (*b == '-' && strlen(b) == 2) {
            int d = 0, h = 0;

            for (int k = 0; k < j; ++k) {
                if (*(b + 1) == *(a + k) && *(a + k) != ':') {
                    d = k; h = 1;
                    i++;
                    *(c + i) = *(b + 1);
                    break;
                }
            }

            if (*(a + d + 1) == ':') {
                int g = scanf("%s", b);
                if(g != EOF) {
                    if (*b != '\0' && *b != '\n' && *b != ' ') {
                        i++;
                        *(c + i) = '=';

                        for (int l = 0; l < strlen(b); ++l) {
                            i++;
                            *(c + i) = *(b + l);
                        }
                    }
                }else {
                    printf("%s: option requires an argument -- '%c'", e, *(c + i));
                    goto label;
                }
            }

            if (!h) {
                printf("%s: invalid option -- '%c'", e, *(b + 1));
                goto label;
            }

            i++;
            *(c + i) = '\n';
        }
    }
    printf("%s\n", e);
    int f = 1;
    while (*(c + f) != '\0') {
        printf("%c", *(c + f));
        f++;
    }

    label:
    free(a);
    free(b);
    free(e);
    free(c);
}