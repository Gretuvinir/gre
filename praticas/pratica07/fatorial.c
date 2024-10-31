#include <stdio.h>
int main () {

int numero = 0;
int fatorial = 1;

scanf ("%i", &numero);
for (int i=numero; i>0; i--) {
fatorial = fatorial * i;
}

printf("%i! = %i", numero, fatorial);



 







    return 0;
}