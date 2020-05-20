/* Exemplo0115 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0115     exemplo0115.c    
    Windows: gcc -o exemplo0115.exe exemplo0115.c 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0115    Windows:   exemplo0115  */ 
#include <stdlib.h>
#include <stdio.h>

float lado = 0.0;
float h = 0.0;

int main()
{
   printf("Exemplo0115 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
	printf("Digite a medida do lado ");
	scanf("%f", &lado);//ler a medida do lado
   printf("digite a medida da altura ");
   scanf("%f", &h);
   printf("A área do triangulo e: (%f * %f)/2  = %f\n", lado, h, (lado*h)/2 ); // calcular e fornecer a area
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}

        