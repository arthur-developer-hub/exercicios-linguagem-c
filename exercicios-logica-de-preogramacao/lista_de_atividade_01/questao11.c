#include <stdio.h>

int main(){
    float media1, media2, media3, peso1, peso2, peso3, result1, result2, result3, mediapond;

    printf("Digite a primeira média: ");
    scanf("%f", &media1);

    printf("Digite a segunda média: ");
    scanf("%f", &media2);

    printf("Digite a terceira média: ");
    scanf("%f", &media3);

    peso1 = 2;
    peso2 = 3;
    peso3 = 5;

    result1 = media1 * peso1;
    result2 = media2 * peso2;
    result3 = media3 * peso3;

    mediapond = (result1 + result2 + result3) / (peso1 + peso2 + peso3);

    printf("A média ponderada do aluno é: %.1f", mediapond);

    return 0;
}