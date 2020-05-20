/* Exemplo01E1 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc exemplo0111 -o exemplo0111 -lm   
    Windows: gcc -o exemplo0111.exe exemplo0111 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0111    Windows:   exemplo0111  */ 

#include <stdio.h>

int main()
{
   double area = 0.0;
   double lado = 0.0;
   printf("exemplo0111 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   printf("Digite a medida do lado do quadrado: ");
   scanf("%lf", &lado);//ler a medida do lado
   if(lado > 0)//assegurar que a area sera um valor valido
   {
        area = lado*lado;
   	printf("A area do quadrado e: %lf ", area);// fornecer o area
   }
   else
	printf("Erro, medida invalida.\n");
   printf("aperte ENTER para finalizar o programa\n");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
        
