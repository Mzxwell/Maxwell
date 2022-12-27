//
// Created by Jinx on 2022/10/6.
//
#include<stdio.h>
int main(){
    char month[9];
    int day;
    int year;
    char weekday[9];
    int hour;
    int minute;
    int second;
    scanf("%s %d %d %s %d %d %d",month,&day,&year,weekday,&hour,&minute,&second);
    printf("%.3s %.3s %.2d %.2d:%.2d:%.2d %.4d ",weekday,month,day,hour,minute,second,year);
};