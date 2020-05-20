#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct procurado
{
   int proc;
   int t;
   int* vetor;
};
void separador(char c[], struct procurado* x)
{
   FILE* arquivo = fopen (c, "rt");
   fscanf( arquivo, "%i", &x->t);
   x->vetor= (int*)malloc(x->t*sizeof(int));
   for(int aux = 0; aux < x->t; aux ++)
   {
      fscanf(arquivo , "%i", &x->vetor[aux]);
   } 

   fclose(arquivo);
   
}
bool procurador(struct procurado x)
{
   bool resposta = 0;
   int aux = 0;
   while(( aux < x.t) && ( resposta != 1) )
   {
      resposta = (x.vetor[aux] == x.proc);
      aux ++;
   }
   return resposta; 
}
void separador(char c[], struct procurado* x);
int main()
{
   struct procurado p;
   separador("DADOS.TXT", &p);
   printf("Digite o valor que deseja procurar\n");
   scanf("%i", &p.proc);
   bool r = procurador(p);  
   if ( r == 1)
   {
      printf("O valor [%i], esta no arquivo \n", p.proc);
   }
   else
   {
      printf("O valor [%i], nao esta no arquivo \n", p.proc);
   }
}

