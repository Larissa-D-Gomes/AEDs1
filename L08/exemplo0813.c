#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int limite1 = 0;
   int limite2 = 0;
   int quantidade = 0;
   int t=0;
   int num[10];
   int aleatorio (int x, int y);
   FILE* arquivo = fopen("DADOS.TXT", "wt");
   printf("Digite o limite inferior para o numero aleatorio \n");
   scanf("%i" , &limite1);
   do 
   {
      printf("Digite o limite superior para o numero aleatorio \n");
      scanf("%i", &limite2);
      if( limite2 < limite1)
      {
         printf("O limite superior e menor que o infeiror (%i), tente outro \n", limite1);  
      }
   }while ( limite2 < limite1);
   printf("Os limites para o numero aleatorio sao [%i,%i]\n", limite1, limite2);
   printf("Digite a quantidade de numeros a serem gerados aleatoriamente (limite = 10) \n");
   scanf("%i", &quantidade);
   if(quantidade <=10)
   {
      srand(time(NULL));
      fprintf(arquivo, "%i\n", quantidade);
      for (quantidade = quantidade; quantidade > 0; quantidade--)
      {
         t++;
         num[t-1] = aleatorio (limite1, limite2);  
      }
      for ( quantidade = 0;quantidade < t; quantidade++)
      {
         fprintf(arquivo, "%i\n", num[quantidade]);
      }
   }
   else
   {
      printf("Erro, o numero e maior que 10");
   }
   fclose(arquivo);
}
int aleatorio (int x, int y)
{
   int aleat = 0;
   aleat = x + (rand() % y);
   return aleat;
}
