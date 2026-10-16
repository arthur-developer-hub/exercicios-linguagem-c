#include <stdio.h>

int main(){
    float num1, num2, total, result1, result2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    total = num1 + num2;
    result1 = num1 / total * 100;
    result2 = num2 / total * 100;

    printf("SOMA TOTAL: %.2f\nPercetual do primeiro número: %.2f%%\nPercetual do segundo número: %.2f%%", total, result1, result2);

    return 0;
}
