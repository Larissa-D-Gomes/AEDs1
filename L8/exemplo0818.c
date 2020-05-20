#include <stdio.h>
#include <stdbool.h>
int main()
{
   FILE* arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int arranjo [10];
   int comparador = 0;
   int procurado = 0;
   bool procurar (int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   if( t <= 10)
   {
      for (comparador = 0; comparador < t; comparador++)
      {
         fscanf(arquivo, "%i", &arranjo[comparador]);
      //printf("%i - ", arranjo[comparador]);
      }
      printf("Digite o valor que deseja procurar\n");
      scanf("%i", &procurado);
      int resposta = procurar (arranjo, procurado, t);
      if (resposta == 0)
      {
         printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
      }
      else
      {
         printf("%s%i%s","O arranjo contem o valor [",procurado,"] procurado\n");
      }
   }
   else 
   {
      printf("Erro, o arquivo e maior que o esperado");
   }
   
   fclose(arquivo);
}
bool procurar (int x[], int procurado, int i)
{
   bool resposta = 0;

   while (i-1 > -1 && resposta != 1)
   {
      resposta = (x[i-1] == procurado);
      i--;
   }
   return resposta;
}