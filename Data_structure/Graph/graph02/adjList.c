#include <stdio.h>
#include "adjList.h"


void createGraph(graphType* g) {
	int v;
	g->n = 0;
	for (v = 0; v < MAX_VERTAX; v++)
		g->adjList_H[v] = NULL;
}


void insertVertex(graphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTAX) {
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}
	g->n++;
}

void insertEdge(graphType* g, int u, int v) {

}
void print_adjList(graphType* g) {

}