#include <stdio.h>

int main(){
    float salario, salariofinal;

    printf("Digite o seu salário: ");
    scanf("%f", &salario);

    if(salario <= 500){
        salariofinal = salario + (salario * 0.50);
        printf("Seu salário com o aumento de 50%% é: %.2f$", salariofinal);
    }
    else if(salario <= 1000){
        salariofinal = salario + (salario * 0.40);
        printf("Seu salário com o aumento de 40%% é: %.2f$", salariofinal);
    }
    else if(salario <= 2000){
        salariofinal = salario + (salario * 0.30);
        printf("Seu salário com o aumento de 30%% é: %.2f$", salariofinal);
    }
    else if(salario <= 2500){
        salariofinal = salario + (salario * 0.20);
        printf("Seu salário com o aumento de 20%% é: %.2f$", salariofinal);
    }
    else{
        salariofinal = salario + (salario * 0.10);
        printf("Seu salário com o aumento de 10%% é: %.2f$", salariofinal);
    }
}