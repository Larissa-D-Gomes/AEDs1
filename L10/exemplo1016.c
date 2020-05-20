#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct matriz
{
   int** matriz;
   int linhas;
   int colunas;
}matriz;
int main()
{
   matriz* leitura(char c[]);
   matriz* transposta(matriz* c);
   matriz* t = transposta(leitura("DADOS.TXT"));
   //matriz* t = leitura("DADOS.TXT");
   for(int a = 0; a < t->linhas; a++)
   {
      for(int a2 = 0; a2< t->colunas; a2++)
      {
         printf("%i\t", t->matriz[a][a2]);
      }
      printf("\n");
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
matriz* transposta(matriz* c)
{
   matriz* transposta;
   transposta = (matriz*) malloc(sizeof(matriz));
   transposta->linhas = c->colunas;
   transposta->colunas = c->linhas;
   transposta->matriz=(int**)malloc(transposta->linhas*sizeof(int*));
   for(int i = 0; i <transposta->linhas; i++)
   {
      transposta->matriz[i] = (int*)malloc(transposta->colunas*sizeof(int));
   }

   for (int a = 0; a < transposta->linhas; a++)
   {
      
      for (int a2 = 0; a2 < transposta->colunas; a2++)
      {   
            transposta->matriz[a][a2] = c->matriz[a2][a];
      }   
   }
   return transposta;
}