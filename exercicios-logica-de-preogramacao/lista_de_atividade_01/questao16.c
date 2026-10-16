#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, e, x;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    printf("Digite o valor de D: ");
    scanf("%f", &d);

    printf("Digite o valor de E: ");
    scanf("%f", &e);

    x = (3*pow(a, 3) + c * pow(b, 2)) / (1 + 4 * d) - (e / 2);

    printf("Valor da variável A: %.2f\nValor da variável B: %.2f\nValor da variável C: %.2f\nValor da variável D: %.2f\nValor da variável E: %.2f\nResultado de x: %.2f\n", a, b, c, d, e, x);

    return 0;
}