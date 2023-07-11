//
// Created by Jinx on 2022/11/12.
//
#include<stdio.h>

int PourOnce(int a, int b, int V);
int pour(int a, int b, int c, int VA, int VB, int VC, int a0, int b0, int c0, int k);
int main() {
    int k, VA, VB, VC, a, b, c, a0, b0, c0, d;
    scanf("%d%d%d%d%d%d%d%d%d%d", &k, &VA, &VB, &VC, &a, &b, &c, &a0, &b0, &c0);
    d = pour(a, b, c, VA, VB, VC, a0, b0, c0, k);
    if(d)
        printf("Yes");
    else
        printf("No");
}

int pour(int a, int b, int c, int VA, int VB, int VC, int a0, int b0, int c0, int k) {
    if (!k) {
        if (a == a0 && b == b0 && c == c0)
            return 1;
        else
            return 0;
    }
    return pour(0, b, PourOnce(a, c, VC), VA, VB, VC, a0, b0, c0, k - 1) +
           pour(0, PourOnce(a, b, VB), c, VA, VB, VC, a0, b0, c0, k - 1) +
           pour(PourOnce(a, b, VA), 0, c, VA, VB, VC, a0, b0, c0, k - 1) +
           pour(a, 0, PourOnce(c, b, VC), VA, VB, VC, a0, b0, c0, k - 1) +
           pour(a, PourOnce(c, b, VB), 0, VA, VB, VC, a0, b0, c0, k - 1) +
           pour(PourOnce(c, a, VA), b, 0, VA, VB, VC, a0, b0, c0, k - 1);
}

int PourOnce(int a, int b, int V) {
    return ((a + b) > V) ? V : (a + b);
}

//if (nums[a0][1] + nums[a0][2] > VA){
//nums[a0][1] = VA;
//nums[a0][2] = 0;
//}else{
//nums[a0][1] += nums[a0][2];
//
//}
//int pour(int nums[][12000][4], int i, int j){
//    if(!i)
//        return 1;
//    int b = pour(nums, i - 1, p);
//    for(int a0 = 0; a0 < b; a0 ++){
//        nums[i][a0][0] =
//    }
//}
//if(a0 + nums[a0][2] > VB)
//nums[a0 + 1][2] = VB;
//else
//nums[a0 + 1][2] = nums[a0][1] + nums[a0][2];
//
//if(nums[a0][1] + nums[a0][3] > VC)
//nums[a0 + 1][2] = VB;
//else
//nums[a0 + 1][2] = nums[a0][1] + nums[a0][2];