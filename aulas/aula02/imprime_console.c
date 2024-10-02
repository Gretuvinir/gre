#include <stdio.h> //biblioteca de entrada e saida na console

 int main() {
   //imprime um texto na tela
printf("Um texto qualquer entre aspas duplas\n");

    // imprime um numero inteiro
     printf("%i\n", 10);
     printf("%i %i\n", 50, 100);
     printf("%5i\n", 1);
     printf("%05i\n", 21);

     //imprie um numero decimal
     printf("%f\n", 8.5);
     printf("%.3f\n", 3.14159);
     printf("%8.2f\n", 110.5);
     printf("%8.2f\n", 2557.86);

     //imprime um caractere
     printf("%c\n", 'A');
     printf("%c\n", 68);

     // imprime uma string
     printf("%s\n", "Boa Noite");
     printf("%30s!\n", "Quero cafe");
     printf("%-30s!\n", "Quero cafe");
    
    
    
    
   return 0;
  
 }