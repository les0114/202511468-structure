#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "InsertLinkedList.h"

// 리스트 생성
linkedList_h* createLinkedList_h(void) {
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h));
    L->head = NULL;
    return L;
}

// 리스트 메모리 해제
void freeLinkedList_h(linkedList_h* L) {
    listNode* p;
    while (L->head != NULL) {
        p = L->head;
        L->head = L->head->link;
        free(p);
    }
}

// 리스트 출력
void printList(linkedList_h* L) {
    listNode* p = L->head;
    while (p != NULL) {
        printf("%s -> ", p->data);
        p = p->link;
    }
    printf("NULL\n");
}

// 첫 노드 삽입
void insertFirstNode(linkedList_h* L, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    newNode->link = L->head;
    L->head = newNode;
}

// 중간 노드 삽입
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);

    if (pre == NULL) {
        newNode->link = L->head;
        L->head = newNode;
    } else {
        newNode->link = pre->link;
        pre->link = newNode;
    }
}

// 마지막 노드 삽입
void insertLastNode(linkedList_h* L, char* x) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    newNode->link = NULL;

    if (L->head == NULL) {
        L->head = newNode;
        return;
    }

    listNode* temp = L->head;
    while (temp->link != NULL) {
        temp = temp->link;
    }
    temp->link = newNode;
}