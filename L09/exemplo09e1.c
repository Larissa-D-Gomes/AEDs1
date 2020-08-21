#include <stdio.h>
#include <stdlib.h>

int** retornmatriz(int x)
{
   int aux1 = 0;
   int aux2 = 0;
   int num =x *x;
   int** matriz = NULL;
   matriz = (int**)malloc(x*sizeof(int*));
   for(int i = 0; i <x; i++)
   {
       matriz[i] = (int*)malloc(x*sizeof(int));
   }
   for(aux1 = 0; aux1 < x; aux1++)
   {
      for(aux2 = 0; aux2 < x; aux2++)
      {
         matriz[aux1][aux2] = num;
         num--;
      }
   }
   return matriz;
}
void arquivoe1(int LeC, int** m)
{
   FILE* arquivo = fopen("matrizq1.txt", "wt");
   for(int aux1 = 0; aux1 < LeC; aux1++)
   {
      for(int aux2 = 0; aux2 < LeC; aux2++)
      {
       
         fprintf(arquivo,"%i\t", m [aux1][aux2]);
      
      }
      fprintf(arquivo,"\n");
   }

   fclose(arquivo);
}
int main()
{
   int LeC = 0;
   void arquivoe2(int LeC, int** m);
   int** retornmatriz(int x);
   do
   {
      printf("Digite o numero de linhas e colunas da matriz\n");
      scanf("%i", &LeC);
      if(LeC <= 0)
      {
         printf("O numero de linhas e colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(LeC <= 0); 
   int aux1 = 0;
   int aux2 = 0;
   int** matriz = retornmatriz(LeC);
      for(aux1 = 0; aux1 < LeC; aux1++)
   {
      for(aux2 = 0; aux2 < LeC; aux2++)
      {
       
         printf("%i\t", matriz [aux1][aux2]);
      
      }
      printf("\n");
   }
   arquivoe2( LeC, matriz);
}  
