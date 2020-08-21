/* Exemplo0118 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0118     exemplo0118.c    
    Windows: gcc -o exemplo0118.exe exemplo0118.c 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0118    Windows:   exemplo0118  */ 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float comprimento = 0.0;
float largura = 0.0;
float altura = 0.0;
float area = 0.0;

int main()
{
   printf("Exemplo0118 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
	printf("Digite a medida da largura ");
	scanf("%f", &largura);//ler a medida da largura
   printf("\nDigite o valor do comprimento ");
   scanf ( "%f", &comprimento);
   printf("\nDigite o valor da altura ");
   scanf ("%f", &altura);
   area = comprimento * altura * largura;
   printf("\no volume do paralelepipedo e: %f * %f * %f = %f", altura, comprimento, largura, area); // calcular e fornecer o volume
   printf("\naperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}

        