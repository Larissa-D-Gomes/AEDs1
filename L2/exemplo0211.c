/* exemplo0211 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0211    exemplo0211    
    Windows: gcc -o exemplo0211.exe exemplo0211 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0211   Windows:   exemplo0211  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0211 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int valor = 0; 
   printf("Digite o valor ");
   scanf("%d", &valor);
   if (valor % 2 == 0 || valor == 0 )
   {
      printf("\nO valor inserido (%d) e par\n", valor);
   }
   else 
   {
      printf("\no valor inserido (%d) e impar\n", valor);
   }
   printf ("Aperte enter para finalizar o programa");
   fflush( stdin );
   getchar();  
   return (0);
}