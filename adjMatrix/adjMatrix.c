#include <stdio.h>
#include <stdlib.h>
#include "adjMatrix.h"

// 공백 그래프 생성
void createGraph(graphType* g)
{
    int i, j;

    g->n = 0; // 정점 개수 초기화

    // 인접 행렬 값 0으로 초기화
    for (i = 0; i < MAX_VERTEX; i++) {
        for (j = 0; j < MAX_VERTEX; j++) {
            g->adjMatrix[i][j] = 0;
        }
    }
}

// 정점 추가
void insertVertex(graphType* g, int v)
{
    if (((g->n) + 1) > MAX_VERTEX) {
        printf("\n 그래프 정점 개수 초과!");
        return;
    }

    g->n++;
}

// 간선 삽입
void insertEdge(graphType* g, int u, int v)
{
    // 정점 존재 여부 검사
    if (u >= g->n || v >= g->n) {
        printf("\n 그래프에 없는 정점입니다!");
        return;
    }

    // 간선 연결
    g->adjMatrix[u][v] = 1;
}

// 인접 행렬 출력
void print_adjMatrix(graphType* g)
{
    int i, j;

    for (i = 0; i < g->n; i++) {
        printf("\n\t");

        for (j = 0; j < g->n; j++) {
            printf("%2d ", g->adjMatrix[i][j]);
        }
    }

    printf("\n");
}