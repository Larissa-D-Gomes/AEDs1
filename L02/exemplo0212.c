/* exemplo0212 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0212    exemplo0212    
    Windows: gcc -o exemplo0212.exe exemplo0212 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0212   Windows:   exemplo0212  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0212 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int valor = 0;
   printf ("Digite o valor \n");
   scanf ("%d", &valor);
   if ( valor % 2 == 0 && valor > 100)
   {
      printf ("O valor inserido (%d) e par e maior que 100\n", valor);
   }
   else 
   {
      if (valor % 2 != 0 && valor < - 100)
      {
         printf ("O valor inserido (%d) e impar e menor que -100\n", valor);
      }
      else
      {
         printf ("O valor inserido (%d) nao se encaixa nas condicoes propostas\n", valor);
      }
   }
   printf("Aperte enter para encerrar o programa");
   fflush( stdin );
   getchar ();
   return (0);
}        
             
