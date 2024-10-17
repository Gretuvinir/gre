#include <stdio.h>

int main()
{

    int numero = 0;

    printf("Entre com um numero entre 1 e 10: ");
    scanf("%i", &numero);

    if (numero > 0 && numero < 11)
    {
        printf("Tabuada de %i\n", numero);
        //laco crescente
        for(int i=1; i<11; i++) {
            printf("%i x %i = %i\n", i, numero, i*numero);
        }
       //laco descrescente
        for (int i=10; i>0; i--) {
            printf("%i x %i = %i\n", i, numero, i*numero);
        }

        for(;;) {
            printf("Ao infinito e alem!\n");
        }

        //printf("1x%i = %i\n", numero, 1* numero);
        //printf("2x%i = %i\n", numero, 2* numero);
        //printf("3x%i = %i\n", numero, 3* numero);
        //printf("4x%i = %i\n", numero, 4* numero);
        //printf("5x%i = %i\n", numero, 5* numero);
        //printf("6x%i = %i\n", numero, 6* numero);
       // printf("7x%i = %i\n", numero, 7* numero);
       // printf("8x%i = %i\n", numero, 8* numero);
        //printf("9x%i = %i\n", numero, 9* numero);
       // printf("10x%i = %i\n", numero, 10* numero);
    }
    else
    {

        printf("Numero invalido! Tente novamente.\n");
    }

    return 0;
}