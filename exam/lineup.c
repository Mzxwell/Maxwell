//
// Created by Jinx on 2023/2/18.
//

#include "stdio.h"
#include "stdlib.h"

typedef struct xiao_peng_you {
    struct xiao_peng_you *you, *xia;
    int num;
} xiao_peng_you;

void build(int n, int m, xiao_peng_you **);

xiao_peng_you *Seek(int y, xiao_peng_you *head);

void change_x(xiao_peng_you *a, xiao_peng_you *b);

void change_y(xiao_peng_you *a, xiao_peng_you *b);

int main() {
    xiao_peng_you *seek1, *seek2, *seek0, *seek10, *seek20, *seek11, *seek21;
    int n, m, q, x1[2500], y1[2500], x2[2500], y2[2500], x3[2500], y3[2500], x4[2500], y4[2500], a[2500];
    scanf("%d%d%d", &n, &m, &q);
    long long *q_arr = malloc(q * sizeof (long long));
    xiao_peng_you **line = malloc(n * sizeof(xiao_peng_you *));
    build(n, m, line);

    for (int i = 0; i < q; ++i) {
        scanf("%d%d%d%d%d%d%d%d%d", x1 + i, y1 + i, x2 + i, y2 + i, x3 + i, y3 + i, x4 + i, y4 + i, a + i);
    }

    for (int i = 0; i < q; ++i) {
        if (x1[i] > 1) {
            seek1 = Seek(y1[i], line[x1[i] - 2]);
            seek2 = Seek(y3[i], line[x3[i] - 1]);
            for (int j = 0; j <= y2[i] - y1[i]; ++j) {
                seek1->xia = seek2;
                seek1 = seek1->you;
                seek2 = seek2->you;
            }
        }
        if (x3[i] > 1) {
            seek1 = Seek(y3[i], line[x3[i] - 2]);
            seek2 = Seek(y1[i], line[x1[i] - 1]);
            for (int j = 0; j <= y2[i] - y1[i]; ++j) {
                seek1->xia = seek2;
                seek1 = seek1->you;
                seek2 = seek2->you;
            }
        }
        seek1 = Seek(y1[i], line[x2[i] - 1]);
        seek2 = Seek(y3[i], line[x4[i] - 1]);
        for (int j = 0; j <= y2[i] - y1[i]; ++j) {
            change_x(seek2, seek1);
            seek1 = seek1->you;
            seek2 = seek2->you;
        }
        seek1 = Seek(y1[i], line[x1[i] - 1]);
        seek2 = Seek(y3[i], line[x3[i] - 1]);
        seek11 = seek1;seek21 = seek2;
        if(y1[i] > 1){
            seek10 = Seek(y1[i] - 1, line[x1[i] - 1]);
        }
        if(y3[i] > 1){
            seek20 = Seek(y3[i] - 1, line[x3[i] - 1]);
        }
        if(y1[i] > 1){
            for (int j = 0; j <= x2[i] - x1[i]; ++j) {
                seek10->you = seek2;
                seek10 = seek10->xia;
                seek2 = seek2->xia;
            }
        }else{
            for (int j = 0; j <= x2[i] - x1[i]; ++j) {
                line[x1[i] + j -1] = seek2;
                seek2 = seek2->xia;
            }
        }
        if(y3[i] > 1){
            for (int j = 0; j <= x2[i] - x1[i]; ++j) {
                seek20->you = seek1;
                seek20 = seek20->xia;
                seek1 = seek1->xia;
            }
        }else{
            for (int j = 0; j <= x2[i] - x1[i]; ++j) {
                line[x3[i] + j - 1] = seek1;
                seek1 = seek1->xia;
            }
        }
        seek1 = seek11; seek2 = seek21;
        for (int j = 0; j < y2[i] - y1[i]; ++j) {
            seek2 = seek2->you;
            seek1 = seek1->you;
        }
        for (int j = 0; j <= x2[i] - x1[i]; ++j) {
            change_y(seek1, seek2);
            seek2 = seek2->xia;
            seek1 = seek1->xia;
        }
        seek0 = line[a[i] - 1];
        q_arr[i] = 0;
        while (seek0 != NULL){
            q_arr[i] += seek0->num;
            seek0 = seek0->you;
        }
    }
    for (int i = 0; i < q; ++i) {
        printf("%lld\n", q_arr[i]);
    }
}

void change_y(xiao_peng_you *a0, xiao_peng_you *b){
    xiao_peng_you *trans;
    trans = a0->you;
    a0->you = b->you;
    b->you = trans;
}

void change_x(xiao_peng_you *a0, xiao_peng_you *b){
    xiao_peng_you *trans;
    trans = a0->xia;
    a0->xia = b->xia;
    b->xia = trans;
}

xiao_peng_you *Seek(int y, xiao_peng_you *head) {
    int i = 1;
    xiao_peng_you *p = head;
    while (i < y) {
        p = p->you;
        i++;
    }
    return p;
}

void build(int n, int m, xiao_peng_you **line) {
    xiao_peng_you *creat = NULL;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!j) {
                creat = malloc(sizeof(xiao_peng_you));
                creat->you = NULL;
                creat->xia = NULL;
                creat->num = (i + 1) * m + j + 1;
                line[i] = creat;
            } else {
                creat->you = malloc(sizeof(xiao_peng_you));
                creat = creat->you;
                creat->you = NULL;
                creat->xia = NULL;
                creat->num = (i + 1) * m + j + 1;
            }
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        creat = line[i];
        creat->xia = line[i + 1];
        while (creat->you != NULL) {
            creat->you->xia = creat->xia->you;
            creat = creat->you;
        }
    }
}