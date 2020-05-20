#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Arranjos
{
   int* array;
   int tamanho;

} arranjos;
int main()
{
   void aranjarq(arranjos* y, char c[]);
   int resposta (arranjos x, arranjos y);
   arranjos a_1;
   arranjos a_2;
   aranjarq(&a_1, "DADOS1.TXT"); 
   aranjarq(&a_2, "DADOS2.TXT"); 
   int r = resposta (a_1, a_2);
   if ( r == 0)
   {
      printf("Os tamanhos dos arquivos sao diferentes\n");
   }
   else
   {
      if (r == 1)
      {
         printf("Os arquivos sao iguais\n");
      }
      else
      {
          printf("Os arquivos sao diferentes\n");
      }
   }
}
void aranjarq(arranjos* y, char c[])
{
   FILE* arquivo = fopen (c, "rt");
   fscanf(arquivo, "%i", &y->tamanho);
   y->array=(int*)malloc(y->tamanho*sizeof(int));
   for(int aux = 0; aux < y->tamanho; aux++)
   {
      fscanf(arquivo,"%i" ,&y->array[aux]);
   }
   fclose (arquivo);
}
int resposta (arranjos x, arranjos y)
{
   int resp = 1;
   int aux = 0;
   if( x.tamanho == y.tamanho )
   {
      while( aux < y.tamanho && resp == 1)
      {
         if( x.array[aux] != y.array[aux])
         {
            resp = -1;
         }
         aux++;
      }
   }
   else
   {
      resp = 0;
   }
   return resp;
}