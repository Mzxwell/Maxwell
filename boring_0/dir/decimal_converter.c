//
// Created by Jinx on 2024/4/4.
//
#include <stdio.h>
// 十进制转二进制
void decToBin(int decimal) {printf("0b%d\n", decimal);}

// 十进制转八进制
void decToOct(int decimal) {
    printf("0o%o\n", decimal);
}

// 十进制转十六进制
void decToHex(int decimal) {
    printf("0x%x\n", decimal);
}

// 主函数
int main() {
    int decimal;
    char convertType;

    while (1) {
        // 读取输入
        scanf("%d %c", &decimal, &convertType);

        // 判断输入是否有效
        if (convertType != 'b' && convertType != 'o' && convertType != 'h') {
            printf("Error\n");
            continue;
        }

        // 判断是否输入 q 结束程序
        if (decimal == 'q') {
            break;
        }

        // 根据转换类型进行相应转换
        switch (convertType) {
            case 'b':
                decToBin(decimal);
                break;
            case 'o':
                decToOct(decimal);
                break;
            case 'h':
                decToHex(decimal);
                break;
        }
    }

    return 0;
}
