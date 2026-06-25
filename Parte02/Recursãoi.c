#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char*,int,int);

int main(){
    char n1[30];
    printf("Digite a palavra: ");
    fgets(n1,sizeof(n1),stdin);
    n1[strlen(n1)-1]='\0';
    printf("Palavra Orig: %s",n1);
    inverte(n1,0,strlen(n1)-1);
    printf("\nPalavra inv: %s",n1);
}

void inverte(char n1[],int inicio,int fim){
    char aux;
    if (fim<=inicio){
        return;
    }
    aux = n1[inicio];
    n1[inicio] = n1[fim];
    n1[fim] = aux;
    inverte(n1,inicio+1,fim-1);
}