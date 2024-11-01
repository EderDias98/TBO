#include "crivo.h"




int main(int argc, char*argv[]){

    printf("Digita um numero inteiro N: \n");
    int N=0;
    scanf("%d%*c", &N);

    tNum** lista = criaLista(N);




    imprimePrimos(lista,N);

    freeLista(lista,N);



    return 0;
}