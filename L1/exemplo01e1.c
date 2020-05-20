/*    Para compilar em terminal (janela de comandos):    
    Linux      : gcc exemplo01e1.c -o exemplo01e1    
    Windows: gcc -o exemplo01e1.exe exemplo01e1 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo01e1    Windows:   exemplo01e1  */ 
#include <stdio.h>
#include <math.h>

int main()
{
   double area = 0.0;
   double lado = 0.0;
   printf("exemplo01e1 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   printf("Digite a medida da area ");
   scanf("%lf", &area);//ler a medida da area do quadrado
   if( area > 0)
   {
   	lado = pow(area,0.5);
        printf("O lado do quadrado e: %lf ", lado);// fornecer o lado
   }
   else 
	   printf("Erro, area invelida.\n");
   printf("aperte ENTER para finalizar o programa\n");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
        
