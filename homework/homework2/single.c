//
// Created by Jinx on 2022/10/7.
//
#include <stdio.h>
int main(){
    int num[200005]={0};
    int n;
    int num2[200005]={0};
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        scanf("%d",&num[i]);
    };
    for(int i=0;i < 2 * n - 1;i++){
        num2[num[i]]=num2[num[i]]+1;
    };
    for (int i=0;i < 10*n + 1;i++){
        if(num2[i]==1){
            printf("%d",i);
        }
    }



}
//    for(int i=0;i<2*n-1;i++){
//        printf(" %d",num[i]);
//    }
//    for(int i=0;i<10*n;i++){
//        printf(" %d",num2[i]);
//    };
