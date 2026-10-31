#include <stdio.h>

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if(num >= 20 && num <= 90){
        printf("O número digitado está entre 20 e 90");
    }
    else{
        printf("O número digitado NÃO está entre 20 e 90");
    }
}