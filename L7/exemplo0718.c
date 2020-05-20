#include <stdio.h>
#include <string.h>
int main()
{
   void arquivofibonacci(char c[], int x);
   int quantidade = 0;
   char nome[10];
   printf("Digite o nome que deseja salvar o arquivo(com ate 10 caracteres)\n");
   scanf("%s", nome);
   printf("Digite o numero de vezes que deseja imprimir os termos impares de fibonacci\n");
   scanf("%i", &quantidade);
   arquivofibonacci(nome, quantidade);
   printf("O arquivo foi criado\n");
}
void arquivofibonacci(char c[], int x)
{
   FILE* arquivo = fopen (c, "wt");
   void resultado08();
   int resposta = 0;
   int a = 0;
   int b = 1;
   int soma = 0;
   fprintf(arquivo, "Os primeiro %i termos impares de fibonacci sao:  \n", x);
   while(x > 0)
   {
      soma = a + b;
      b = a;
      a = soma;
      if ( soma % 2 != 0)
      {
         fprintf(arquivo, " %i - ", soma);
         x--;
      }
   }   
    fprintf(arquivo, "\n");
   fclose (arquivo);
   resultado08(c);
}

void resultado08(char c[])
{
   FILE* arq = fopen ("resultado08", "a");
   FILE* arquivo = fopen (c, "rt");
   char leitura [1000];
   fgets(leitura ,1000 ,arquivo);
   while ( !(feof (arquivo)))
   {
      fputs(leitura, arq);
      fgets(leitura ,1000 ,arquivo);
   }
   fclose (arquivo);
   fclose (arq);
}
