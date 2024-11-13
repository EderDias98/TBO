#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#include <stdlib.h>

void* criaPilha(int M);

void pushPilha(void* pilha,void*dado);

void* popPilha(void* pilha);

#endif