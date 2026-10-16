#include <stdio.h>

int main(){
    char nome[50];
    int idade, dias;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf ("%i", &idade);

    dias = idade * 365;

    printf("%s, VOCê JÁ VIVEU %i DIAS.", nome, dias);

    return 0;
}