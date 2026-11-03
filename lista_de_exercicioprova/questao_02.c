#include <stdio.h>

int main()
{
    int a = 5, b = 3, c;
    c = a++ * 2 + --b; // O "a" só vai ser encrementado depois dessa linha pois os sinais de "++" estão depois da variável, já "b" vai ser decrementado nessa primeira linha pois os sinais de "--" estão antes da variável. 
    printf("%d %d %d\n", a, b, c);
    c = a % b + a / b * 2 - (a - b) % 3;
    printf("%d\n", c);
    a += b *= 2;
    printf("%d %d\n", a, b);
}