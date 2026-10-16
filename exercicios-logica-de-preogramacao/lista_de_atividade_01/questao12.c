#include <stdio.h>

int main(){
    int segundos, segundosrest, segundosfinal, minutos, horas;

    printf("Digite o tempo total de duração em segundos: ");
    scanf("%i", &segundos);

    horas = segundos / 3600;
    segundosrest = segundos % 3600;
    minutos = segundosrest / 60;
    segundosfinal = segundosrest % 60;

    printf("%i horas, %i minutos, %i segundos", horas, minutos, segundosfinal);

    return 0;
}
