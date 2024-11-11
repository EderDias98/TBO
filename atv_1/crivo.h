#ifndef CRIVO_H
#define CRIVO_H

#include <stdlib.h>
#include <stdio.h>

typedef struct num tNum;


tNum** criaLista(int N);


void imprimePrimos(tNum** lista,int N);

void freeLista(tNum** lista, int N);
void marcaPrimos(tNum** lista,int N);

void marcaLista(tNum** lista,int N);

int* criaVet(int N);
 
void marcaVet(int* vet, int N);

 void imprimeVetPrimo(int* vet, int N);
 char* criaVetChar(int N);
 void marcaVetChar(char* vet, int N);
 void imprimeVetPrimoChar(char* vet, int N);
void imprimeVetBitPrimo(char* vet, int N);
void calculaIndicePosicao(int bit_global, int *indice_array, int *posicao_bit);
void zeraBit(char array[], int indice_array, int indice_posicao);

int ehZeroBit(char array[], int indice_array, int indice_posicao);

void marcaVetBit(char* vet, int N);
char* criaVetBit(int N);
void imprimeBitVetor(char *array, int N);

#endif