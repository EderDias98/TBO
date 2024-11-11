#include "crivo.h"


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
char* criaVetBit(int N){
    char* vet = (char*) calloc((N/8)+1 ,sizeof(char));
    for(int i=0; i<(N/8)+1;i++){
        vet[i] = ~vet[i];
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
void marcaVetBit(char* vet, int N){
    int indice_array;
    int posicao_bit;
    for(int i=0; i< N-1;i++){
        calculaIndicePosicao(i+1,&indice_array,&posicao_bit);
        if(!ehZeroBit(vet,indice_array,posicao_bit)){
            for(int j= i+3; j<=N;j++){
                if(j%(i+2)==0){
                    calculaIndicePosicao(j-1,&indice_array,&posicao_bit);
                    zeraBit(vet, indice_array, posicao_bit);
                    
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

 void imprimeVetBitPrimo(char* vet, int N){
    int indice_array;
    int posicao_bit;

    for(int i=0; i< N-1;i++){
        calculaIndicePosicao(i+1,&indice_array,&posicao_bit);
     
        int res =ehZeroBit(vet, indice_array, posicao_bit);
        if(!res){
            printf("%d ", i+2);
        }
    }
    printf("\n");
 }


void calculaIndicePosicao(int bit_global, int *indice_array, int *posicao_bit) {
    *indice_array = bit_global / 8;
    // Índice do array
    if(bit_global<=8){
        *posicao_bit = bit_global-1;
        *indice_array = 0;
    }
    else if(bit_global%8 ==0){
        *posicao_bit = 7;
        *indice_array = *indice_array -1;
    }
    else{ *posicao_bit = (bit_global % 8)-1;
    }
}
void zeraBit(char array[], int indice_array, int indice_posicao){
   
    array[indice_array] &= ~(1 << (7-indice_posicao));  // Zera o bit especificado em cada elemento
    
}

int ehZeroBit(char array[], int indice_array, int indice_posicao){
    
    return ((array[indice_array]& (1<< (7-indice_posicao))) == 0);
}

void imprimeBitVetor(char *array, int N) {
    for (int i = 0; i < (N/8)+1; i++) {
        char valor = array[i];
        printf("Elemento %d: ", i);

        // Loop para imprimir cada bit, da posição mais significativa à menos significativa
        for (int bit = 7; bit >= 0; bit--) {
            printf("%d", (valor >> bit) & 1);
        }
        printf("\n");
    }
}