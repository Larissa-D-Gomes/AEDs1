#include <stdio.h>
int main()
{
   int t = 0;
   int comparador = 0;
   do
   {
      printf("Digite o tamanho do arranjo, sendo um valor > 0\n");
      scanf("%i", &t);
      if (t <= 0)
      {
         printf("O valor (%i) escolhido e <= 0 e nao pode ser considerado com tamanho de um arranjo, tente outro\n", t);
      }
   } while (t <= 0);
   int arranjo[t];
   while (comparador < t)
   {
      printf("Digite o elemento [%i] do vetor, sendo par e > 0\n", comparador+1);
      scanf("%i", &arranjo[comparador]);
      if (arranjo[comparador] % 2 == 0 && arranjo[comparador] > 0 )
      {
         comparador++;
      } 
      else 
      {
         printf("O numero escolhido nao e par ou nao e positivo, tente outro\n");
      }
   }
   printf("Os elementos do arranjo sao :\n");
   for (comparador = 0; comparador < t; comparador++)
   {
      printf("%i - ", arranjo[comparador]);
   }
}