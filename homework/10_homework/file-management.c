//
// Created by Administrator on 2022/12/28.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

typedef struct File{
    char wj[11];
    struct File *NextFile0;
    struct File *NextFile1;
}File;

typedef struct PF{
    File *P;
    bool C;
}PF;

File *head = NULL;

void InitHead(char a[10001][2][11]);

void Init(char a[10001][2][11]);

File *search(char a[], File *sear);

int CountF(File *a);

void Delete(File *H, bool a);

PF *SearchP(char a[], File *sear);

void RFree(File *a);

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

    InitHead(files);
    Init(files);

    int i = 0;
    while(com[i][0][0] != '\0'){

        if (com[i][0][0] == 'q'){
            File *F = search(com[i][1], head);
            int a = CountF(F);
            printf("%d\n", a);
        }

        if(com[i][0][0] == 'r'){
            PF *a = SearchP(com[i][1], head);
            Delete(a->P, a->C);
        }

        i++;
    }
    RFree(head);
}

void RFree(File *a){
    if(a->NextFile0 != NULL){
        RFree(a->NextFile0);
    }

    if(a->NextFile1 != NULL){
        RFree(a->NextFile1);
    }

    free(a);
    a = NULL;
}

PF *SearchP(char a[], File *sear){
    PF *b = malloc(sizeof *b);
    if(sear->NextFile0 != NULL && !strcmp(sear->NextFile0->wj, a)){
        b->C = false;
        b->P = sear;
        return b;
    }

    if(sear->NextFile1 != NULL && !strcmp(sear->NextFile1->wj, a)){
        b->C = true;
        b->P = sear;
        return b;
    }
    free(b);
    PF *c = NULL, *d = NULL;

    if(sear->NextFile0 != NULL){
        c = SearchP(a, sear->NextFile0);
    }

    if(sear->NextFile1 != NULL){
        d = SearchP(a, sear->NextFile1);
    }

    return c == NULL ? d : c;
}

int CountF(File *a){
    int c = 1;

    if (a->NextFile0 != NULL){
        c += CountF(a->NextFile0);
    }

    if(a->NextFile1 != NULL){
        c += CountF(a->NextFile1);
    }

    return c;
}

void Delete(File *H, bool a){
    if (a) {
        RFree(H->NextFile1);
        H->NextFile1 = NULL;
    }else{
        RFree(H->NextFile0);
        H->NextFile0 = NULL;
    }
}

void InitHead(char a[10001][2][11]){
    File *file = malloc(sizeof *file);
    head = file;
    head->NextFile0 = NULL;
    head->NextFile1 = NULL;
    strcpy(head->wj, a[0][0]);
}

void Init(char a[10001][2][11]){
    int i = 1;
    while (a[i][0][0] != '\0'){
        File *S = search(a[i][1], head);
        File *file = malloc(sizeof *file);
        file->NextFile1 = NULL;
        file->NextFile0 = NULL;

        if (S->NextFile0 == NULL){
            S->NextFile0 = file;
        } else{
            S->NextFile1 = file;
        }

        strcpy(file->wj, a[i][0]);
        i++;
    }
}

File *search(char a[], File *sear){
    if(!strcmp(sear->wj, a)){
        return sear;
    }
    File *b = NULL, *c = NULL;

    if(sear->NextFile0 != NULL){
        b = search(a, sear->NextFile0);
    }

    if(sear->NextFile1 != NULL){
        c = search(a, sear->NextFile1);
    }

    return c == NULL ? b : c;
}

//    for (int i = 0; i < n; ++i) {
//        printf("%s", files[i][0]);
//    }