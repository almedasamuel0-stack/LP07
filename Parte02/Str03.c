#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    char lista_nome[5][30],busca[20];
    int ind=0;
    for (int i = 0; i < 5; i++){
        printf("Insira o nome[%d]: ",i);
        fgets(lista_nome[i],sizeof(lista_nome[i]),stdin);
        lista_nome[i][strlen(lista_nome[i])-1]='\0';
        system("cls");
    }
    for (int i = 0; i < 5; i++){
        printf("Nome[%d]: %s\n",i,lista_nome[i]);
    }
    printf("Digite o nome a ser buscado: ");
    fgets(busca,sizeof(busca),stdin);
    busca[strlen(busca)-1]='\0';
    for (int i = 0; i < 5; i++){
        if (strcmp(lista_nome[i],busca)==0){
            printf("Encontrado em %d",i);
            ind++;
        }
    }
    if (ind=0){
        printf("N.Encontrado!");
    }
    
}