/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Verificação de CPF 
cálculo do dígito verificador
Desenvolvida por Zeus Xaloc Dev

Essa rotina em C calcula os dois
dígitos verificadores do CPF e retorna
se o CPF é válido ou não. 

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

/*
 Code By Zeus Xaloc Dev :) 
 Utilização apenas Para, 
 Melhoria do Código.
 Para Facilitar Coloquei Comentários!
*\

/* Creditos: @EnormityHacking & @Sasaki */


#include <stdio.h>
#define MAX 20

int main (){
    int cpf[MAX], i=0, n=11, interno[MAX], soma=0, resto=0, digito=0, digitoverificador;
/* zerar o vetor */
    for(i=0; i<11; i++){
        interno[i]=0;
    }
    for(i=0; i<11; i++){
        cpf[i]=0;
    }
/* entrada de dados */
    printf("Digite o numero do CPF: ");
    for(i=0;i<11;i++){
        scanf("%d", &cpf[i]);
    }
/* calculo do primeiro digito verificador */
    for(i=0;i<9;i++){
        n=n-1;
        interno[i]=n*cpf[i];
    }
    for(i=0;i<9;i++){
        soma+=interno[i];
    }
    resto=soma%11;
    digito=11-resto;
    if(resto<2)
        digitoverificador=0;
    else
        digitoverificador=digito;
    if(digitoverificador!=cpf[9]){
        printf("\n * CPF invalido *");
    }
/* calculo do segundo digito verificador */
    n=12;
    for(i=0;i<9;i++){
        n=n-1;
        interno[i]=n*cpf[i];
    }
    for(i=0;i<9;i++){
        soma+=interno[i];
    }
    resto=soma%11;
    digito=11-resto;
    if(resto<2)
        digitoverificador=0;
    else
        digitoverificador=digito;
    if(digitoverificador!=cpf[10]){
        printf("\n * CPF invalido **");
    }
    else
        printf("\n * CPF valido *");
    return(0);
}