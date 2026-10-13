#include <stdio.h>

int main(){
    int num, ad, resto;

    printf("Digite um número: ");
    scanf("%i", &num);

    ad = num + 11;
    resto = num % 10;

    printf("O resultado da adição com 11 é: %i\nO resultado do resto da divisão por 10 é: %i", ad, resto);

    return 0;
}