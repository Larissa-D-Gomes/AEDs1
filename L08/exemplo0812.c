#include <stdio.h>
int main()
{
   void arranjo(int arranjo[], char n[], int t);
   char nome[50];
   int x = 0;
   int g[10];
   printf("Digite o nome do arquivo que deseja testar\n");
   scanf("%s", nome);
   arranjo(g, nome, x);
}
void arranjo(int arranjo[], char n[], int t)
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");
   
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if ( i <=0)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            if (aux >= 0 && (aux % 2  == 0)) 
            {
               t++;// se for par positivo muda a posição e o tamanho do arranjo
               arranjo[t-1]=aux;
            }
         }  
         printf("O tamanho do arquivo e %i e  os numeros pares positivos contidos nele sao:\n", i);
         for (comparador = 0; comparador < t; comparador++)
         {
            printf("%i - ", arranjo[comparador]);
         }
      }
      else
      {
         printf("Erro, o arquivo e maior que o esperado\n");
      }
   }

   fclose( arquivo );
}