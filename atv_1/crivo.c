#include "crivo.h"
#define bytesInt 4

struct num{
    int n;
    int primo;
};

tNum** criaLista(int N){
    tNum** lista = (tNum**) calloc(N-1,sizeof(tNum*));
    for(int i=0; i<N-1;i++){
        lista[i] = (tNum*) calloc(1, sizeof(tNum));
        lista[i]->n = i+2;
        lista[i]->primo =1;
    }
    return lista;
}


void marcaLista(tNum** lista,int N){
    for(int i=0; i< N-1;i++){
        if(lista[i]->primo){
            for(int j=i+1; j< N-1; j++){
                if(lista[j]->n%lista[i]->n == 0){
                    lista[j]->primo = 0;
                }
            }
        }
    }
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



int* criaVet(int N){
    int* vet = (int*) malloc(N*sizeof(int));
    for(int i=0; i< N-1;i++){
        vet[i] = 1;
    }
    return vet;
}
char* criaVetChar(int N){
    char* vet = (char*) malloc(N*sizeof(char));
    for(int i=0; i< N-1;i++){
        vet[i] = '1';
    }
    return vet;
}

void marcaVet(int* vet, int N){
    for(int i=0; i< N-1; i++){
        if(vet[i] == 1){
            for(int j= i+3; j<=N; j++){
                if(j%(i+2) == 0){
                    vet[j-2] = 0;
                    
                }
            }
        }
    }
    
}
void marcaVetChar(char* vet, int N){
    for(int i=0; i< N-1; i++){
        if(vet[i] == '1'){
            for(int j= i+3; j<=N; j++){
                if(j%(i+2) == 0){
                    vet[j-2] = 0;
                    
                }
            }
        }
    }
}

 void imprimeVetPrimoChar(char* vet, int N){
    for(int i=0; i< N-1; i++){
        if(vet[i]){
            printf("%d ", i+2);
        }
    }
 }

 void imprimeVetPrimo(int* vet, int N){
    for(int i=0; i< N-1; i++){
        if(vet[i]){
            printf("%d ", i+2);
        }
    }
 }