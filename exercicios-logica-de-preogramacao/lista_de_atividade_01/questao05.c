#include <stdio.h>

int main(){
    int num, x;

    printf("Digite um valor: ");
    scanf("%i", &num);

    x = num % 3;

    printf("O resto da divisão do número digitado por 3 é: %i", x);

    return 0;
}