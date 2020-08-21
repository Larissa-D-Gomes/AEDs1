#include <stdio.h>
#include <stdbool.h>
int main()
{
   FILE* arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int arranjo [t];
   int comparador = 0;
   int procurado = 0;
   int resposta =0;
   int quantidade(int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   for (comparador = 0; comparador < t; comparador++)
   {
      fscanf(arquivo, "%i", &arranjo[comparador]);
      //printf("%i - ", arranjo[comparador]);
   }
   printf("Digite o valor que deseja procurar\n");
   scanf("%i", &procurado);
   resposta = quantidade (arranjo, procurado, t);
   if (resposta == 0)
   {
      printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
   }
   else
   {
      printf("%s%i%s%i","O arranjo contem o valor [",procurado,"] procurado na posicao ", resposta,"\n");
   }
   fclose(arquivo);
}
int quantidade (int x[], int procurado, int i)
{
   bool resposta = 0;
   int posicao = 0;
   while (posicao < i && resposta != 1)
   {
      resposta = (x[posicao] == procurado);
      posicao++;
   }
   return posicao;
}