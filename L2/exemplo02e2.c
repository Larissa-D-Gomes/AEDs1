/* exemplo02e2 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo02e2    exemplo02e2    
    Windows: gcc -o exemplo02e2.exe exemplo02e2 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo02e2   Windows:   exemplo02e2  */ 
#include <stdio.h>


int main()
{
   printf("exemplo02e2 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   char c1 = 'a';
   char c2 = 'a';
   char c3 = 'a';
   printf("Digite os caracteres ");
   scanf ("%c %c %c", &c1, &c2, &c3);
   if (c2 != c3)
   {
      printf ("\no caracter2 (%c) e diferente do caracter3 (%c)", c2, c3);
      if (c1>c2 && c3>c1 || c1>c3 && c2>c1)//ver se o valor esta entre os outros
      {
         printf ("\no caracter1 (%c) esta entre caracter2 (%c) e caracter3 (%c)", c1, c2, c3);
      }
      else//caso nao
      {
         printf("\no caracter1 (%c) nao esta entre caracter2 (%c) e caracter3 (%c)", c1, c2, c3);
      }
   }
   else
   {
    printf("\nO caracter2 (%c) e igual ao caracter3 (%c)", c2, c3);
   }
   printf("\nAperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}