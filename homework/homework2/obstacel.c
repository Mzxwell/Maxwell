//
// Created by Jinx on 2022/10/7.
//
#include<stdio.h>

void least_x(int a, int c) {
    int e;
    if (a < c) {
        e = c - a;
        for (int i = 1; i <= e; i++) {
            printf("R");
        }
    }
    if (a > c) {
        e = a - c;
        for (int i = 1; i <= e; i++) {
            printf("L");
        }
    }
}

void least_y(int a, int c) {
    int e;
    if (a < c) {
        e = c - a;
        for (int i = 1; i <= e; i++) {
            printf("U");
        }
    }
    if (a > c) {
        e = a - c;
        for (int i = 1; i <= e; i++) {
            printf("D");
        }
    }
}

int main() {
    int xA, yA, xB, yB, xC, yC, a, b, c, d, e;
    scanf("%d%d%d%d%d%d", &xA, &yA, &xB, &yB, &xC, &yC);
    a = xA - xB;
    b = yB - yA;
    if (a < 0) {
        c = -a;
    } else {
        c = a;
    }
    if (b < 0) {
        d = -b;
    } else {
        d = b;
    }
    if (((xA < xC && xC < xB) || (xA > xC && xC > xB)) && (yB == yA && yB == yC)) {
        e = c + 2;
        if (a < 0) {
            printf("%d\n", e);
            printf("U");
            for (int i = 1; i <= c; i++) {
                printf("R");
            }
            printf("D");
        } else {
            printf("%d\n", e);
            printf("U");
            for (int i = 1; i <= c; i++) {
                printf("L");
            }
            printf("D");
        }
    } else {
        if (((yA < yC && yC < yB) || (yA > yC && yC > yB)) && ((xA == xB) && (xB == xC))) {
            e = d + 2;
            if (b < 0) {
                printf("%d\n", e);
                printf("R");
                for (int i = 1; i <= d; i++) {
                    printf("D");
                }
                printf("L");
            } else {
                printf("%d\n", e);
                printf("R");
                for (int i = 1; i <= d; i++) {
                    printf("U");
                }
                printf("L");
            }
        } else {
            if (xA == xC || yB == yC) {
                e = c + d;
                printf("%d\n", e);
                least_x(xA, xB);
                least_y(yA, yB);
            } else {
                if (xB == xC || yA == yC) {
                    e = c + d;
                    printf("%d\n", e);
                    least_y(yA, yB);
                    least_x(xA, xB);
                } else {
                    e = c + d;
                    printf("%d\n", e);
                    least_x(xA, xB);
                    least_y(yA, yB);
                }
            }
        }
    }
}
//    for (int i = 0;i <= 4;i++){
//        printf("L");
//    }
//if (yC == yB){
//                e = c + 2;
//                printf("%d",e);
//                printf("U\n");
//                for (int i=1;i <= c;i++){
//                    printf("R");
//                }
//                printf("D");
//            }else{
//
//            }
//        printf
//        c = -a;
//if (a < 0) {
//c = -a;
//if (b == 0) {
//e = c;
//printf("%d", e);
//printf("R\n");
//for (int i = 1; i < c; i++) {
//printf("R");
//}
//
//}
//if (b < 0) {
//d = -b;
//}
//c = a + b;
//if (xA == xC || yB == yC) {
//for (int i = 1; i <= b; i++) {
//printf("")
//}
//printf("")
//}
//}