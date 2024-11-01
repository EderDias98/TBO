#include "crivo.h"
#define bytesInt 4

struct num{
    int n;
    int primo;
};

tNum** criaLista(int N){
    tNum** lista = (tNum**) calloc(N-2,sizeof(tNum*));
    for(int i=0; i<N-1;i++){
        lista[i] = (tNum*) calloc(1, sizeof(tNum));
        lista[i]->n = i+2;
        lista[i]->primo =1;
    }
    return lista;
}




void imprimePrimos(tNum** lista,int N){
    for(int i=0; i< N-1;i++){
        if(lista[i]->primo){
            printf("%d ",lista[i]->n );
        }
    }
    printf("\n");
}

void freeLista(tNum** lista, int N){
    if(lista){
        for(int i=0; i< N-1;i++){
            free(lista[i]);
        }
        free(lista);
    }

}