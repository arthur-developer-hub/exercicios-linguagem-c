#include <stdio.h>
#include <math.h> // Utlizei essa biblioteca para fazer a potênciação.
#define PI 3.14159265 // Utilizei para definir o valor de PI.

int main(){
    float raio, area;//Criei duas váriaveis para armazenar o valor do raio e o resultado da area.

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pow(raio,2)*PI; //Fiz o calculo com o pow para elevar o raio ao quadrado.

    printf("O valor da área é: %.1f", area);
}