#include <stdio.h>
int main()
{

    int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &numeros[i]);

    }
    int numero = 0;
    scanf("%i", &numero);

    int achou = -1;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numero)
        {
            achou = i;
        }
    }
if(achou <0 ) {
   
 printf("O numero nao foi incontrado!");
}
else {
    printf("O numero foi encontrado na posiçao %i", achou);
} 

  

    return 0;
}