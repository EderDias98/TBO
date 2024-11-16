#include "dijkstra.h"




int main(){
    char str[10000];
    scanf("%[^\n]%*c", str);
    Pilha* pil1 =  criaPilha(20);
    Pilha* pil2 = criaPilha(20);
    calcula(pil1,pil2,str);


    return 0;
}