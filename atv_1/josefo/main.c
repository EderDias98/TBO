#include "josefo.h"
#include <time.h>

//3- a estrutura mais adequada é um vetor alocado dinamicamente
//4- sim é possivel consumir menos memoria se usarmos um vetor de
// char ou manipularmos bits
int main(){

    int N,M;
    clock_t inicio, fim;
    double tempo_gasto;
    printf("Digite N e M: \n");
    scanf("%d %d", &N, &M);
    inicio = clock();
    int* lista = criaLista(N);
    descobreLider(lista,N,M);
    fim = clock();
    
    tempo_gasto = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %f segundos\n", tempo_gasto);

    return 0;
}