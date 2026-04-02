#pragma once
typedef int element;

// 스택의 노드를 구조체로 정의
typedef struct stackNode {
    element data;
    struct stackNode* link; // 구조체 포인터
} stackNode;

stackNode* top; // 스택의 top 노드를 저장하기 위해 포인터 top 선언

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();
