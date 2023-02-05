//
// Created by Jinx on 2023/2/5.
//
#include "stdio.h"

#define foo(a, ...) if(a) printf(__VA_ARGS__)
#define add0(a, b) (a + b)
#define add1(a, b) a + b
#define max(a, b) (a > b ? a : b)
#define foo0(a) a++; a++
#define foo1(a) do {a++; a++;} while(0)

int main() {
    int a = 7, b = 5, c = 0, d, e;
    foo(1, "dfs%s", "fsfsd");
    if (c)
    foo0(c);
    d = c;
    if(c)
    foo0(c);
    e = c;
    if (c)
        foo1(c);
    printf(" %d %d %d %d %d %d %d", 3 * add0(4, 2) * 5, 3 * add1(4, 2) * 5, max(a++, b), a, d, e, c);
}