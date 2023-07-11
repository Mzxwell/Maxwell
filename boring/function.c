//
// Created by Jinx on 2022/10/8.
//
//#include <stdio.h>
//void obstacel (double a0,double b)
//{
//    printf("%lf",a0+b);
//}
//void least_x (int a0,int c)
//{
//    int e;
//    if (a0 < c){
//        e = c - a0;
//        for (int i = 1; i <= e; i++) {
//            printf("R");
//        }
//    }
//    if (a0 > c){
//        e = a0 - c;
//        for (int i = 1; i <= e; i++) {
//            printf("L");
//        }
//    }
//}
//void least_y (int a0,int c)
//{
//    int e;
//    if (a0 < c){
//        e = c - a0;
//        for (int i = 1; i <= e; i++) {
//            printf("U");
//        }
//    }
//    if (a0 > c){
//        e = a0 - c;
//        for (int i = 1; i <= e; i++) {
//            printf("D");
//        }
//    }
//}
//int main(){
//    obstacel(3.1,2.2);
//}
#include <stdio.h>
#include <math.h>
void route_line(int a, int c)
{
    int line_distance = abs(a - c);
    switch ((a >= c) + (a == c))
    {
        case 0:
        case 2:
            for (int i = 0; i < line_distance; i++)
            {
                printf("R");
            }
            break;
        case 1:
            for (int j = 0; j < line_distance; j++)
            {
                printf("L");
            }
            break;
    }
}
void route_row(int b, int d)
{
    int row_distance = abs(b - d);
    switch ((b >= d) + (b == d))
    {
        case 0:
        case 2:
            for (int i = 0; i < row_distance; i++)
            {
                printf("U");
            }
            break;
        case 1:
            for (int j = 0; j < row_distance; j++)
            {
                printf("D");
            }
            break;
    }
}
int main()
{
    int Xa, Ya, Xb, Yb, Xc, Yc;
    scanf("%d %d %d %d %d %d %d", &Xa, &Ya, &Xb, &Yb, &Xc, &Yc);
    int line_distance = abs(Xa - Xb);
    int row_distance = abs(Ya - Yb);
    if ((((Xc - Xa) * (Xc - Xb) < 0) && (Ya == Yc)) && (Yc == Yb))
    {
        printf("%d\n", line_distance + row_distance + 2);
        printf("U");
        route_line(Xa, Xb);
        printf("D");
        goto exp;
    }
    if (((Yc - Ya) * (Yc - Yb) < 0 && (Xa == Xc)) && (Xc == Xb))
    {
        printf("%d\n", line_distance + row_distance + 2);
        printf("L");
        route_row(Ya, Yb);
        printf("R");
        goto exp;
    }
    if (Xa == Xc || Yc == Yb)
    {
        printf("%d\n", line_distance + row_distance);
        route_line(Xa, Xb);
        route_row(Ya, Yb);
    }
    else
    {
        printf("%d\n", line_distance + row_distance);
        route_row(Ya, Yb);
        route_line(Xa, Xb);
    }
    exp:
    return 0;
}