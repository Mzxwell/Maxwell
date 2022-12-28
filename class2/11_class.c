//
// Created by Jinx on 2022/12/21.
//

#include <assert.h>
#include <time.h>
#include "stdio.h"
#include "ll\ll.h"

void SitAroundCircle(LinkedList *list, int num);

void KillUntilOne(LinkedList *list);

int GetSurvivor(const LinkedList *list);

int main() {
    int NUM;
    scanf("%d", &NUM);
    clock_t start = clock();
    for (int i = 1; i <= NUM; ++i) {

        LinkedList list;
        Init(&list);

        SitAroundCircle(&list, i);
        KillUntilOne(&list);
        int survivor = GetSurvivor(&list);
        printf("%d: %d\n", i, survivor);

        Free(&list);
    }
    clock_t end = clock();
    printf("time: %ld", end - start);
    return 0;
}

void SitAroundCircle(LinkedList *list, int num) {
    for (int i = 1; i <= num; ++i) {
        Append(list, i);
    }
}

void KillUntilOne(LinkedList *list) {
    Node *node = list->head;

    while (!IsSingleton(list)) {
        Delete(list, node);
        node = node->next;
    }
}

int GetSurvivor(const LinkedList *list) {
    assert(IsSingleton(list));
    return GetHeadVal(list);
}