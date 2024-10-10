#include <stdio.h>
int main() {

 // int nota =0;

 // printf("Entre com uma nota de 1 a 5: ");
 // scanf("%i", &nota);

//  if (nota== 1) {
//      printf("Voce ganhou 1 estrela\n");
//  }else if (nota== 2) {
//      printf("voce ganhou 2 estrelas!\n");
//  }else if (nota== 3) {
//      printf("voce ganhou 3 estrelas!\n");
//  }else if (nota== 4) {
//      printf("voce ganhou 4 estrelas!\n");
//  }else if (nota== 5) {
//      printf("voce ganhou 5 estrelas!\n");
//  } else {
//      printf("Nota invalida!\n");
//  }


// switch(nota) {
//     case 1: printf("Voce ganhou 1 estrela!\n"); break;
//     case 2: printf("Voce ganhou 2 estrela!\n"); break;
//     case 3: printf("Voce ganhou 3 estrela!\n"); break;
//     case 4: printf("Voce ganhou 4 estrela!\n"); break;
//     case 5: printf("Voce ganhou 5 estrela!\n"); break;
//     default: printf("Nota invalida!\n");
// }

// printf("MENU PRINCIPAL\n");
// printf("--------------\n");
// printf("1 - Consulta saldo\n");
// printf("2 - Recarrega saldo\n");
// printf("3 - Ver recados\n");
// printf("4 - Ver ligacoes\n");
// printf("5 - Sair\n");
// printf("Entre com uma opcao =>");

int opcao = 0;
scanf("%i", &opcao);

switch(opcao)  {
   case 1: printf ("Seu saldo eh R$ 10.00\n"); break; 
   case 2: printf ("Escolha um valor de rearga\n"); break; 
   case 3: printf ("Voce tem 4 recados\n"); break; 
   case 4: printf ("Voce ligou 5 vezes\n"); break; 
   case 5: printf ("Ate logo\n"); break; 
   default: printf("Opcao invalida\n");
}










return 0;

}
