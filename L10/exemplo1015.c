#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct Arranjos
{
   int* array;
   int tamanho;

} arranjos;
int main()
{
   void aranjarq(arranjos* y, char c[]);
   bool organizado(arranjos x);
   arranjos arranjo;
   aranjarq ( &arranjo,"DADOS1.TXT");
   bool resp = organizado(arranjo);  
   if (resp == 1)
   {
      printf("O arquivo esta organizado\n");
   }
   else
   {
      printf("O arquivo nao esta organizado\n");
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
bool organizado(arranjos x)
{
   bool resposta = 1;
   int aux = 1;
   while ( (aux < x.tamanho ) && ( resposta == 1 ))
   {
      resposta = (x.array[aux] >= x.array[aux-1]);
      aux++;
   }
   return resposta;
}