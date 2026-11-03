#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && !(ano % 100 == 0) || ano % 400 == 0)
    {
        printf("O ano é bissexto\n");
    }
    else
    {
        printf("O ano não é bissexto\n");
    }

    switch (mes)
    {
    case 1:
        if (dia == 0 || dia > 31)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Janeiro de %d\n", dia, ano);
        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Janeiro de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Fevereiro de %d", ano);
        }
        return 0;

    case 2:
        if (ano % 4 != 0 && dia >= 29)
        {
            printf("O ano NÃO é bissexto, dia digitado inválido!");
            return 0;
        }
        else if (dia == 0 || dia > 29)
        {
            printf("Dia inválido!");
            return 0;
        }
        else if (dia < 28)
        {
            printf("%d de Fevereiro de %d\n", dia, ano);
            ++dia;
            printf("O dia seguinte será: %d de Fevereiro de %d", dia, ano);
            return 0;
        }
        else
        {
            printf("%d de Fevereiro de %d\n", dia, ano);
            printf("O dia seguinte será: 01 de Março de %d", ano);
            return 0;
        }
    case 3:
        if (dia == 0 || dia > 31)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Março de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Março de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Abril de %d", ano);
        }
        return 0;
    case 4:
        if (dia == 0 || dia > 30)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Abril de %d\n", dia, ano);

        if (dia < 30)
        {
            ++dia;
            printf("O dia seguinte será: %d de Abril de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Maio de %d", ano);
        }
        return 0;
    case 5:
        if (dia == 0 || dia > 31)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Maio de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Maio de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Junho de %d", ano);
        }
        return 0;
    case 6:
        if (dia == 0 || dia > 30)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Junho de %d\n", dia, ano);

        if (dia < 30)
        {
            ++dia;
            printf("O dia seguinte será: %d de Junho de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Julho de %d", ano);
        }
        return 0;
    case 7:
        if (dia == 0 || dia > 31)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Julho de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Julho de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Agosto de %d", ano);
        }
        return 0;

    case 8:
        if (dia == 0 || dia > 31)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Agosto de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Agosto de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Setembro de %d", ano);
        }
        return 0;
    case 9:
        if (dia == 0 || dia > 30)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Setembro de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Setembro de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Outubro de %d", ano);
        }
        return 0;
    case 10:
        if (dia == 0 || dia > 31)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Outubro de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Outubro de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Novembro de %d", ano);
        }
        return 0;
    case 11:
        if (dia == 0 || dia > 30)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Novembro de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Novembro de %d", dia, ano);
        }
        else
        {
            printf("O dia seguinte será: 01 de Dezembro de %d", ano);
        }
        return 0;
    case 12:
        if (dia == 0 || dia > 31)
        {
            printf("Dia inválido!");
            return 0;
        }
        printf("%d de Dezembro de %d\n", dia, ano);

        if (dia < 31)
        {
            ++dia;
            printf("O dia seguinte será: %d de Dezembro de %d", dia, ano);
        }
        else
        {
            ++ano;
            printf("O dia seguinte será: 01 de Janeiro de %d", ano);
        }
        return 0;
    default:
        printf("Mês inválido!");
        return 0;
    }
}