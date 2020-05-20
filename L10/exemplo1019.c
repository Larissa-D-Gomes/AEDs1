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
   matriz* somamatriz(matriz* a, matriz* b, int k);
   int constante;
   printf("Digite o valor da constante para multiplicar a matriz\n");
   scanf("%i", &constante);
   matriz* resp = somamatriz(leitura("DADOS1.TXT"),leitura("DADOS2.TXT"), constante);
   if(resp != NULL)
   {
      for(int aux = 0; aux < resp->linhas; aux++)
      {
         for(int aux2 = 0; aux2 < resp->colunas; aux2++)
         {
            printf("%i\t", resp->matriz[aux][aux2]);
         }
         printf("\n");
      }
   }
   else
   {
      printf("Impossivel calcular a soma\n");
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
   fclose(arq);
   return l;
}
matriz* somamatriz(matriz* a, matriz* b, int k)
{
   matriz* resposta = NULL;
   if( a->linhas == b->linhas && a->colunas == b->colunas)
   {
      resposta=(matriz*)malloc(sizeof(matriz));
      
      resposta->linhas = a->linhas;
      resposta->colunas=a->colunas;
      resposta->matriz = (int**)malloc(a->linhas*sizeof(int*));
      for(int aux = 0; aux < a->colunas; aux++)
      {
         resposta->matriz[aux] = (int*)malloc(a->colunas*sizeof(int)); 
      }
      for(int aux2 = 0; aux2 < resposta->linhas; aux2++)
      {
         for(int aux3 = 0; aux3 < resposta->colunas; aux3++)
         {
            resposta->matriz[aux2][aux3] = a->matriz[aux2][aux3]+(k*b->matriz[aux2][aux3]);
         }
      }
   }
   return resposta;
}