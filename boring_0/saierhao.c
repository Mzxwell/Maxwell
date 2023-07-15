//
// Created by Jinx on 2023/7/15.
//
#include "stdio.h"
#include "stdlib.h"

int main() {
    int m;
    scanf("%d", &m);
    double **date = (double **) malloc(8 * m),sita[2]={1,1},sita_[2];
    for (int i = 0; i < m; ++i) {
        date[i] = (double *) malloc(16);
        scanf("%lf %lf", date[i], date[i] + 1);
    }
    for (int i = 0; i < 2000; ++i) {
        sita_[0]=0;
        sita_[1]=0;
        for (int j = 0; j < m; ++j) {
            sita_[0]+=sita[0]+sita[1]*date[j][0]-date[j][1];
            sita_[1]+=(sita[0]+sita[1]*date[j][0]-date[j][1])*date[j][0];
        }
        for (int j = 0; j < 2; ++j) sita[j]=sita[j]-0.01*sita_[j]/m;
    }
    printf("y = %.3lf + %.3lfx",sita[0],sita[1]);
}