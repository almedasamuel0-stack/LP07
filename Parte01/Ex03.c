/*Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o.*/
#include <stdio.h>
#include <stdlib.h>

void comparen(int*,int*);

int main(){
    int n1,n2;
    printf("Digite o valor 2 no terminal: ");
    scanf("%d",&n1);
    printf("Digite o valor 2 no terminal: ");
    scanf("%d",&n2);
    printf("N1: %p\tN2: %p\n");
    comparen(&n1,&n2);
}

void comparen(int *n1p, int *n2p){
    if (n1p>n2p){
        printf("N1P >> N2P");
    }
    else
        printf("N1P << N2P");
}