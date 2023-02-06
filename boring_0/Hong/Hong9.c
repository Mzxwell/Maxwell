//
// Created by Jinx on 2023/2/6.
//

#include "stdio.h"

#define _Log(...) do {printf(__VA_ARGS__);} while (0)
#define Log(format, word, back, ...) _Log("\33[%d;%dm[%s, %d, %s]" format "\33[0m\n",back ,word , __FILE__, __LINE__, __func__, __VA_ARGS__)

int main() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            Log("%s",30 + j ,40 + i, " here!");
        }
    }
}