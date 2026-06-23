/*Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e
exiba o maior endereço*/
#include <stdio.h>
#include <stdlib.h>

void compare(int*,int*);

int main(){
    int n1,n2;
    printf("N1:%p\tN2:%p\n",&n1,&n2);
    compare(&n1,&n2);
}

void compare(int *n1p,int *n2p){
    if (n1p>n2p){
        printf("N1P >> N2P");
    }
    else
        printf("N1P << N2P");
}