/* Exemplo01E1 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo01e2    exemplo01e2    
    Windows: gcc -o exemplo01e2.exe exemplo01e2 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo01e2    Windows:   exemplo01e2  */ 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float volume = 0.0;
float raio =0.0;
float raiz = 0.0;
float superficie = 0.0;

int main()
{
   printf("exemplo01e2 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
	printf("Digite a medida do volume ");
	scanf("%f", &volume);//ler a medida do volume
   raiz = (volume*3)/( M_PI*4);// calcular o raio elevado a 3
   raio = pow (raiz, 0.33333);
   superficie = 4 * raio * raio * M_PI;
   printf("O raio da esfera e: %f \nA superficie e %f\n", raio, superficie);// fornecer o raio
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
        