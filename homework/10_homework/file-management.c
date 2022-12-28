//
// Created by Administrator on 2022/12/28.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct File{
    char wj[11];
    struct File *NextFile0;
    struct File *NextFile1;
}File;

File *head = NULL;

void InitHead(char a[10001][2][11]);

void Init(char a[10001][2][11]);

File *search(char a[], File *sear);

int main() {
    int n, q;
    char files[10001][2][11];
    char com[500][2][11];
    scanf("%d%d", &n, &q);

    for (int i = 0; i < n; ++i) {
        scanf("%s", files[i][0]);
        scanf("%s", files[i][1]);
    }

    for (int i = 0; i < q; ++i) {
        scanf("%s", com[i][0]);
        scanf("%s", com[i][1]);
    }

}

void InitHead(char a[10001][2][11]){
    File *file = malloc(sizeof *file);
    head = file;
    strcpy(head->wj, a[0][0]);
}

void Init(char a[10001][2][11]){
    int i = 1;
    while (a[i][0][0] != '\0'){
        File *S = search(a[i][1], head);
        File *file = malloc(sizeof *file);

        if (S->NextFile0 == NULL){
            S->NextFile0 = file;
        } else{
            S->NextFile1 = file;
        }

        strcpy(file->wj, a[i][0]);
    }
}

File *search(char a[], File *sear){
    if(!strcmp(sear->wj, a)){
        return sear;
    }

    if(sear->NextFile0 != NULL){
        sear = sear->NextFile0;
        search(a, sear);
    }

    if(sear->NextFile1 != NULL){
        sear = sear->NextFile1;
        search(a, sear);
    }

    return NULL;
}
//    for (int i = 0; i < n; ++i) {
//        printf("%s", files[i][0]);
//    }