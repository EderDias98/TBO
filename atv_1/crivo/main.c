#include "crivo.h"
#include "time.h"


// Para este problema, é mais eficaz usar um vetor em vez de uma lista encadeada, 
// pois não há necessidade de adicionar novos elementos dinamicamente.
// Como o número de elementos é fixo, um vetor oferece melhor desempenho para acesso direto 
// e ocupa menos memória que uma lista encadeada, que incluiria ponteiros adicionais para cada elemento.

int main(int argc, char*argv[]){

    printf("Digita um numero inteiro N: \n");
    int N=0;
    clock_t inicio, fim;
    double tempo_gasto;
    scanf("%d%*c", &N);

 
    inicio = clock(); // Marca o tempo inicial
    char* vet = criaVetBit(N);
    // imprimeBitVetor(vet,N);
       // Marca o tempo final
    marcaVetBit(vet,N);
  
    imprimeVetBitPrimo(vet,N);
    fim = clock(); 
  
    tempo_gasto = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %f segundos\n", tempo_gasto);

    return 0;
}