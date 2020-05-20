#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Arranjos
{
   int* array;
   int tamanho;

} arranjos;
int main()
{
   void aranjarq(arranjos* y, char c[]);
   arranjos* resposta (arranjos x, arranjos y, int c);
   int constante = 0;
   arranjos a_1;
   arranjos a_2;
   aranjarq(&a_1, "DADOS1.TXT"); 
   aranjarq(&a_2, "DADOS2.TXT");
   printf ("Digite a constante que deseja multiplicar o arranjo\n");
   scanf("%i", &constante);
   arranjos* soma = resposta (a_1, a_2, constante);
   if (a_1.tamanho == a_2.tamanho)
   {
      printf("A soma do arranjo e:");
      for (int aux =0; aux < soma->tamanho; aux++)
      {
         printf("%i - ",soma->array[aux]);
      }
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
arranjos* resposta(arranjos x, arranjos y, int c)
{
   arranjos* s;
   s = (arranjos*) malloc(sizeof(arranjos));
   int aux = 0;
   if( x.tamanho == y.tamanho )
   {
      s->tamanho = y.tamanho;  
      s->array=(int*)malloc(s->tamanho*sizeof(int));
      for(aux=0; aux < y.tamanho; aux++ )
      {
         s->array[aux]= x.array[aux] + (c * y.array[aux]);
      }
   }
   else
   {
      printf("Erro: tamanho dos vetores e diferente\n");
   }
   return s;
}