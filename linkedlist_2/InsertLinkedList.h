#pragma once 
// 노드 구조체
typedef struct ListNode {
    char data[4];
    struct ListNode* link;  
} listNode;

// 리스트 head 구조체
typedef struct {
    listNode* head;
} linkedList_h;

// 함수 선언 
linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h* L);
void insertFirstNode(linkedList_h* L, char* x);
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
void insertLastNode(linkedList_h* L, char* x);