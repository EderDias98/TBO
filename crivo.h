#ifndef CRIVO_H
#define CRIVO_H

#include <stdlib.h>
#include <stdio.h>

typedef struct num tNum;


tNum** criaLista(int N);


void imprimePrimos(tNum** lista,int N);

void freeLista(tNum** lista, int N);
void marcaPrimos(tNum** lista,int N);

#endif