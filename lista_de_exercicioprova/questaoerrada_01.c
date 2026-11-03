//Código desorganizado sem espaços para mostrar a hierarquia.
#include <stdio.h>
#define PI 3.14159265; //Ponto e vírgula não é necessário nessa linha.
#define MAXIMO = 100 //Para usar o define não precisa do sinal de igualdade "=", e em nenhum momento esse máximo se faz necessário no código.
main() {//Falta do int.
int 2raio, Area//Variável com letra maiuscula, variavel 2raio errada e falta do ";".
float resultado;//Variável não utilizada.
printf("Digite o raio: ");
scanf("%f", raio);//"%f" usado errado, deveria ser %i, pois a variável foi anunciada como inteira e faltou o "&" antes da palavra raio.
area = (raio*raio)*PI;
print("A area e %d \n", area);