//
// Created by Jinx on 2022/12/21.
//

#include "stdio.h"
#include "ll/ll.h"

#define NUM 10

void SitAroundCircle(LinkedList *list, int num);
void KillUntilOne(LinkedList *list);
int GetSurvivor(const LinkedList *list);

int main() {
    LinkedList list;
    Init(&list);

    SitAroundCircle(&list, NUM);
    KillUntilOne(&list);
    int survivor = GetSurvivor(&list);
    printf("%d: %d\n", NUM, survivor);

    Free(&list);

    return 0;
}

void SitAroundCircle(LinkedList *list, int num){
    for (int i = 1; i <= 10; ++i) {

    }
}

void KillUntilOne(LinkedList *list){

}

int GetSurvivor(const LinkedList *list){

}