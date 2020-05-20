#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Arranjos
{
   int* array;
   int tamanho;
} arranjos;
int main()
{
   arranjos*  leitura(char c[]);
   arranjos* ordenado(arranjos* a);
   arranjos* y= ordenado(leitura("DADOS.TXT"));
   for(int a = 0; a < y->tamanho; a++)
   {
      printf(" %i -", y->array[a]);
   }
}
arranjos*  leitura(char c[])
{
   arranjos* resposta;
   resposta=(arranjos*)malloc(sizeof(arranjos));
   FILE* arquivo = fopen(c, "rt");
   char leitura[80];
   char vazio[1];
   char num[10];
   int x = 0;
   int z = 0;
   fgets(leitura, 80, arquivo);
   while(x < strlen(leitura)-1)
   {
      while(leitura[x] == ' ' && x < strlen(leitura)-1)
      {
         x++;
      }
      if(x < strlen(leitura)-1)
      {
         z++;
      }
      while(leitura[x] != ' ' && x < strlen(leitura)-1)
      {
         x++;
      }
   }
   resposta->tamanho = z;
   resposta->array=(int*)malloc(resposta->tamanho*sizeof(int));
   fclose (arquivo);
   FILE* arq = fopen(c, "rt");
   x = 0;
   int p = 0;
   int t =0;
   while (x < strlen(leitura) - 1)
   {
      while(leitura[x] == ' ' && leitura[x] !='\0')
      {
         num[p] = leitura[x];
         num[p+1] = '\0';
         x++;
         p++;
      }
      while(leitura[x] != ' ' && leitura[x] !='\0')
      {
         num[p] = leitura[x];
         num[p+1] = '\0';
         x++;
         p++;
      }
      x++;
      resposta->array[t] =atoi(num);
      p = 0;
      t++;
   }
   fclose (arq);
   return resposta;
}
arranjos* ordenado(arranjos* a)
{
   int aux3 = 0;
   for(int aux = 0; aux < a->tamanho; aux++)
   {
      for (int aux2 = 1+aux; aux2< a->tamanho; aux2++)
      {
         if(a->array[aux] < a->array[aux2])
         {
            aux3 = a->array[aux] ;
            a->array[aux] = a->array[aux2];
            a->array[aux2]= aux3;
         }
      }
   }
   return a;
}