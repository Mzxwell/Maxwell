//
// Created by Jinx on 2022/11/4.
//
#include<stdio.h>
int Max(int nums[], int a, int b);
void xiabiao (int ans[], int a, int b, int arr[][2]);

int main() {
    int ans[100000] = {0};
    int arr[100000][2] = {0};

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &ans[i]);
    }

    xiabiao(ans, 0, n - 1, arr);
    for (int i = 0; i < n; i ++) {
        printf("%d %d\n", arr[i][0] + 1, arr[i][1] + 1);
    }

}

int Max(int nums[], int a, int b) {
//    int max = 0;
//    int index = 0;
//    for (int i = a0; i <= b; i ++) {
//        if (max < nums[i]) {
//            max = nums[i];
//            index = i;
//        }
//    }
//    return index;
    if (b - a == 1) {
        return nums[a] < nums[b] ? b : a;
    }
    int index = Max(nums, a, b - 1);
    return nums[index] > nums[b] ? index : b;
}

void xiabiao (int ans[], int a, int b, int arr[][2]) {
    if (a > b) {
        return;
    }
    if (a == b) {
        arr[a][0] = a;
        arr[a][1] = a;
        return;
    }
    arr[Max(ans, a, b)][0] = a;
    arr[Max(ans, a, b)][1] = b;
    xiabiao(ans, a, Max(ans, a, b) - 1, arr);
    xiabiao(ans, Max(ans, a, b) + 1, b, arr);
    return;
}