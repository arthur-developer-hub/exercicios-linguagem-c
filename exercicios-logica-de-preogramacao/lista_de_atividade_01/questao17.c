#include <stdio.h>

int main(){
    float f, c;

    printf("Digite o valor de graus em Centígrados: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("A temperatura em Fahrenheit é: %.1f°", f);

    return 0;
}