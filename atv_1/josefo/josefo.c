#include "josefo.h"


int* criaLista(int N){
    int* lista = (int*) malloc(N*sizeof(int));

    for(int i=0; i<N;i++){
        lista[i] = 1;
    }

    return lista;
}

void descobreLider(int* lista,int N,int M){
    
    int qdt_pes =N;
    int ciclo =0;
    int idx_pes = 0;
    while(qdt_pes > 1){
        

        if(lista[idx_pes]==1){
            ciclo++;
            if(ciclo == M){
                qdt_pes--;
                lista[idx_pes] =0;
                ciclo =0;
                printf("%d ", idx_pes+1);     
            }
        }

        idx_pes++;
        if(idx_pes > N-1)
            idx_pes =0;
    }
    printf("\n");
    for(int i=0; i<N; i++){
        if(lista[i]==1){
            printf("O LIDER E: %d \n", i+1);
            return;
        }
    }
}
//  1 1 0 1 1 