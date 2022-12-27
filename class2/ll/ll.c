//
// Created by Jinx on 2022/12/21.
//

#include "ll.h"
#include "stdio.h"
#include "stdlib.h"

void Init(LinkedList *list){
    list->head = NULL;
    list->tail = NULL;
}

void Append(LinkedList *list, int val){
    Node *node = malloc(sizeof *node);
    if (node == NULL){
        printf("Error: malloc failed in Append()\n");
        return;
    }
    node->val = val;

    list->tail->next = node;
    list->tail = node;
    list->tail->next = list->head;
}
void