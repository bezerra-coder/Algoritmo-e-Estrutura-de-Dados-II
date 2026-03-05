#include <stdio.h>
#include <stdbool.h>

#define MAX 50

typedef struct {
    int chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int nroElem;
} LISTA;

//inicialização da lista sequencial
void inicializacao(LISTA *l){
    l->nroElem = 0;
}

//Inserção direta na posição i
bool insercao(int ch, int i, LISTA *l){
    int j;
    if((l->nroElem >= MAX) || (i<0)||(i>(l->nroElem)))
        return(false);
    if((l->nroElem > 0 ) && (i<(l->nroElem)))
        for(j = (l->nroElem); j >= (i+1); j--) // começa do último e vai até o primeiro 
            l->A[j] = l->A[j-1];
    
    l->A[i].chave = ch;
    l->nroElem++;
        return(true);
}
//exibição da lista sequencial
void exibirLista(LISTA l){
    int i;
    for(i=0;i<l.nroElem;i++)
        printf("%d, ", l.A[i].chave);
}

int main() {
    LISTA minhaLista;
    inicializacao(&minhaLista);
    insercao(10, 0, &minhaLista);
    insercao(12, 1, &minhaLista);
    insercao(14, 2, &minhaLista);
    exibirLista(minhaLista);
}
