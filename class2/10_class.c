//
// Created by Jinx on 2022/12/9.
//
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
typedef enum gender{
    MAIL = 1, FEMALE
} gender;
typedef struct musician{
    char* name;
    gender gender;
    char* album;
} Musician;
//int *Merge(int L[], int LLen, int R, int RLen){
//    int* merge = malloc((LLen + RLen) * sizeof (*merge));
//    int l = 0, r = 0;
//    while (l < LLen && r < )
//    return merge;
//}
double Integrate();
int main(){
    Musician luo = {
            "jksh",
            .gender = MAIL,
            .album = "df"
    };
    Musician zhang = luo;
    zhang.name = "ZhangChaoran";
    printf("%s %s", luo.name, zhang.name);
    printf("sdf");
double (*fps[2])(double) = {sin, cos};
}