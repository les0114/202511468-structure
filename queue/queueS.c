#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

// 공백 순차 큐 생성
QueueType* createQueue() {
    QueueType* Q;
    Q = (QueueType*)malloc(sizeof(QueueType));
    Q->front = -1; // front 초깃값 설정
    Q->rear = -1; // rear 초깃값 설정
    return Q;
}

// 순차 큐가 공백 상태인지 검사
int isQueueEmpty(QueueType* Q) {
    if (Q->front == Q->rear) {
        printf("Queue is empty!\n\t");
        return 1;
    }
    else return 0;
}

// 순차 큐가 포화 상태인지 검사
int isQueueFull(QueueType* Q) {
    if (Q->rear == Q_SIZE - 1) {
        printf("Queue is full!\n\t");
        return 1;
    }
    else return 0;
}

// 순차 큐의 rear에 원소 삽입
void enQueue(QueueType* Q, element item) {
    if (isQueueFull(Q)) return; //포화 상태이면 삽입 중단
    else {
        Q->rear++;
        Q->queue[Q->rear] = item;
    }
}

// 순차 큐의 front에서 원소 삭제
element deQueue(QueueType* Q) {
    if (isQueueEmpty(Q)) return '\0'; // 공백 상태이면 삭제 중단
    else {
        Q->front++;
        return Q->queue[Q->front];
    }
}

// 순차 큐의 가장 앞에 있는 원소 검색
element peekQ(QueueType* Q) {
    if (isQueueEmpty(Q)) return '\0'; // 공백 상태이면 연산 중단
    else return Q->queue[Q->front + 1];
}

// 순차 큐의 원소 출력
void printQ(QueueType* Q) {
    int i;
    printf("Queue: [");
    for (i = Q->front + 1; i <= Q->rear; i++)
        printf("%c", Q->queue[i]);
    printf("]");
}