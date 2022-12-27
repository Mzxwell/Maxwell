
#include "stdio.h"
char variable[11];
void print(int a[], int b);
int main() {
    int p1j[10000] = {0}, p2j[10001] = {0}, p1, p2, P1AddP2[10001] = {0}, P1SubP2[10001] = {0}, P1MultiP2[20002] = {0}, com;
    scanf("%d%d", &p1, &p2);
    scanf("%s", variable);
    for (int i = 0; i <= p1; ++i)
        scanf("%d", &p1j[i]);
    for (int i = 0; i <= p2; ++i)
        scanf("%d", &p2j[i]);
    for (int i = 0; i <= p1; ++i)
        for (int j = 0; j <= p2; ++j)
            P1MultiP2[i + j] += p1j[i] * p2j[j];
    if (p2 < p1) {
        int a = p1 - p2;
        for (int i = 0; i <= p2; ++i)
            p2j[p1 - i] = p2j[p2 - i];
        for (int i = 0; i < a; ++i)
            p2j[i] = 0;
    }
    if (p2 > p1) {
        int a = p2 - p1;
        for (int i = 0; i <= p1; ++i)
            p1j[p2 - i] = p1j[p1 - i];
        for (int i = 0; i < a; ++i)
            p1j[i] = 0;
    }
    com = p1 < p2 ? p2 : p1;
    for (int i = 0; i <= com; ++i)
        P1AddP2[i] = p2j[i] + p1j[i];
    for (int i = 0; i <= com; ++i)
        P1SubP2[i] = p1j[i] - p2j[i];
    print(P1AddP2, com);
    printf("\n");
    print(P1SubP2, com);
    printf("\n");
    print(P1MultiP2, p1 + p2);
}
void print(int a[], int b) {
    for (int i = 0; i < b; ++i) {
        if (i == 0) {
            if (a[0] < 0)
                printf("%d", a[0]);
            if (a[0] > 0)
                printf("%d", a[0]);
        } else {
            if (a[i] == 1)
                printf("+");
            if (a[i] == -1)
                printf("-");
            if (a[i] < -1)
                printf("%d", a[i]);
            if (a[i] > 1)
                printf("+%d", a[i]);
            if (a[i] == 0)
                goto label;
        }

        if (i < b - 1)
            printf("%s^%d", variable, b - i);
        if(i == b - 1)
            printf("%s", variable);
        label:;
    }

    if (a[b] > 0)
        printf("+%d", a[b]);
    if (a[b] < 0)
        printf("%d", a[b]);
}