#include "dijkstra.h"
#include <ctype.h>

double convertStrParaNum(char* str_ini, char* str_fim){
    char num[10];
    int i;
    for (i=0; str_ini != str_fim;i++){
        num[i] = *str_ini;
        str_ini++;
    }
    num[i]= '\0';
    char *endptr;

    double numero = strtod(num, &endptr);
    
    if (*endptr != '\0') {
        printf("Parte inválida na string: %s\n", endptr);
    } else {
        printf("Número convertido: %.2f\n", numero);
    }
    
    return numero;
}

double calculadora(double num1, double num2,char opr){
    
    switch (opr)
    {
    case '+':
        return num1+num2;    
        break;
    
    case '-':
        return num1-num2;    
        break;
    
    case '*':
        return num1*num2;    
        break;
    
    case '/':
        return num1 / num2;
        break;

    default:
        break;
    }

    return 0;
}

void calcula(Pilha* pil1, Pilha* pil2, char*str){
     char* ini_str;
     char* fim_str;
     double* num1;
     double* num2;
     char* opr;
     int flag =1;
    for(int i=0; *str !='\0';i++){
        flag=1;
        
        if(*str == '+' || *str == '-' || *str == '*' || *str == '/'){
            pushPilha(pil2,(void*)str);
        }


        while(isdigit(*str) || *str == '.'){
            
            if(flag)
                ini_str = str;
            str++;
            flag=0;
        }
        if(!flag){
            fim_str = str;
            double* num =(double*) malloc(sizeof(double));
            *num = convertStrParaNum(ini_str, fim_str);
            pushPilha(pil1,(void*) num);
        }

        if(*str == ')'){
            num1 = (double*) popPilha(pil1);
            num2 = (double*) popPilha(pil1);
            opr = (char*) popPilha(pil2);
            double* res =(double*) malloc(sizeof(double));
            *res = calculadora(*num1,*num2, *opr);
            free(num1);
            free(num2);
            pushPilha(pil1,(void*)res);
        }

        if(flag)
            str++;
    }
    double* res_f =(double*) malloc(sizeof(double));
    res_f = (double*)popPilha(pil1);
    printf("O resultado é:%.2f \n", *res_f);
}