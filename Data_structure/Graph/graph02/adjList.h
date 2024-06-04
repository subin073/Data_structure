#pragma once
#define MAX_VERTAX 30


typedef struct graphNode {
	int vertax;
	struct graphNode* link;
} graphNode;


typedef struct graphType {
	int n;
	graphNode* adjList_H[MAX_VERTAX];
} graphType;

void createGraph(graphType* g);
void insertVertex(graphType* g, int v);
void insertEdge(graphType* g, int u, int v);
void print_adjList(graphType* g);
