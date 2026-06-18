/*Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e
exiba o maior endereço*/
#include <stdio.h>
#include <stdlib.h>

void compare(int*,int*);

int main(){
    int n1,n2,*n1p,*n2p;
    n1=2;
    n2=1;
    n1p=&n1;
    n2p=&n2;
    compare(n1p,n2p);
}

void compare(int *n1p,int *n2p){
    if (*n1p>*n2p){
        printf("N1P >> N2P");
    }
    else
        printf("N1P << N2P");
}