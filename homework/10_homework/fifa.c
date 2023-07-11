//
// Created by Jinx on 2022/12/9.
//
#include "stdio.h"
#include "stdlib.h"

typedef struct MemName{
    char name[21];
    int score1;
    int score2;
    int score3;
}MemName;

typedef struct quidui {
    char name[21];
    MemName MemName[11];
}quidui;

int Compare1(const void *left, const void *right);

int Compare2(const void *left, const void *right);

int Compare3(const void *left, const void *right);

int main(){
    int n;
    scanf("%d", &n);
    quidui quidui[1000];
    for (int i = 0; i < n; ++i) {
        scanf("%s", quidui[i].name);
        for (int j = 0; j < 11; ++j) {
            scanf("%s%d%d%d", quidui[i].MemName[j].name,
                  &quidui[i].MemName[j].score1,
                  &quidui[i].MemName[j].score2,
                  &quidui[i].MemName[j].score3);
        }
    }

    qsort(quidui, n, sizeof (*quidui), Compare1);
    for (int i = 0; i < n; ++i) {
        printf("%s ", quidui[n - i - 1].name);
    }
    printf("\n");
    qsort(quidui, n, sizeof (*quidui), Compare2);
    for (int i = 0; i < n; ++i) {
        printf("%s ", quidui[n - i - 1].name);
    }
    printf("\n");
    qsort(quidui, n, sizeof (*quidui), Compare3);
    for (int i = 0; i < n; ++i) {
        printf("%s ", quidui[n - i - 1].name);
    }
    printf("\n");
}

int Compare1(const void *left, const void *right){
    quidui l = *(const quidui *)left;
    quidui r  = *(const quidui *)right;
    int a = 0;
    int b = 0;
    for (int i = 0; i < 11; ++i) {
        a += l.MemName[i].score1;
    }
    for (int i = 0; i < 11; ++i) {
        b += r.MemName[i].score1;
    }
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}

int Compare2(const void *left, const void *right){
    quidui l = *(const quidui *)left;
    quidui r  = *(const quidui *)right;
    int a = 0;
    int b = 0;
    for (int i = 0; i < 11; ++i) {
        a += l.MemName[i].score2;
    }
    for (int i = 0; i < 11; ++i) {
        b += r.MemName[i].score2;
    }
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}

int Compare3(const void *left, const void *right){
    quidui l = *(const quidui *)left;
    quidui r  = *(const quidui *)right;
    int a = 0;
    int b = 0;
    for (int i = 0; i < 11; ++i) {
        a += l.MemName[i].score3;
    }
    for (int i = 0; i < 11; ++i) {
        b += r.MemName[i].score3;
    }
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}
//char *qiudui[1000];
//int scores[1000][11][3];
//int AverageScores[1000][3] = {0};
//for (int i = 0; i < n; ++i) {
//scanf("%s", qiudui[i]);
//for (int j = 0; j < 11; ++j) {
//char a0[20];
//scanf("%s", a0);
//scanf("%d%d%d", &scores[i][j][0], &scores[i][j][1], &scores[i][j][2]);
//}
//}
//
//for (int i = 0; i < n; ++i) {
//for (int j = 0; j < 11; ++j) {
//AverageScores[i][0] += scores[i][j][0];
//AverageScores[i][1] += scores[i][j][1];
//AverageScores[i][2] += scores[i][j][2];
//}
//}
//
//qsort(qiudui, n, sizeof *qiudui, Compare)
//int Compare(const void *left, const void *right);