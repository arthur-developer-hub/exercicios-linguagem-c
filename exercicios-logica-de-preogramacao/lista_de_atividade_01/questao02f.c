#include <stdio.h>

int main(){
    int a , b, c, d, e, x;

    a = 7;
    b = 8;
    c = 9;
    d = 10;
    e = 11;

    x = (a-b*c)*(3*a-(d*e));

    printf("O RESULTADO DA EXPRESSÃO x = (a-b*c)*(3*a-(d*e)) é: %i", x);

    return 0;
}