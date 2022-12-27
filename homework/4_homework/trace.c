//
// Created by Jinx on 2022/10/21.
//
#include<stdio.h>
#include<stdbool.h>
int main () {
    //确定方向的数组
    int vectors[4][2] =
            {{0, 1},
             {0, -1},
             {1, 0},
             {-1, 0}};
    //定义
    int a = 0;
    int n, m, x0, y0;
    char arr[52][52];
    scanf("%d%d%d%d", &n, &m, &x0, &y0);
    bool vis[52][52];
    //把字符数组中的所有字符赋为_
    for (int i = 0; i < 52; i ++) {
        for (int j = 0; j < 52; j ++) {
            arr[i][j] =  '_';
        }
    }
  //输入
    for (int i = 1; i <= n; i ++) {
        scanf("%*c");
        for (int j = 1; j <= m; j ++) {
            scanf("%c", &arr[i][j]);
        }
    }
//把#变为ture_变为false
    for (int i = 0; i < 52; i ++) {
        for (int j = 0; j < 52; j++) {
            if (arr[i][j] == '#') {
                vis[i][j] = true;
            } else {
                vis[i][j] = false;
            }
        }
    }
//计算#个数
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j++) {
            if (vis[i][j]) {
                a ++;
            }
        }
    }
    printf("%d\n", a);
//输出a
    if (a == 1) {
        printf("%d %d", x0, y0);
    } else {
        printf("%d %d\n", x0, y0);
    }
    int i = 1;
    //输出坐标
    while (i < a) {
        for (int k = 0; k < 4; ++k) {
            int newI = x0 + vectors[k][0];
            int newJ = y0 + vectors[k][1];
            if (vis[newI][newJ]) {
                vis[x0][y0] = false;
                x0 = newI;
                y0 = newJ;
                break;
            }
        }
//        if (i == a - 1) {
//            printf("%d %d", x0, y0);
//        } else {
            printf("%d %d\n", x0, y0);
//        }
        i ++;
    }
    return 0;
}