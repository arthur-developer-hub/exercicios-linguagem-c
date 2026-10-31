#include <stdio.h>

int main(){
    int num;

    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    if(num > 10){
        printf("O número é maior que 10");
    }
    else if(num < 10){
        printf("O número é menor que 10");
    }
    else{
        printf("O número é igual a 10");
    }
}
