#include <stdio.h>

void metodo11()
{
   int quantidade = 0;
   int comparador = 0;
   int i = 0;
   char c[21] ;
   char h;
   int totalANE (char x[]);
   int total = 0;
   printf("Digite a quantidade de cadeias de caracteres que deseja analisar\n");
   scanf ("%i", &quantidade);
   getchar();
   for (comparador = 0; comparador < quantidade; comparador++)
   { 
      i = 0;
      printf("Digite uma cadeia com ate 20 caracteres que deseja analisar\n");
      do
      {
         h = getchar();
         c[i] = h;
         i++;
      }while(h != '\n');
   
      c[i-1]='\0';
      total =totalANE (c);
   }
   printf ("Os caracteres alfanumericos e espacos sao %i\n", total); 
}
int totalANE (char x[])
{
   static int contador = 0;
   int i = 0 ;
   while (x[i] !='\0')
   {
      if ((x[i]>='A' && x[i]<='Z') ||(x[i]>='a' && x[i]<='z')||(x[i]>='0' && x[i]<='9')||(x[i]>=' '))
      {
         contador++;
      }
      i++;
   }


   return contador;
}