#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct{
    char nome[50];
    int RA;
}Aluno;


int main(){
    Aluno *a;
    int n;
    printf("Digite a qtd de alunos desejado: ");
    scanf("%d",&n);
    getchar();
    a = (Aluno*) malloc(n*sizeof(Aluno));
    for (int i = 0; i < n; i++){
        printf("Digite o nome do aluno a[%d]: ",i);
        fgets(a[i].nome,sizeof(a[i].nome),stdin);
        a[i].nome[strlen(a[i].nome)-1]='\0';
        printf("Digite o RA do Aluno: ");
        scanf("%d",&a[i].RA);
        getchar();
    }
    for (int i = 0; i < n; i++){
        printf("\nNome: %s\n",a[i].nome);
        printf("RA: %d\n",a[i].RA);
    }
}