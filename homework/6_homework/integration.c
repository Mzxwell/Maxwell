//
// Created by Jinx on 2022/11/4.
//
#include<stdio.h>
#include<math.h>
double f(double x, const int arr[], int p);
double sf(double x, const int arr[], int p);
double integration (double a, double b, const int arr[], int p, int d);
int main(){
    int n, p;
    int arr[21] = {0};
    double a, b, s, sr, sl, mid, c, a1, b1, mid1, c2;
    scanf("%d%d", &n, &p);
    for (int i = 0; i < n + 1; i ++) {
        scanf("%d", &arr[i]);
    }
    scanf("%lf%lf", &a, &b);

    if (p == 1) {
        c = sf(b, arr, p) - sf(a, arr, p);
        printf("%lf", c);
    }else {
        printf("%lf", integration(a, b, arr, p, 1));
    }
}

double f(double x, const int arr[], int p) {
    double sum = 0;
    for (int i = 0; i < 21; i ++) {
        sum += arr[i] * pow(x, i);
    }
    return pow(sum, p);
}
double sf(double x, const int arr[], int p) {
    double sum = 0;
    for (int i = 0; i < 21; i ++) {
        sum += arr[i] * pow(x, i + 1) / (i + 1);
    }
    return pow(sum, p);
}

double integration(double a, double b, const int arr[], int p, int d) {
    double s, sr, sl, c, mid;
    mid = (a + b) / 2;
    s = (4 * f((a + b) / 2, arr, p) + f(a, arr, p) + f(b, arr, p)) / 6 * (b - a);
    sr = (4 * f((mid + b) / 2, arr, p) + f(mid, arr, p) + f(b, arr, p)) / 6 * (b - mid);
    sl = (4 * f((a + mid) / 2, arr, p) + f(a, arr, p) + f(mid, arr, p)) / 6 * (mid - a);
    c = sl + sr + (sr + sl - s) / 15;
    if ((sr + sl - s) / 15 > -0.0001 / d && (sr + sl - s) / 15 < 0.0001 / d) {
        return c;
    }
    return integration(a, (b + a) / 2, arr, p, d * 2) + integration((a + b) / 2, b, arr, p, d * 2);
}