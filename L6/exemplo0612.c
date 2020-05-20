#include <stdio.h>

/* exemplo0612 - v0.0.1 - 02 / 09 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0612    exemplo0612    
    Windows: gcc -o exemplo0612.exe  exemplo0612 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0612   Windows:   exemplo0612  */ 
int main(){
   int x = 0;
   void metodo0();
   void metodo1();
   void metodo2();
   printf("exemplo0612- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler um valor inteiro e imprimir os numeros impares a partir de 5\n");
      printf("2-ler um valor inteiro e imprimir os numeros impares em ordem decrescente ate 5\n");
      scanf("%i",&x);
      switch(x)
      {
         case 0:
            metodo0();
            break;
         case 1:
            metodo1();
            break;
         case 2:
            metodo2();
            break;
         default:
            printf("O valor selecionado nao e valodo tente outro\n");
            x=1;
      }
   }while(x!=0);
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
void metodo0()
{
}
   
void metodo1(){
   int valor = 0;
   int impares(int y, int x);
   printf ("Digite o numero de vezes que deseja imprimir os números impares maiores que 5 \n");
   scanf("%i", &valor);
   printf("Os valores impares sao:\n");
   impares(valor, 3);
   printf("\n");
}

int impares(int y, int x)
{
   int impar = x;
   if (0 < y)
   {  
      impar = impar + 2;
      printf("%i-", impar);
      impares(y-1, impar);
   }
   return impar;
}

void metodo2()
{
   int imparesdecres(int x);
   int valor = 0;
   printf("Insira a quantidade de numeros que deseja imprimir os impares em ordem decrescente ate 5\n");
   scanf("%i", &valor);
   printf("Os numeros impares em ordem decrescente ate 5 sao:\n");
   imparesdecres(valor);
   printf("\n");
}

int imparesdecres(int x)
{
   static int a = 0;
   static int impar = 0;
   impar = 2 * x + 3;
   if(impar > 3)
   {
   printf("%i-", impar);
   x--;
   imparesdecres(x);
   }
   return impar;
}