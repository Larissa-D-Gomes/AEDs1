/* exemplo0220 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0220    exemplo0220    
    Windows: gcc -o exemplo0220.exe exemplo0220 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0220   Windows:   exemplo0220  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0220 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   
   
   float valor1 = 0.0;
   float valor2 = 0.0;
   float valor3 = 0.0;
   
   
   
   printf("Insira os tres valores ");
   scanf("%f %f %f", &valor1, &valor2, &valor3);
  
   
   if(valor2 != valor3 && valor2!= valor1 && valor1 != valor3) 
   {
      printf("Os valores sao difenrentes entre si %f != %f != %f", valor1, valor2, valor3);
      if (valor1 > valor2 && valor1 < valor3 || valor1 > valor3 && valor1 < valor2)//se o valor 1 esta entre o 2 e o 3 ou 3 e2
      {
         printf("\nO valor1 (%f) esta entre o valor2 (%f) e valor3 (%f)", valor1, valor2, valor3);
      }
      else 
      {
         printf("\nO valor1 (%f) nao esta entre os valores2 (%f) e valor3 (%f)", valor1, valor2, valor3);
      }
   }
   else
   {
      printf("Dois ou mais valores nao sao diferentes entre si valor1(%f), valor2(%f), valor3(%f)", valor1, valor2, valor3);
   }

 
        
   printf("\nAperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}