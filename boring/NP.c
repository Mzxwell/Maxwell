//
// Created by Jinx on 2022/11/5.
//
#include <stdio.h>

int n, a[1030] = {1};

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < (1 << n); ++i)
    {
        for(int j = 1; j < (1 << n) - i; ++j)
            printf(" ");
        if(!(i % 2))
            for(int j = 0; j <= i; ++j)
                printf(a[j]?"/\\":"  ");
        else for(int j = 0; j <= i; j += 2)
                printf(a[j]?"/__\\":"    ");
        for(int j = i; j >= 0; --j)
            a[j + 1] ^= a[j];
        putchar('\n');
    }
    return 0;
}