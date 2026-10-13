#include <stdio.h>

int main(){
    int a, b, c, x;

    a = 7;
    b = 8;
    c = 9;

    x=((a+b*c)/b)+c/2;

    printf("O RESULTADO DA EXPRESSÃO x=((a+b*c)/b)+c/2 É: %i", x);

    return 0;
}