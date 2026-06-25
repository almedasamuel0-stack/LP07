#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(char[]);

int main(){
    char palavra[50];
    printf("Digite a palavra: ");
    fgets(palavra,sizeof(palavra),stdin);
    palavra[strlen(palavra)-1]='\0';
    if (palindromo(palavra)){
        printf("Palindormo!!\n");
    }
    else
        printf("N. Palindromo!!\n");
}

int palindromo(char palavra[]){
   for (int i = 0; i < strlen(palavra); i++){
        if (palavra[i]!=palavra[strlen(palavra)-1-i]){
            return 0;
        }
   }
   return 1;
}