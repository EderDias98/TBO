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

#endif