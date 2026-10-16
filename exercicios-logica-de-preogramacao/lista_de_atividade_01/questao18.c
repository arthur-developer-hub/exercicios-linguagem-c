#include <stdio.h>

int main(){
    int num1, num2, x;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    x = num1;
    num1 = num2;
    num2 = x;

    printf("Primeiro número invertido: %i\nSegundo número invertido: %i\n",num1,num2);
    return 0;

    
}