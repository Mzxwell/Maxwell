//
// Created by Jinx on 2022/12/21.
//

#ifndef TOKENIZER_C_LL_H
#define TOKENIZER_C_LL_H

#include <stdbool.h>

typedef struct node{
    int val;
    struct node *next;
}Node;

typedef struct ll {
    Node *head;
    Node *tail;
} LinkedList;

void Init(LinkedList *list);

bool IsEmpty(const LinkedList *list);
bool IsSingleton(const LinkedList *list);

int GetHeadVal(const LinkedList *list);
void Print(const LinkedList *list);

void Append(LinkedList *list, int val);
void Delete(LinkedList *list, Node *prev);

void Free(LinkedList *list);

#endif //TOKENIZER_C_LL_H
