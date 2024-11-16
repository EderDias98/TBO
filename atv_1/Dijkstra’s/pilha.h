#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;


Pilha* criaPilha(int M);
void pushPilha(Pilha* pilha,void*dado);


void* popPilha(Pilha* pilha);
#endif