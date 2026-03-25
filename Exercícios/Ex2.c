// exercício 2
#include <stdio.h>

#define MAX 500

typedef struct {
    int nroVertices;
    int adj[MAX][MAX];
} GRAFO;

void RemoverLacos (GRAFO* g){
    int RemoveLaco = 0;
    int i;
    for(i=0;i<g->nroVertices;i++){
        if(g->adj[i][i] != 0)
            g->adj[i][i] = RemoveLaco;
    }
}