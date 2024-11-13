#include "pilha.h"

struct pilha{
    void** vet;
    int topo;
    int M; // maximo tamanho;
};
 typedef struct pilha Pilha;


Pilha* criaPilha(int M){

    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->M = M;
    pilha->vet = (void**) malloc(M*sizeof(void*));
    pilha->topo = 0;
    return pilha;
}

void pushPilha(Pilha* pilha,void*dado){
    if(pilha->topo<1 || pilha->topo > pilha->M )
        return;
    
    pilha->vet[pilha->topo] = dado;
    pilha->topo++;
}   

void* popPilha(Pilha* pilha,void*dado){
    if(pilha->topo<1 || pilha->topo > pilha->M )
        return;

    pilha->topo--;
    return pilha->vet[pilha->topo];
}