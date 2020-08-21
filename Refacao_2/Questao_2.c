#include <stdio.h>
#include <stdbool.h>
/* Questao_2 - v0.0.1 - 14 / 11 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o Questao_2    Questao_2    
    Windows: gcc -o Questao_2  Questao_2 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./Questao_2   Windows:   Questao_2  */ 

int main()
{
   printf("Questao_2- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   FILE* arq = fopen("DADOS.TXT", "rt");
   int rows = 0;
   int columns = 0;
   fscanf(arq, "%i", &rows);
   fscanf(arq, "%i", &columns);
   if(rows > 0 && columns > 0)
   {
      bool testarmatriz(int l, int c, int m[][c]); 
      int m[rows][columns];
      for(int aux1 = 0; aux1 < rows; aux1++)
      {
         for(int aux2 = 0; aux2< columns; aux2++)
         {
            fscanf(arq, "%i", &m[aux1][aux2]);
         }
      }
      bool r = testarmatriz(rows, columns, m);
      if(r)
      {
         printf("\ntrue\n");
      }
      else
         printf("\nfalse\n");
   }
   else
      printf("ERRO: PARAMETROS INVALIDOS\n");
   fclose(arq);
   printf("\nAperte enter para sair do programa\n");
   fflush( stdin);
   getchar();
   return (0);
}
bool testarmatriz(int l, int c, int m[][c])
{
   bool r = (l == c);
   int aux = 0;
   int aux2 = 0;
   while(r && aux < l)
   {
      while(r && aux2 < l)
      {
         r = (m[aux][aux2] == m[aux2][aux]);
         aux2++;
      }
      aux2 = 0;
      aux++;
   }

   return r;
}