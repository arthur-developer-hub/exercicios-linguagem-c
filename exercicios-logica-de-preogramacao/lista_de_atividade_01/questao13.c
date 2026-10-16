#include <stdio.h>

int main(){
    float custofab, custoconsum, porcdist, impostos;

    printf("Digite o custo de fábrica: ");
    scanf("%f", &custofab);

    porcdist = (28 * custofab) / 100;
    impostos = (45 * custofab) / 100;
    custoconsum = custofab + porcdist + impostos;
    
    printf("O custo do consumidor é: %.2f$", custoconsum);
    return 0;
}