#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
typedef struct matriz
{
   int** matriz;
   int linhas;
   int colunas;
}matriz;
int main()
{
   matriz* leitura(char c[]);
   bool matrizzero(matriz* a);
   bool resp = matrizzero(leitura("DADOS.TXT"));
   if( resp == 1 )
   {
      printf("A matriz e nula\n"); 
   } 
   else
   {
      printf("A matriz nao e nula\n"); 
   }
}
matriz* leitura(char c[])
{
   FILE* arquivo = fopen(c, "rt");
   matriz* l;
   l = (matriz*) malloc(sizeof(matriz));
   l->linhas = 0;
   l->colunas = 0;
   int x = 0;
   int y = 0;
   char s[81];
   char auxs[81];
   int aux1 =0;
   int aux2 =0;
   fgets(s, 80, arquivo);
   while(!feof(arquivo))
   {
      l->linhas++;
      fgets(s, 80, arquivo);
   } 
   fclose(arquivo);
   FILE* arq = fopen(c, "rt");
   fgets(s, 80, arq);
   y = strlen(s) - 1;
   while(x<y)
   {
      while(x<y && s[x] != ' ')
      {
         x++;
      }
      if(x<y)
      {
         l->colunas=l->colunas+1;
      }
      while(x<y && s[x] == ' ')
      {
         x++;
      }
   }
   l->colunas = l->colunas+1;
   l->matriz=(int**)malloc(l->linhas*sizeof(int*));
   for(int i = 0; i <l->linhas; i++)
   {
      l->matriz[i] = (int*)malloc(l->colunas*sizeof(int));
   }
   int cont = 0;
   int cont2 = 0;
   while (cont2 < l->linhas)
   {
      while ( cont < l->colunas)
      {    
         while(s[aux1] != ' ' && s[aux1] != '\0' )
         {
            auxs[aux2]= s[aux1];
            auxs[aux2+1]='\0';
            aux2++;
            aux1++;
         }
         l->matriz[cont2][cont]=atoi(auxs);
         
         cont++;
         aux1++;
         aux2 = 0;
      }
      cont = 0;
      cont2++;
      aux1 = 0;
      fgets(s, 80, arq);
   }
         for(int aux1 = 0; aux1 < x; aux1++)
   {
      for(int aux2 = 0; aux2< y; aux2++)
      {
         printf("%i\t", l->matriz[aux1][aux2]);
      }
      printf("\n");
   }
   fclose(arq);
   return l;
}
bool matrizzero(matriz* a)
{
   bool resposta = 1;
   int aux1 = 0;
   int aux2 = 0;
   while( aux1 < a->linhas && resposta == 1)
   {
      while( aux2 < a->linhas && resposta == 1)
      {
         resposta =( a->matriz[aux1][aux2] == 0);
         aux2++;
         printf("%i - ", resposta);
      }
      aux1++;
      aux2 = 0;
   }
   return resposta;   
}