//
// Created by Jinx on 2022/10/15.
//
#include<stdio.h>

int main(){
    int n, b, c;
    int a = 0;
    char s[100002];
    char s0[5002];
    char d = '0';
    scanf("%d%*c", &n);

    for (int i = 0; i < n; i++){
        scanf("%c", &s[i]);
    }

    for (int i = 0; i < n / 2; i++){
        if (s[i] == '?'){
            s[i] = s[n - i - 1];
        }
    }

    if (n % 2 == 0){
        for (int i = 0; i < n / 2; i++){
            s0[i] = s[i];
        }
        for (int i = 0; i < n / 2 + a; i++){
            if (s0[i] == '?'){
                b = a / 10;
                c = a % 10;
                for (int j = n / 2 + 1 + a; j > i + 1; j--){
                    s0[j] = s0[j - 1];
                }
                s0[i] = b + 48;
                s0[i + 1] = c + 48;
                a++;
            }
        }
        for (int i = 0; i < n / 2 + a; i++) {
            printf("%c", s0[i]);
        }
        for (int i = 0; i < n / 2 + a; i++){
            printf("%c", s0[n / 2 - 1 - i + a]);
        }
    }else{
        d = s[n / 2];
        for (int i = 0; i < n / 2; i++){
            s0[i] = s[i];
        }
        for (int i = 0; i < n / 2 + a; i++){
            if (s0[i] == '?'){
                b = a / 10;
                c = a % 10;
                for (int j = n / 2 + 1 + a; j > i + 1; j--){
                    s0[j] = s0[j - 1];
                }
                s0[i] = b + 48;
                s0[i + 1] = c + 48;
                a++;
            }
        }
        for (int i = 0; i < n / 2 + a; i++) {
            printf("%c", s0[i]);
        }
        if (d == '?') {
            printf("%c%c", '9', '9');
        }else {
            printf("%c", d);
        }
        for (int i = 0; i < n / 2 + a; i++){
            printf("%c", s0[n / 2 - 1 - i + a]);
        }
    }
}