#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main(){
    int fat;
    printf("Digite um numero: ");
    scanf("%d",&fat);
    printf("%d",fatorial(fat));
}

int fatorial(int n1){
    if (n1==0){
        return 1;
    }
    else
        return n1 * fatorial(n1 - 1);
}