#include <stdio.h>

int main(){
    int anos, meses, dias, soma;

    printf("Vamos ver sua idade total em dias, digite primeiro os anos: ");
    scanf("%i", &anos);

    printf("Agora os meses: ");
    scanf("%i", &meses);

    printf("Agora os dias: ");
    scanf("%i", &dias);

    anos = anos * 365;
    meses = meses * 12;
    soma = anos + meses + dias;

    printf("A sua idade total em dias é: %i", soma);

    return 0;
}