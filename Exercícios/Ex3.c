//exercício 3
#include <stdio.h>

#define MAX 500

typedef struct {
    int nroVertices;
    int adj[MAX][MAX];
} GRAFO;

void RemoverAresta (GRAFO* g){
    int RemoveAresta = 0;
    for(int i=0;i<g->nroVertices;i++){
        for(int j=0;j<g->nroVertices;j++)
            g->adj[i][j] = RemoveAresta;
    }
}