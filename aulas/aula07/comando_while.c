#include <stdio.h>

int main () {

int numero = 0;

printf("Entre com um numero entre 1 e 10: ");
scanf("%i", &numero);

while (numero < 1 || numero > 10) 
{

while (getchar()!= '\n'); //limpar buffer do teclado
printf("Numero invalido. Tente novamente!\n");
printf("Entre com um numero entre 1 e 10: ");
scanf("%i", &numero);
}






    return 0;
}