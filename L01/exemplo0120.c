/* Exemplo0120 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0120     exemplo0120.c    
    Windows: gcc -o exemplo0120.exe exemplo0120.c 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0120    Windows:   exemplo0120  */ 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float raio = 0.0;
float r3 = 0.0;
float volume = 0.0;


int main()
{
   printf("Exemplo0120 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   printf("\nDigite o valor do raio ");
   scanf ( "%f", &raio);
   r3 = pow (raio,3);
   volume = (4 * M_PI *r3)/3;
   printf("\no volume da esfera e %f", volume ); // calcular e fornecer o volume
   printf("\naperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}