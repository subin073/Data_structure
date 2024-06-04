#include <stdio.h>
#include "adjList.h"
#include "stackL.h"
#include "DFS.h"


void DFS_adjList(graphType* g, int v) {
	graphNode* w;
	top = NULL;
	push(v);
	g->visited[v] = TRUE;
	printf("%c", v + 65);


	while (!isStackEmpty()) {
		w = g->adjList_H[v];

		while (w) {
			
			if (!g->visited[w->vertax]) {
				push(w->vertax);
				g->visited[w->vertax] = TRUE;
				printf("%c", w->vertax + 65);
				v = w->vertax;
				w = g->adjList_H[v];
			}

			else w = w->link;
		}
		v = pop();
	}
}