//
// Created by Administrator on 2023/1/2.
//

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct BMA {
    int cishu, id;
    struct BMA *NextBMA;
}BMA;

typedef struct Cmd{
    bool Cmd;
    int id, m;
}Cmd;

BMA *Init(int a);

void Insert(int a, int b, BMA *c);

void cut(BMA *a);

int count(BMA *a);

int main() {
    BMA *Q = NULL;
    int n, q;
    scanf("%d%d", &n, &q);
    Cmd *cmd = malloc(q * sizeof (Cmd));
    BMA Head = {n, 0, NULL};

    for (int i = 0; i < q; ++i) {
        char c;
        scanf("%*c%c", &c);

        if (c == 'A'){
            cmd[i].Cmd = true;
            scanf("%d%d", &(cmd[i].id), &(cmd[i].m));
        } else{
            cmd[i].Cmd = false;
        }
    }

    for (int i = 0; i < q; ++i) {
        if(cmd[i].Cmd){
            Insert(cmd[i].id, cmd[i].m, &Head);
        }else{
            printf("%d\n", count(&Head));
            Q = &Head;
            while (Q != NULL){
                printf("%d ", Q->id);
                Q = Q->NextBMA;
            }
            printf("\n");
        }
    }
}

int count(BMA *a){
    if (a->NextBMA == NULL){
        return 1;
    } else{
        return count(a->NextBMA) + 1;
    }
}

void cut(BMA *a){
    BMA *New = malloc(sizeof *New);
    a->cishu--;
    New->cishu = a->cishu;
    New->id = 0;
    New->NextBMA = a->NextBMA;
    a->NextBMA = New;
}

void Insert(int a, int b, BMA *c){
    if (c->id){
        Insert(a, b, c->NextBMA);
    }else{
        if(b <= (1<<(c->cishu - 1))){
            cut(c);
            Insert(a, b, c);
        }else{
            if(b > (1<<c->cishu)){
                Insert(a, b, c->NextBMA);
            }else{
                c->id = a;
            }
        }
    }
}