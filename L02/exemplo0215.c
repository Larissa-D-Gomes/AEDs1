/* exemplo0215 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0215    exemplo0215    
    Windows: gcc -o exemplo0215.exe exemplo0215 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0215   Windows:   exemplo0215  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0215 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int valor = 0;
   printf("Insira o valor ");
   scanf("%d", &valor);
   if( valor >= 33 && valor <= 45)
   {
      printf("\nO valor (%d) pertence aos dois intervalos fechados 25:45 e 33:99",valor);
   }
   else
   {
      if ( valor >= 33 && valor <= 99)
      {
         printf("\nO valor (%d) pertence apenas ao conjunto  fechado 33:99",valor);
      }
      if (valor >=25 && valor<= 45)
      {
         printf("\nO valor (%d) pertence apenas ao conjunto  fechado 25:45",valor);
      }
      if (valor < 25 || valor > 99)
      {
         printf("\nO valor (%d) nao pertence a nenhum conjunto",valor);
      }
   }
   printf("\nAperte enter para finalizar o programa");
   fflush ( stdin);
   getchar();
   return(0);
}