//
// Created by Jinx on 2023/7/17.
//
#include "stdio.h"
int main() {
    char buf[1024];
    FILE *fp = popen("cat ./quine3.c", "r");
    while (fgets(buf,sizeof(buf), fp) != NULL) printf("%s", buf);
}