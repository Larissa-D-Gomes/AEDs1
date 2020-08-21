#include <stdio.h>
int main ()
{
   FILE* arquivo = fopen ("divisores.TXT", "wt");
   int* divisoresarray(int x, int y);
   int quantidadediv(int x);
   int n = 0;
   int t = 0;
   int* y = 0;
   int aux = 0;
   printf("Digite o numero que deseja imprimir seus divisores\n");
   scanf("%i", &n);
   t = quantidadediv(n);
   fprintf(arquivo,"%i\n", t);// imprimir o numero de divisores
   printf("O numero de divisores de %i e %i\n",n, t);// imprimir o numero de divisores
   int* cadeia= divisoresarray(n, t);
   printf("%s%i%s", "Os divisores de ", n, " sao\n");
   while (aux < t)
   {
      printf("%i - ", cadeia[aux]);
      fprintf(arquivo,"%i\n", cadeia[aux]);
      aux++;
   }
   fclose(arquivo);
}
   
int* divisoresarray(int x, int y)
{
   static int cadeia[100];
   int contador = 0;
   int div = 1;
   while (div <= x)
   {
      if( x % div == 0)
      {
         cadeia[contador] = div;
         contador++;
      }
      div++;
   }
   return &(cadeia[0]);
}

int quantidadediv(int x)
{
   int contador = 0;
   int div = 1;
   while (div <= x)
   {
      if( x % div == 0)
      {
         contador++; 
      }
      div++;
   }
   return contador;
}