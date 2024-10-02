#include <stdio.h>
int main () {

// entrada
  
  int numero1;
  int numero2;
  float numero3;

  printf ("entre com um numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf ("Entre com outro numero: ");
  deu_certo = scanf("%i", &numero2);

  printf ("Entre com um decimal: ");
  deu_certo = scanf("%f", &numero3);

  // processamento

  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  int divisao = numero1 / numero2;
  int resto_divisao = numero1 % numero2;
  float fracao = numero1 / numero3;


  // Saida

  printf("%i + %i = %i\n", numero1, numero2, soma);
  printf("%i - %i = %i\n", numero1, numero2, subtracao);
  printf("%i x %i = %i\n", numero1, numero2, multiplicacao);
  printf("%i / %i = %i\n", numero1, numero2, divisao);
  printf("%i %% %i = %i\n", numero1, numero2, resto_divisao);
  printf("%i / %f = %f\n", numero1, numero3, fracao);
  

  

  return 0;
}