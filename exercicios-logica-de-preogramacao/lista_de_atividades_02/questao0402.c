#include <stdio.h>

int main(){
    int num, dezena;

    printf("Digite um número: ");
    scanf("%i", &num);

    dezena = num / 10;

    if(dezena % 2 == 0){
        printf("O número da dezena é PAR");
    }
    else{
        printf("O número da dezena é íMPAR");
    }
}