/* Exemplo0119 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0119     exemplo0119.c    
    Windows: gcc -o exemplo0119.exe exemplo0119.c 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0119    Windows:   exemplo0119  */ 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float raio = 0.0;
float area = 0.0;


int main()
{
   printf("Exemplo0119 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   printf("\nDigite o valor do raio ");
   scanf ( "%f", &raio);
   area = 2 * M_PI *raio;
   printf("\na area da circuferencia e %f", area ); // calcular e fornecer a area
   printf("\naperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}