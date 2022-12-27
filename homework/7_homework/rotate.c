//
// Created by Jinx on 2022/11/13.
//
#include<stdio.h>

int main() {
    int a, b, c, i = 0;
    char arr[1001];
    scanf("%d%d%d%*c", &a, &b, &c);
    int zuobiao[2][3] = {0, 0, 0,a,b,c};
    gets(arr);

    while(arr[i] != '\0'){
        if(arr[i] == 87){
            int trans = 0;
            trans = zuobiao[1][2];
            zuobiao[1][2] = zuobiao[1][0] - zuobiao[0][0];
            zuobiao[1][0] = zuobiao[0][0];
            zuobiao[0][0] -= trans;
        }

        if(arr[i] == 65){
            int trans = 0;
            trans = zuobiao[1][2];
            zuobiao[1][2] = zuobiao[1][1] - zuobiao[0][1];
            zuobiao[1][1] = zuobiao[0][1];
            zuobiao[0][1] -= trans;
        }

        if(arr[i] == 83){
            int trans = 0;
            trans = zuobiao[1][0];
            zuobiao[1][0] += zuobiao[1][2];
            zuobiao[1][2] = trans - zuobiao[0][0];
            zuobiao[0][0] = trans;
        }

        if(arr[i] == 68){
            int trans = 0;
            trans = zuobiao[1][1];
            zuobiao[1][1] += zuobiao[1][2];
            zuobiao[1][2] = trans - zuobiao[0][1];
            zuobiao[0][1] = trans;
        }
        i++;
    }
    printf("%d %d %d %d", zuobiao[0][0], zuobiao[1][0], zuobiao[0][1], zuobiao[1][1]);
}