#include <stdio.h>
#include <string.h>

int main(){
    char nome[10];
    int aux;
    printf("Digite o nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strlen(nome)-1]='\0';
    printf("Nome antes de inverter: %s\n",nome);
    for (int i = 0; i < (strlen(nome))/2; i++){
        aux=nome[i];
        nome[i]=nome[strlen(nome)-1-i];
        nome[strlen(nome)-1-i]=aux;
    }
    printf("Nome invertido: %s",nome);
}