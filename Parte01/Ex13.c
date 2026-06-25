/*Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings. */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ocorre(char*,char*,int,int);

int main(){
    char *n1,*n2;
    int tam1, tam2;
    printf("Digite o tam1: ");
    scanf("%d",&tam1);
    printf("Digite o tam2: ");
    scanf("%d",&tam2);
    getchar();
    n1 = (char*) malloc((tam1+2)*sizeof(n1));
    n2 = (char*) malloc((tam2+2)*sizeof(n2));
    printf("Digite n1: ");
    fgets(n1,tam1+2,stdin);
    n1[strlen(n1)-1]='\0';
    printf("Digite o n2: ");
    fgets(n2,tam2+2,stdin);
    n2[strlen(n2)-1]='\0';
    tam1 = strlen(n1); 
    tam2 = strlen(n2);
    if (ocorre(n1,n2,tam1,tam2)){
        printf("Sim!!");
    }
    else
        printf("NAO!");
    free(n1);
    free(n2);
}

int ocorre(char n1[],char n2[], int tam1, int tam2){
    if (tam1 < tam2){
        return 0;
    }
    for (int i = 0; i <= tam1 - tam2; i++){
        int j=0;
        while (j < tam2 && *(n1+i+j) == *(n2+j)){
            j++;
        }
        if (j == tam2){
            return 1;
        }
    }
    return 0;
}
