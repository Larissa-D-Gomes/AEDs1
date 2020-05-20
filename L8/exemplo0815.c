#include <stdio.h>
#include <stdlib.h>
int main ()
{  
   char c[80];
   int t = 0;
   int arranjo[10];
   int arranjomenor(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Menor = %i",arranjomenor(c, t, arranjo));
}
int arranjomenor(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int menor (int x[], int y);
   int nmenor =0;
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
            t++;// se for par positivo muda a posição e o tamanho do arranjo
            arranjo[t-1]=aux;
            printf("%i\n", arranjo[t-1]);
         }
      }
      else
      {
         printf("Error, o arquivo e maior que o esperado\n");
      }
      fclose (arquivo);
   }
   nmenor = menor (arranjo, t);
   return nmenor;  
}   
int menor (int x[], int y)
{
   int menor = x[y];
   while (y > 0)
   {
      if(menor > x[y-1])
      {
         menor = x[y-1];
      }
      y--;
   }
   return menor;
}