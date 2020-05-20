/* exemplo0218 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0218    exemplo0218    
    Windows: gcc -o exemplo0218.exe exemplo0218 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0218   Windows:   exemplo0218  */ 
#include <stdio.h>



int main()
{
   printf("exemplo0218 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   
   
   float valor1 = 0.0;
   
   float valor2 = 0.0;
   
   printf("Insira os dois valores ");
   scanf("%f %f", &valor1, &valor2);
  
   
   if(valor1 < valor2) 
   {
      printf("\n(%f)<(%f) ", valor1, valor2);
   }
   if(valor1 > valor2) 
   {
      printf("\n(%f)>(%f) ", valor1, valor2);
      
   }
   if(valor1 == valor2) 
   {
      printf("\n(%f)=(%f) ", valor1, valor2);
   }


   printf("\nAperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}