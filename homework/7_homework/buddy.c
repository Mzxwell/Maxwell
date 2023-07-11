//
// Created by Jinx on 2022/11/13.
//
#include<stdio.h>
#include<math.h>

int chuyi2(int a);

int main() {
    int n;
    int q, a, j = 0, d = 0;
    char nums[10000];
    int nums0[10000][2] = {0};
    scanf("%d%d%*c", &n, &q);
    int arr[10040][2] = {0, n + 1};

    for (int i = 0; i < q; i++) {
        scanf("%c%*c", &nums[i]);
        if (nums[i] == 65) {
            scanf("%d%d%*c", &nums0[i][0], &nums0[i][1]);
        }
    }

    for (int i = 0; i < q; i++) {
        if (nums[i] == 65) {
            a = chuyi2(nums0[i][1]) + 1;

            for(int k = 0; k <= j; k ++){
                if(!arr[k][0]) {
                    if (a == arr[k][1]) {
                        arr[k][0] = nums0[i][0];
                        break;
                    }

                    if (a < arr[k][1]){
                        while(arr[k][1] - a){
                            arr[k][1]--;
                            j++;

                            for(int f = j; f > k; f --){
                                arr[f][0] = arr[f - 1][0];
                                arr[f][1] = arr[f - 1][1];
                            }
                        }

                        arr[k][0] = nums0[i][0];
                        break;
                    }
                }
            }
        } else {
            printf("%d\n", j + 1);
            for (int k = 0; k <= j; k++)
                printf("%d ", arr[k][0]);
            printf("\n");
        }
    }
}

int chuyi2(int a) {
    int i = 0, a0 = a;
    while (a) {
        a = a / 2;
        i++;
    }
    if (a0 == pow(2, i - 1))
        return i - 1;
    else
        return i;
}
//a0 = chuyi2(nums0[i][1]);
//int k = 0;
//done:
//if (!arr[k][1]) {
//while (a0 - arr[k][0]) {
//
//if (a0 > arr[k][0])
//k++;
//else {
//
//j++;
//arr[k][0]--;
//
//for (int b = j; b > k; b--) {
//arr[b][0] = arr[b - 1][0];
//arr[b][1] = arr[b - 1][1];
//}
//}
//}
//}
//
//if (arr[k][1]) {
//k++;
//goto done;
//}
//arr[k][1] = nums0[i][0];

//if(!j){
//arr[0][0] = nums0[i][0];
//arr[0][1] = n - a0;
//j = n - a0 + 1;
//arr[0][2] = a0;
//d++;
//}else{
//int c = 0;
//while(1){
//if (a0 < arr[c][2]){
//arr[d][0] = nums0[i][0];
//arr[d][1] = arr[];
//j = n - a0 + 1;
//arr[0][2] = a0;
//d++;
//}
//}
//}