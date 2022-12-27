//
// Created by Jinx on 2022/11/18.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i = 0;
    char *p = malloc(5000 * sizeof (*p));
    if(p == NULL)
        return 0;
    gets(p);
    while (*(p + i) != '\0'){
        if(!i){
            if(*p > 90)
                printf("%c", *(p + i) - 32);
            else
                printf("%c", *(p + i));
        }else{
            if(*(p + i - 1) == ' ') {
                if (*(p + i) > 90)
                    printf("%c", *(p + i) - 32);
                else
                    printf("%c", *(p + i));
            }else{
                if(*(p + i) == ' ')
                    printf(" ");
                else{
                    if (*(p + i) > 90)
                        printf("%c", *(p + i));
                    else
                        printf("%c", *(p + i) + 32);
                }
            }
        }
        i ++;
    }
}

