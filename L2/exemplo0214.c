/* exemplo0214 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0214    exemplo0214    
    Windows: gcc -o exemplo0214.exe exemplo0214 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0214   Windows:   exemplo0214  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0214 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int valor = 0;
   printf("Digite o valor ");
   scanf("%d", &valor);
   if (valor >= 20 && valor <= 60)
   {
      printf ("O valor (%d) esta no intervalo fechado 20:60\n", valor);
   }
   else 
   {
      printf ("O valor (%d)  nao esta no intervalo fechado 20:60\n", valor);  
   }
   printf ("Aperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}