/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
2 variaveis e troque o seu conteúdo, ou seja, esta função e chamada passando duas
variaveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
tera o valor de A.*/
#include <stdio.h>
#include <stdlib.h>

void trocap(int*, int*);
void imprime(int, int);

int main(){
    int n1,n2;
    printf("Digite o valor de A: ");
    scanf("%d",&n1);
    printf("Digite o valor de B: ");
    scanf("%d",&n2);
    imprime(n1,n2);
    trocap(&n1,&n2);
    imprime(n1,n2);
}

void imprime(int n1, int n2){
    printf("Valor de A: %d\n",n1);
    printf("Valor de B: %d\n",n2);
}

void trocap(int *n1p, int *n2p){
    int aux;
    aux=*n1p;
    *n1p=*n2p;
    *n2p=aux;
}