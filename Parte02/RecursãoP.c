#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo (char*,int,int);

int main(){
    char n1[50];
    printf("Digite um palindromo: ");
    fgets(n1,sizeof(n1),stdin);
    n1[strlen(n1)-1]='\0';
    int inicio = 0, fim = (strlen(n1)-1);
    if (palindromo(n1,inicio,fim)){
        printf("Palindromo!!");
    }
    else
        printf("N. Palindromo!");
}

int palindromo(char n1[],int inicio, int fim){
    if (fim<=inicio){
        return 1;
    }
    if (n1[inicio]!=n1[fim]){
       return 0;
    }
    palindromo(n1,inicio+1,fim-1);
}