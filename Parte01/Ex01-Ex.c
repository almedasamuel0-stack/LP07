/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação.*/
#include <stdio.h>
#include <stdlib.h>

void mudanca(char*,int*,float*);
void imprime1(char,char*,int,int*,float,float*);
void imprime2(char,char*,int,int*,float,float*);
int main(){
    char n1;
    char *n1p;
    int n2;
    int *n2p;
    float n3;
    float *n3p;
    n1='1';
    n1p=&n1;
    n2=2;
    n2p=&n2;
    n3=3;
    n3p=&n3;
    imprime1(n1,n1p,n2,n2p,n3,n3p);
    mudanca(n1p,n2p,n3p);
    imprime2(n1,n1p,n2,n2p,n3,n3p);
}

void mudanca(char *n1p,int *n2p,float *n3p){
    *n1p='2';
    *n2p=3;
    *n3p=4;
}

void imprime1(char n1,char *n1p,int n2,int *n2p,float n3,float *n3p){
    printf("\n//////Valores CHAR - 01//////\n");
    printf("Conteudo do apontado: %c\n",*n1p);
    printf("Endereco da Variavel: %p\n",n1p);
    printf("Endereco do ponteiro: %p\n",&n1p);
    printf("Conteudo de n1: %c\n",n1);
    printf("Endereco de n1: %p\n",&n1);
    printf("\n//////Valores INT - 01//////\n");
    printf("Conteudo do apontado: %d\n",*n2p);
    printf("Endereco da Variavel: %p\n",n2p);
    printf("Endereco do ponteiro: %p\n",&n2p);
    printf("Conteudo de n2: %d\n",n2);
    printf("Endereco de n1: %p\n",&n2);
    printf("\n//////Valores FLOAT - 01//////\n");
    printf("Conteudo do apontado: %.f\n",*n3p);
    printf("Endereco da Variavel: %p\n",n3p);
    printf("Endereco do ponteiro: %p\n",&n3p);
    printf("Conteudo de n3: %.f\n",n3);
    printf("Conteudo de n3: %p\n",&n3);
}

void imprime2(char n1,char *n1p,int n2,int *n2p,float n3,float *n3p){
    printf("\n//////Valores CHAR - 02//////\n");
    printf("Conteudo do apontado: %c\n",*n1p);
    printf("Endereco da Variavel: %p\n",n1p);
    printf("Endereco do ponteiro: %p\n",&n1p);
    printf("Conteudo de n1: %c\n",n1);
    printf("Endereco de n1: %p\n",&n1);
    printf("\n//////Valores INT - 02//////\n");
    printf("Conteudo do apontado: %d\n",*n2p);
    printf("Endereco da Variavel: %p\n",n2p);
    printf("Endereco do ponteiro: %p\n",&n2p);
    printf("Conteudo de n2: %d\n",n2);
    printf("Endereco de n1: %p\n",&n2);
    printf("\n//////Valores FLOAT - 02//////\n");
    printf("Conteudo do apontado: %.f\n",*n3p);
    printf("Endereco da Variavel: %p\n",n3p);
    printf("Endereco do ponteiro: %p\n",&n3p);
    printf("Conteudo de n3: %.f\n",n3);
    printf("Conteudo de n3: %p",&n3);
}