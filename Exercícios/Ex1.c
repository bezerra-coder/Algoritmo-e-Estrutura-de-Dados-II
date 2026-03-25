//exercício 1
#include <stdio.h>

#define MAX 500

typedef struct {
    int nroVertices;
    int adj[MAX][MAX];
} GRAFO;

int ContadorLaco (GRAFO* g){
    int ContaLaco = 0;
    int i;
    for(i=0;i<g->nroVertices;i++){
        if(g->adj[i][i] != 0)
            ContaLaco++;
    }
    return ContaLaco;
}