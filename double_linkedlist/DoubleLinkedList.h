#pragma once

typedef struct ListNode {
    struct ListNode* llink;   // 이전 노드 링크
    char data[4];
    struct ListNode* rlink;   // 다음 노드 링크
} listNode;

typedef struct {
    listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void printList(linkedList_h* DL);
void insertNode(linkedList_h* DL, listNode* pre, char* x);
void deleteNode(linkedList_h* DL, listNode* old);
listNode* searchNode(linkedList_h* DL, char* x);