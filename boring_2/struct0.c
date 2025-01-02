//
// Created by Jinx on 25-1-2.
//
#include "stdio.h"

typedef struct a {
    int b;
} a0;

void func(a0 c) {
    c.b++;
    printf("%d\n", c.b);
}

int main() {
    a0 c;
    c.b = 0;
    printf("%d\n", c.b);
    func(c);
    printf("%d\n", c.b);
}
/*
 * 默认按值传递而不是按引用传递，所以函数不会改变struct的元素
 * 所以结果为
 * 0
 * 1
 * 0
 */