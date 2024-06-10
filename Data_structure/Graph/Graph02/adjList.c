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
	graphNode* node;


	if (u >= g->n || v >= g->n) {
		printf("\n �׷����� ���� �����Դϴ�!");
		return;
	} 
	node = (graphNode*)malloc(sizeof(graphNode));
	node->vertax = v;
	node->link = g->adjList_H[u];
	g->adjList_H[u] = node;
}


void print_adjList(graphType* g) {
	int i;
	graphNode* p;
	for (i = 0; i < g->n; i++) {
		printf("\n\t\t������ %c�� ���� ����Ʈ", i + 65);
		p = g->adjList_H[i];
		while (p) {
			printf(" -> %c", p->vertax + 65);
			p = p->link;
		}
	}
}