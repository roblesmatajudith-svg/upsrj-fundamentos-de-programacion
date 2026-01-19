#include <stdio.h>

int main(void)
{

    float base = 0.0;
    float altura = 0.0;
    float area = 0.0;

    printf("Ingresa la base del cuadrado:\n");
    scanf("%f", &base);

    printf("Ingresa la altura del cuadrado:\n");
    scanf("%f", &altura);

    area = base * altura;

    printf("El resultado del área del cuadrado es: %.2f\n\n", area);

    printf("Calculadora de volumen de un cubo\n");
    printf("===============================\n\n");

    float lado = 0.0;
    float volumen = 0.0;

    printf("Ingresa la longitud del lado del cubo: ");
    if (scanf("%f", &lado) != 1) {
        printf("Error: Debes ingresar un número válido.\n");
        return 1;
    }

    if (lado <= 0) {
        printf("Error: El lado debe ser un valor positivo.\n");
        return 1;
    }

    volumen = lado * lado * lado;

    printf("\nRESULTADOS:\n");
    printf("-----------\n");
    printf("Lado del cubo: %.2f unidades\n", lado);
    printf("Volumen del cubo: %.2f unidades cúbicas\n", volumen);

    return 0; 
}