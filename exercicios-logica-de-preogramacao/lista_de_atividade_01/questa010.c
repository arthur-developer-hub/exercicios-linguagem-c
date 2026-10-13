#include <stdio.h>

int main(){
    int anos, meses, dias, diastotal;

    printf("Digite sua idade em dias: ");
    scanf("%i", &diastotal);

    anos = diastotal / 365;
    dias = diastotal % 365;
    meses = dias / 30;
    dias = dias % 30;

    printf("A pessoa tem %i anos, %i meses, e %i dias de vida", anos, meses, dias);

    return 0;
}