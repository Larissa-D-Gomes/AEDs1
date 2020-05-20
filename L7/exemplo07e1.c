#include <stdio.h>
int main()
{
   void divisores(int x, char i[]);
   int n = 0;
   char c[10];
   printf("Digite o numero que deseja imprimir seus divisores\n");
   scanf("%i", &n);
   printf("Digite o nome que deseja dar para o arquivo\n");
   scanf("%s", c);
   divisores(n, c);
}
void divisores(int x, char i[])
{
   FILE* arquivo = fopen (i, "wt");
   int divisor = 1;
   fprintf(arquivo, "Os divisores de %i sao:\n", x); 
   for (divisor = 1; divisor <= x; divisor++)
      {
      if (x % divisor == 0)
      {
         fprintf(arquivo, "%i - ", divisor);
      }
      }
   fclose(arquivo);
}