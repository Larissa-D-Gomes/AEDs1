#include <stdio.h>
#include <string.h>
int main()
{
   char c[81];
   char nome[11];
   void digitos(char c[],char i[], int x);
   printf("Digite o nome do arquivo (com ate 10 caracteres)\n");
   scanf("%s", nome);
   printf("Digite uma cadeida com ate 80 caracteres para o programa salvar em um arquivo a quantidade de digitos\n");
   scanf("%s", c);
   digitos(c, nome, strlen(c));
   printf("O arquivo foi criado\n");

   
}
void digitos(char c[],char nome[], int x)
{
   FILE* arquivo = fopen (nome, "wt");
   void resultado10 (char c[]);
   int contador = 0;
   int a = 0;
   for (a = x; a >= 0; a--)
   {
      if(c[a] >= '0' && c[a]<= '9')
      {
         contador++;
      }
   }   
   fprintf(arquivo, "A quantidade de digitos na cadeia '%s' e: %i", c, contador);
   fprintf(arquivo, "\n");
   fclose(arquivo);
   resultado10 (nome);
}
void resultado10 (char c[])
{
   FILE* arq = fopen ("resultado10", "a");
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

