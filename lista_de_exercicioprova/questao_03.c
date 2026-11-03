#include <stdio.h>
#define segundos_minuto 60
#define segundos_hora 3600
#define segundos_dia 86400
int main(){
    int segundostotais, dia, hora, minuto, segundosrest;

    printf("Digite os segundos totais: ");
    scanf("%i", &segundostotais);

    dia = segundostotais / segundos_dia;
    hora = segundostotais % segundos_dia / segundos_hora;
    minuto = segundostotais % segundos_dia % segundos_hora / segundos_minuto;
    segundosrest = segundostotais % segundos_dia % segundos_hora % segundos_minuto;

    printf("%i dias, %02d:%02d:%02d", dia, hora, minuto, segundosrest);
}