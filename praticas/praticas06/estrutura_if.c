#include <stdio.h>
int main()
{

    int numero= 0;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2)
    {
        printf("O numero %i eh par!\n", numero);
    } else {

        printf("O numero %i eh impar!\n", numero);
    }        
    
    int idade= 0;

    printf("Digite sua idade: ");
    scanf ("%i", &numero);
    if (idade <16) {
    printf ("Voce nao pode votar!\n");
    } else { 
    
    if (idade <18 || idade >70) {
    printf("Voce pode votar!\n");
      
    } else {

    printf("Voce eh obrigado a votar!\n");
    }

    }

     float media= 0;

     printf("Digite sua media final: ");
     scanf ("%f", &media);

     if (media ==0.0f) {
       printf("A mencao eh 'SR'. \n");
     }
     
     else if (media < 3.0f)  {
      printf("A mencao eh 'II'. \n");
     }

     else if (media < 5.0f)  {
       printf("A mencao eh 'MI'. \n");
     }

     else if (media < 9.0f)  {
       printf ("A mencao eh 'MS' .\n");
     }

     else {
        printf("A mencao eh 'SS' .\n");
     }     
    
     








    return 0;
}
