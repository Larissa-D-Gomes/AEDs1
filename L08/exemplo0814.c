#include <stdio.h>
#include <stdlib.h>
int main ()
{  
   char c[80];
   int t = 0;
   int arranjo[10];
   int arranjomaior(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Maior = %i",arranjomaior(c, t, arranjo));
}
int arranjomaior(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int maior (int x[], int y);
   int nmaior =0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <=10)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            arranjo[t]=aux;
            printf("%i\n", arranjo[t]);
            t++;// se for par positivo muda a posição e o tamanho do arranjo
         }
         t= t-1;
         printf("%i\n", arranjo[t]);
         nmaior = maior (arranjo, t);
      }
      else
      {
         printf("Erro, o arquivo e maior que o esperado\n");
      }
   
      fclose (arquivo);
   }
   return nmaior;  
}   
int maior (int x[], int y)
{
   int maior = x[y];
   while (y > 0)
   {
      if(maior < x[y-1])
      {
         maior = x[y-1];
      }
      y--;
   }
   return maior;
}