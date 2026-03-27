#include <stdio.h>
#include "InsertLinkedList.h"

int main(void) {
    linkedList_h* L;
    L = createLinkedList_h();

    printf("공백 리스트 생성\n");
    printList(L);

    printf("\n첫 노드 삽입\n");
    insertFirstNode(L, "A");
    printList(L);

    printf("\n마지막 노드 삽입\n");
    insertLastNode(L, "B");
    printList(L);

    printf("\n첫 번째 노드 삽입\n");
    insertFirstNode(L, "C");
    printList(L);

    printf("\n리스트 메모리 해제\n");
    freeLinkedList_h(L);
    printList(L);

    return 0;
}