#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char Nome[40];
    int RA;
    float nota[3];
}Aluno;

int main(){
    Aluno turma[5];
    char busca[40];
    int ind=-1,aux;
    for (int i = 0; i < 5; i++){
        printf("Digite o nome do aluno %d: ",i);
        fgets(turma[i].Nome,sizeof(turma[i].Nome),stdin);
        turma[i].Nome[strlen(turma[i].Nome)-1]='\0';
        printf("Digite o RA do aluno %d: ",i);
        scanf("%d",&turma[i].RA);
        getchar();
        for (int j = 0; j < 3; j++){
            printf("Digite a nota [%d] do aluno [%d]: ",i,j);
            scanf("%f",&turma[i].nota[j]);
            getchar();
        }
    }
    for (int i = 0; i < 5; i++){
        printf("\nNome[%d]: %s\n",i,turma[i].Nome);
        printf("RA[%d]: %d\n",i,turma[i].RA);
        for (int j = 0; j < 3; j++){
            printf("Nota[%d] do Aluno[%d]: %.2f\n",i,j,turma[i].nota[j]);
        }
    }
    printf("Digite o nome a ser buscado: ");
    fgets(busca,sizeof(busca),stdin);
    busca[strlen(busca)-1]='\0';
    for (int i = 0; i < 5; i++){
        if (strcmp(turma[i].Nome,busca)==0){
            printf("\nEncontrado em %d",i);
            ind=i;
        }
    }
    if (ind==-1){
        printf("\nN.Encontrado!!");
    }
    else{
        printf("\nDeseja imprimir os dados? (1 - S/ 2 - N)\n");
        scanf("%d",&aux);
        if (aux==1){
        system("cls");
        printf("Nome: %s\n",turma[ind].Nome);
        printf("RA: %d\n",turma[ind].RA);
        for (int j = 0; j < 3; j++){
            printf("Nota[%d]: %f\n",j,turma[ind].nota[j]);
            }
        }
    }
}