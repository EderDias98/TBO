#include "crivo.h"
#include "time.h"



int main(int argc, char*argv[]){

    printf("Digita um numero inteiro N: \n");
    int N=0;
    clock_t inicio, fim;
    double tempo_gasto;
    scanf("%d%*c", &N);

 
    inicio = clock(); // Marca o tempo inicial
    char* vet = criaVetBit(N);
    imprimeBitVetor(vet,N);
    fim = clock();    // Marca o tempo final
    marcaVetBit(vet,N);
  
    imprimeVetBitPrimo(vet,N);

  
    tempo_gasto = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %f segundos\n", tempo_gasto);

    return 0;
}