/* exemplo0213 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0213    exemplo0213    
    Windows: gcc -o exemplo0213.exe exemplo0213 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0213   Windows:   exemplo0213  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0213 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int valor = 0;
   printf("Digite o valor ");
   scanf("%d", &valor);
   if (valor > 20 && valor < 60)
   {
      printf ("O valor (%d) esta no intervalo aberto 20:60\n", valor);
   }
   else 
   {
      printf ("O valor (%d)  nao esta no intervalo aberto 20:60\n", valor);  
   }
   printf ("Aperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}