/* Exemplo0114 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0114     exemplo0114.c    
    Windows: gcc -o exemplo0114.exe exemplo0114.c 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0114    Windows:   exemplo0114  */ 
#include <stdlib.h>
#include <stdio.h>

int lado1 = 0;
int lado2 = 0;

int main()
{
   printf("Exemplo0114 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
	printf("Digite a medida do lado1 ");
	scanf("%d", &lado1);//ler a medida do lado
   printf("digite a medida do lado2 ");
   scanf("%d", &lado2);
   printf("A área do retangulo e: %d * %d = %d e o perimetro e %d*2 + %d*2 = %d \n", lado1, lado2, lado1*lado2, lado1, lado2, (lado1*2)+(lado2*2));// calcular e fornecer a area e o perimetro
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}

        