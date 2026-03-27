#include <stdio.h>
#include "CircularLinkedList.h"

int main(void) {
    linked_list_h* CL;
    listNode* p;

    CL = createLinkedList_h();
    printf("(1) 원형 연결 리스트 생성하기 \n");
    printList(CL);

    printf("(2) [월] 노드 삽입\n");
    insertFirstNode(CL, "월");
    printList(CL);

    printf("(3) [월] 뒤에 [수] 삽입\n");
    p = searchNode(CL, "월");
    insertMiddleNode(CL, p, "수");
    printList(CL);

    printf("(4) [수] 뒤에 [금] 삽입\n");
    p = searchNode(CL, "수");
    insertMiddleNode(CL, p, "금");
    printList(CL);

    printf("(5) [수] 삭제\n");
    p = searchNode(CL, "수");
    deleteNode(CL, p);
    printList(CL);

    return 0;
}