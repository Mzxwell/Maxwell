//
// Created by Jinx on 2022/10/14.
//
#include <stdio.h>

int main (){
    int n;
    int num[2002] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j % i == 0)
            {
                if (num[j] == 0)
                {
                    num[j] = 1;
                }
                else
                {
                    num[j] = 0;
                }
            }
        }
    }

    for (int m = 1; m <= n; m++)
    {
        if (num[m] == 1)
        {
            printf("%d ", m);
        }
    }
}