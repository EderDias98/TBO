#include "pilha.h"

struct pilha{
    void** vet;
    int topo;
    int M; // maximo tamanho;
};

Pilha* criaPilha(int M){

    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->M = M;
    pilha->vet = (void**) malloc(M*sizeof(void*));
    pilha->topo = 0;
    return pilha;
}

void pushPilha(Pilha* pilha,void*dado){
    pilha->topo++;
    
    if(pilha->topo<1 || pilha->topo > pilha->M )
        return;
   
    pilha->vet[pilha->topo-1] = dado;
    
}   

void* popPilha(Pilha* pilha){
    if(pilha->topo<1 || pilha->topo > pilha->M )
        return 0;

    pilha->topo--;
    return pilha->vet[pilha->topo];
}