/* Exemplo0117 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0117     exemplo0117.c    
    Windows: gcc -o exemplo0117.exe exemplo0117.c 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0117    Windows:   exemplo0117  */ 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float lado = 0.0;
float area = 0.0;

int main()
{
   printf("Exemplo0117 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
	printf("Digite a medida do lado ");
	scanf("%f", &lado);//ler a medida do lado
   area = pow (lado,3);
   printf("\n o volume do cubo e: %f * %f * %f = %f", lado, lado, lado, area); // calcular e fornecer o volume
   printf("\naperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}

        