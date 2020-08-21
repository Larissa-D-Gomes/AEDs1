/* exemplo02e1 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo02e1    exemplo02e1    
    Windows: gcc -o exemplo02e1.exe exemplo02e1 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo02e1   Windows:   exemplo02e1  */ 
#include <stdio.h>


int main()
{
   printf("exemplo02e1 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   char c1 = 'a';
   char c2 = 'a';
   char c3 = 'a';
   printf("Digite os caracteres ");
   scanf ("%c %c %c", &c1, &c2, &c3);
   if (c1>c2 && c3>c1 || c1>c3 && c2>c1)//ver se o valor esta entre os outros
   {
    printf ("\no caracter1 (%c) esta entre caracter2 (%c) e caracter3 (%c)", c1, c2, c3);
    }
    else//caso nao
    {
    if (c1==c2 || c1==c3)//ver se o valor 1 e igual
    {
    printf("\nO caracter1 (%c) e igual a um ou os dois outros caracter2 (%c) caracter3 (%c)", c1, c2, c3);
    }
    else//caso nao 
    {
    printf("\nO caracter1 (%c) nao e igual nem esta entre o caracter2 (%c) e caracter3 (%c)", c1,c2,c3);
    }
    }
    printf("\nAperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}


    
  