/* exemplo0217 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0217    exemplo0217    
    Windows: gcc -o exemplo0217.exe exemplo0217 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0217   Windows:   exemplo0217  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0217 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   
   
   int valor1 = 0;
   
   int valor2 = 0;
   
   printf("Insira os dois valores ");
   scanf("%d %d", &valor1, &valor2);
  
   
   if(valor1 % 2 != 0 && valor1>0 && valor2 % 2 == 0 && valor2<0) 
    {
      printf("\nO primeiro valor (%d) e impar e o segundo valor (%d) e par", valor1, valor2);
    }
   else
    {
      printf("\nAlgum dos valores, ou os 2 nao correspondem a condicao proposta");
    }
   printf("\nAperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}

