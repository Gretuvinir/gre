#include <stdio.h>

int main () {

  int numero = 0;

  printf("Entre com um numero: ");
     
  int deu_certo = scanf("%i", &numero);

  printf("Voce digitou: %i\n", numero);
  printf(" a leitura deu certo? %i\n", deu_certo);


  int coord_x = 0;
  int coord_y = 0;

  printf ("Entre com as coordenadas de um ponto: ");
  deu_certo = scanf("%i %i", &coord_x, &coord_y);

  
  printf ("Voce digitou: %i %i\n", coord_x, coord_y);
  

  
  

  



  
  return 0;
}