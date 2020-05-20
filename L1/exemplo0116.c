/* Exemplo0116 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0116     exemplo0116.c    
    Windows: gcc -o exemplo0116.exe exemplo0116.c 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0116    Windows:   exemplo0116  */ 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float lado = 0.0;
float area = 0.0;
float raiz = 0.0;

int main()
{
   printf("Exemplo0116 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
	printf("Digite a medida do lado ");
	scanf("%f", &lado);//ler a medida do lado
   raiz = pow (3,0.5);// printf("%f", raiz); 
   area = (lado * raiz)/4;
   printf("\n A área do triangulo equilatero e: %f * %f /4 = %f\n", lado, raiz, area); // calcular e fornecer a area
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}

        