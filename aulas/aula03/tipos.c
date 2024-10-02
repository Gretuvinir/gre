#include <stdio.h>
#include <limits.h>
#include <float.h>

int main () {

//char 'a', 'v', ' '
//int  -5 0, 5
//float -5.5f, 0, 5.5f
//double -5.5, 0.0, 5.5
//void sem valor

printf ("o tamanho do char na memoria eh %lu byte(s)\n.", sizeof(char));
printf ("o tamanho do int na memoria eh %lu byte(s)\n", sizeof(int));
printf ("o tamanho do float na memoria eh %lu byte(s)\n", sizeof(float));
printf ("o tamanho do double na memoria eh %lu byte(s)\n", sizeof(double));

printf("\n");

printf(" a faixa de valores do char vai de %i ate %i\n ", CHAR_MIN, CHAR_MAX); 
printf(" a faixa de valores do int vai de %i ate %i\n ", INT_MIN, INT_MAX);
printf(" a faixa de valores do float vai de %E ate %E\n ", FLT_MIN, FLT_MAX);
printf(" a faixa de valores do double vai de %E ate %E\n ", DBL_MIN, DBL_MAX); 

printf("\n");
printf("o tamanho do short int na memoria eh %lu byte(s)\n", sizeof(short int));
printf("o tamanho do long int na memoria eh %lu byte(s)\n", sizeof(long int));

printf("\n");
printf("a faixa de valores do short int vai de %i ate %i\n", SHRT_MIN, SHRT_MAX);
printf("a faixa de valores do long int vai de %li ate %li\n", LONG_MIN, LONG_MAX);
printf("a faixa de valores do long double  vai de %LE ate %LE\n", LDBL_MIN, LDBL_MAX);
  
  printf("\n");
  printf("a faixa de valores do unsigned char vai de %i ate %i\n", 0, UCHAR_MAX);
  printf("a faixa de valores do unsigned short int vai de %i ate %i\n", 0, USHRT_MAX);
  printf("a faixa de valores do unsigned int vai de %i ate %u\n", 0, UINT_MAX);
  printf("a faixa de valores do unsigned long int vai de %i ate %lu\n", 0, ULONG_MAX);
  
  

  

  
  return 0;
}