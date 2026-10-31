#include <stdio.h>

int main(){
    int a, b;

    printf("Digite o numéro A: ");
    scanf("%i", &a);

    printf("Digite o numéro B: ");
    scanf("%i", &b);

    if(a % b == 0){
        printf("O A é divisivel por B");
    }
    else{
        printf("Eles não são diviseis.");
    }
}