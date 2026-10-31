#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    if(num1 == num2){
        printf("Os números são iguais.");
    }
    else{
        printf("Os números são diferentes.");
    }
    
}