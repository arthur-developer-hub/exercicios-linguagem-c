#include <stdio.h>

int main(){
    int num,x;

    printf("Digite um valor: ");
    scanf("%i", &num);

    x = num + 10;
    
    printf("O valor digitado com o valor 10 adicionado é: %i", x);

    return 0;
}