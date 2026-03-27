#include "listS.h"

int insertElement(int L[], int n, int x) {
    int i, k = 0, move = 0;

    // 삽입 위치 찾기
    for (i = 0; i < n - 1; i++) {
        if (L[i] < x && x < L[i + 1]) {
            k = i + 1;
            break;
        }
    }

    // 삽입 원소가 가장 큰 원소일 때
    if (i == n - 1)
        k = n;

    // 마지막 원소 ~ k번 위치까지 뒤로 자리 이동
    for (i = n; i > k; i--) {
        L[i] = L[i - 1];
        move++;
    }

    // 빈 자리에 삽입
    L[k] = x;

    return move;
}

int deleteElement(int L[], int n, int x) {
    int i, k = n, move = 0;

    // 삭제 위치 찾기
    for (i = 0; i < n; i++) {
        if (L[i] == x) {
            k = i;
            break;
        }
    }

    // 삭제할 원소가 없으면 -> move = n 반환
    if (i == n)
        move = n;
    else {
        // k+1 ~ 마지막까지 앞으로 자리 이동
        for (i = k; i < n - 1; i++) {
            L[i] = L[i + 1];
            move++;
        }
    }

    return move;
}