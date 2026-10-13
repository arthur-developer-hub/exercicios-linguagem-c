#include <stdio.h>
#include <stdbool.h>

int main(){
    bool a, b, c, x;

    a = true;
    b = false;
    c = true;

    x = (a||b)&&(!c);

    printf("O RESULTADO DA EXPRESSÃO x = (a||b)&&(!c) É: %d ", x);

    return 0;
}