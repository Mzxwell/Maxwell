#include"stdio.h"
int a[30];
void f(int n,int m,int F){
if(!n){for(int i=0;i<F;++i)printf("%d ",a[i]);printf("\n");return;}
if(n<m)return;
for(int i=m;i<=n;++i){a[F]=i;f(n-i,i,F+1);}}
int main(){int n;scanf("%d",&n);f(n,1,0);}