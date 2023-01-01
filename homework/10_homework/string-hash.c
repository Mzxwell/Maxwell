//
// Created by Administrator on 2022/12/29.
//

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "stdbool.h"

#define N 500000

typedef struct Str {
    char *s;
    struct Str *str;
} Str;

Str *HashStr[N] = {NULL};
int m, q;

int hash(char *s);

bool IsInA(char s[]);

bool IsInLL(char s[], Str *a);

void Free(Str *a);

int main() {
    char s[1001];
    size_t a;
    int Hash;
    scanf("%d%d", &m, &q);
    char **sear = malloc((q + 1) * sizeof(char*));

    for (int i = 0; i < m; ++i) {
        Str *New = malloc(sizeof *New);
        New->str = NULL;
        scanf("%s", s);
        a = strlen(s);
        char *str = malloc(a + 1);
        strcpy(str, s);
        New->s = str;
        Hash = hash(New->s);
        New->str = HashStr[Hash];
        HashStr[Hash] = New;
    }

    for (int i = 0; i < q; ++i) {
        scanf("%s", s);
        a = strlen(s);
        char *str = malloc(a + 1);
        strcpy(str, s);
        *(sear + i) = str;
    }

    for (int i = 0; i < q; ++i) {
        if(IsInA(*(sear + i))){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    }

    for (int i = 0; i < 500000; ++i) {
        Free(HashStr[i]);
    }
}

void Free(Str *a){
    if(a == NULL) {
        return;
    }else{
        Free(a->str);
        free(a);
    }
}

bool IsInLL(char s[], Str *a) {
    if (a != NULL) {
        if (!strcmp(s, a->s)) {
            return true;
        } else {
            return IsInLL(s, a->str);
        }
    } else {
        return false;
    }
}

bool IsInA(char s[]) {
    int a = hash(s);
    return IsInLL(s, HashStr[a]);
}

int hash(char *s) {
    int len = strlen(s);
    int ret = 0;
    for (int i = 0; i < len; i++)ret = (ret + s[i] * (i + 1)) % N;
    return ret;
}