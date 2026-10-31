#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if(idade < 10){
        printf("O valor do plano é R$30.00");
    }
    else if(idade < 29){
        printf("O valor do plano é R$60.00");
    }
    else if(idade < 45){
        printf("O valor do plano é R$120.00");
    }
    else if(idade < 59){
        printf("O valor do plano é R$150.00");
    }
    else if(idade < 65){
        printf("O valor do plano é R$250.00");
    }
    else{
        printf("O valor do plano é R$400.00");
    }
}