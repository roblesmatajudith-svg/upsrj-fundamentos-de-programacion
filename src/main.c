#include <stdio.h>
int is_even(int numero)
{
return numero  %2==0;

}

void verificar_numero(int numero)
{
   

 if (numero == 0) {
        printf("El numero es par\n");

    }
    else if (is_even(numero)) {
        printf("El numero es par\n");
    }
    else {
        printf("El numero es impar\n");
    }
}

int main()
{
    while (1) {
        int numero;

        printf("Ingresa un numero:\n");
        scanf("%i", &numero);

        verificar_numero(numero);
        break;
    }

    return 0; 
}