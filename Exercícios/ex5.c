#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct {
    int nroVertices;
    int adj[MAX][MAX];
} GRAFO_MATRIZ;

typedef struct estrutura {
    int vertice;
    struct estrutura *prox;
} NO;

typedef struct {
    int nroVertices;
    NO* adj[MAX];
} GRAFO_LISTA;

void conversaoMatrizLinha(GRAFO_MATRIZ gm, GRAFO_LISTA* gl){
    gl->nroVertices = gm.nroVertices;
    
    for(int i=0;i<gl->nroVertices;i++){
        gl->adj[i]=NULL;
    }

    for(int i=0;i<gm.nroVertices;i++){
        for(int j=0;j<gm.nroVertices;j++){
            if(gm.adj[i][j]!=0){
                NO* novo = (NO*) malloc(sizeof(NO));
                novo->vertice = j; //vértice de destino
                novo->prox = gl->adj[i];
                gl->adj[i] = novo;
            }
    }
}
}