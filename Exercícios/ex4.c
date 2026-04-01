// resolvendo por matriz
#include <stdio.h>

#define MAX 50;

typedef struct{
    int nroVertices;
    int adj[MAX][MAX];
} GRAFO;

GRAFO matrizTransposta(GRAFO g){
    GRAFO gt;
    t.nroVertices = g.nroVertices;

    for(i=0;i<nroVertices;i++){
        for(j=0;j<nroVertices;j++){
            t.adj[j][i]=g.adj[i][j];
        }
    }
    return gt;
}

// resolvendo por lista de adjacências
#include <stdio.h>
#include <malloc.h>

#define MAX 50

typedef struct estrutura {
    int vertice;
    struct estrutura *prox;
} NO;

typedef struct {
    int nroVertices;
    NO* adj[MAX]; 
} GRAFO;


GRAFO listaTransposta(GRAFO g) {
    GRAFO gt;
    int i;
    gt.nroVertices = g.nroVertices;
    
    for (i = 0; i < g.nroVertices; i++) {
        gt.adj[i] = NULL;
    }

    for (i = 0; i < g.nroVertices; i++) {
        NO* p = g.adj[i];

        while (p) {
            int v = p->vertice;

            // cria novo nó para representar a aresta invertida: v -> i
            NO* novo = (NO*) malloc(sizeof(NO));
            novo->vertice = i;

            // inserção no início da lista de adjacências de v no novo grafo
            novo->prox = gt.adj[v];
            gt.adj[v] = novo;

            p = p->prox;
        }
    }
    return gt;
}