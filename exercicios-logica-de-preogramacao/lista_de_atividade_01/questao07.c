#include <stdio.h>

int main(){
    int num, x;

    printf("Digite um número: ");
    scanf("%i", &num);

    x = num + 1;

    printf("O sucessor do número digitado é: %i", x);

    return 0;
}