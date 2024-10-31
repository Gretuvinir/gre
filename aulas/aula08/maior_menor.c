#include <stdio.h>

int main() {

int numeros [10];
int maior = -999;
int menor = 999;

for(int i=0; i<10; i++) {
    printf("Entre com %io. numero: ", i+1);
    scanf("%i", &numeros[i]);

if (numeros[i] > maior) {
    maior = numeros[i];
}

if (numeros[i < menor]) {
    menor = numeros[i];

}
}

printf("Os numeros lidos foram:\n");
for(int i=0; i<10; i++) {
    printf("%i", numeros[i]);
}
printf("sendo %i o maior numero\n", maior);
printf("e %i o menor numero\n", menor);





    return 0;
}
