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
		printf("\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�!");
		return;
	}
	g->n++;
}

void insertEdge(graphType* g, int u, int v) {

}
void print_adjList(graphType* g) {

}