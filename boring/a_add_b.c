//
// Created by Jinx on 2023/7/10.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
char byte(char *a,int b){
    if(b<0)return 0;
    else return a[b]-48;
}
int main(){
    char **a=NULL,line[2002];
    int i = 0;
    while (fgets(line,2002,stdin)){
        i++;
        a = (char **)realloc(a,8*i);
        a[i-1]= (char *)malloc(strlen(line)+1);
        strcpy(a[i-1],line);
    }
    for (int j = 0; j < i;++j) {
        char *b1= strtok(a[j]," ");
        char *b2= strtok(NULL," ");
        if (b2[strlen(b2)-1]==10)b2[strlen(b2)-1]=0;
        int len1 = (int)strlen(b1)+2,len2= (int)strlen(b2)+2;
        int mLen=len1>len2?len1:len2;
        char *b3= malloc(mLen),jin_wei=0;
        for (int k = 0; k < mLen; ++k) b3[k]=0;
        for (int k = 0; k < mLen-1; ++k) {
            char temp = byte(b1,len1-3-k)+byte(b2,len2-3-k)+jin_wei;
            jin_wei = temp>=10?1:0;
            temp = temp>=10?temp-10:temp;
            b3[mLen-2-k]=temp+48;
        }
        printf("%s\n",b3[0]==48?b3+1:b3);
    }
}