//
// Created by Jinx on 2022/10/8.
//
#include <stdio.h>
int main(){
    char characters[1000002];
    int n, k;
    scanf("%d%*c", &n);
    for (int i = 0; i < n; i ++)
    {
        scanf("%c",&characters[i]);
    };
    scanf("%d",&k);
   for (int i = 0; i < k; i ++)
   {
       printf("%c",characters[k - 1 - i]);
   }
   for (int i = 0; i < n - k; i ++)
   {
       printf("%c",characters[n - 1 - i]);
   }
}
//C = characters[0];
//for (int i = 0; i < k - 1; i++)
//{
//characters[i] = characters[i + 1];
//}
//characters[k - 1] = C;
//C = characters[k];
//for (int i = k; i < n - 1; i++)
//{
//characters[i] = characters[i + 1];
//}
//characters[n - 1] = C;
//printf("%s",characters);
//printf("%c",characters[5]);
//printf("%c",characters[2]);
