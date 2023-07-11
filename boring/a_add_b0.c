//
// Created by Jinx on 2023/7/11.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 256

int main() {
    char** lines = NULL;    // 存储行的数组
    int lineCount = 0;      // 行的数量
    char buffer[BUFFER_SIZE];  // 临时缓冲区

    // 读取每一行并存储到 lines 数组中
    while (fgets(buffer, BUFFER_SIZE, stdin)) {
        // 动态分配内存来存储当前行
        char* line = malloc(sizeof(char) * BUFFER_SIZE);

        // 将缓冲区的内容复制到行中
        strcpy(line, buffer);

        // 将行添加到 lines 数组中
        lines = realloc(lines, sizeof(char*) * (lineCount + 1));
        lines[lineCount] = line;

        lineCount++;
    }

    // 打印读取到的每一行
    for (int i = 0; i < lineCount; i++) {
        printf("Line %d: %s", i + 1, lines[i]);
    }

    // 释放内存
    for (int i = 0; i < lineCount; i++) {
        free(lines[i]);
    }
    free(lines);

    return 0;
}
