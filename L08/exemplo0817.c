#include <stdio.h>
#include<stdbool.h>
int main()
{
   int t = 0;
   int arranjo[10];
   int contador=0;
   bool ordem(int x[], int y);
   printf("Digite o tamanho do arranjo\n");
   scanf("%i", &t);
   for (contador=0; contador < t; contador++)
   {
      printf("Digite o valor [%i] do arranjo:\n", contador+1);
      scanf("%i", &arranjo[contador]);   
   }
   int resposta =ordem (arranjo, t);
   if (resposta == 1)
   {
      printf("%s","O arranjo nao esta ordenado\n");
   }
   else
   {
      printf("%s","O arranjo esta ordenado\n");
   }
}
bool ordem(int x[], int y)
{
   int contador = 0;
   bool resposta = 0;
   while (contador < y-1 && resposta != 1)
   {
      resposta = (x[contador] > x[contador+1]);
      contador++;
   }
   return resposta;
}
