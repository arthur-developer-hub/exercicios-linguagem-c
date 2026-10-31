#include <stdio.h>

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if(num % 2 == 0){
        printf("O número é Par.");
    }
    else{
        printf("O número é Ímpar.");
    }
}