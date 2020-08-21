/* exemplo0219 - v0.0.1 - 16 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0219    exemplo0219    
    Windows: gcc -o exemplo0219.exe exemplo0219 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./exemplo0219   Windows:   exemplo0219  */ 
#include <stdio.h>


int main()
{
   printf("exemplo0219 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   
   
   float valor1 = 0.0;
   float valor2 = 0.0;
   float valor3 = 0.0;
   
   
   
   printf("Insira os tres valores ");
   scanf("%f %f %f", &valor1, &valor2, &valor3);
  
   
   if(valor2 != valor3) 
   {
      if (valor1 > valor2 && valor1 < valor3)//se o valor 1 esta entre o 2 e o 3
      {
         printf("O valor 1 esta entre o valor 2 e valor 3 %f> %f <%f", valor2,valor1,valor3);
      }
      else
      {
         if(valor1 > valor3 && valor1 < valor2)//se o valor 1 esta entre o 3 e o 2
         {
            printf("O valor 1 esta entre o valor 3 e valor 2 %f> %f <%f", valor3,valor1,valor2);
         }
         else// se os valores 2 e 3 forem diferentes mas o 1 nao esta entre eles
         {
            printf("Os valores 2 e 3 sao diferente mas o valor 1 nao esta entre eles");
         }
      }
   }
   else//se os valores 2 e 3 forem iguais
   {
      printf("Os valores 2 e 3 sao iguais");
   }
   
   printf("\nAperte enter para finalizar o programa");
   fflush (stdin);
   getchar();
   return(0);
}