//
// Created by Jinx on 2022/12/21.
//

#ifndef TOKENIZER_C_LL_H
#define TOKENIZER_C_LL_H

typedef struct node{
    int val;
    struct node *next;
}Node;

typedef struct ll {
    Node *head;
    Node *tail;
} LinkedList;

void Init(LinkedList *list);

void Append(LinkedList *list, int val);

void Free(LinkedList *list);

#endif //TOKENIZER_C_LL_H
