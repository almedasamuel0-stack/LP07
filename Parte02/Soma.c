#include <stdio.h>

int soma(int);

int main(){
    int n1;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("SOMA: %d",soma(n1));
}

int soma(int n1){
    if (n1==0){
        return 0;
    }
    else
        return soma(n1-1)+n1;
}