#include <stdio.h>
#include <math.h>

/* exemplo0614 - v0.0.1 - 02 / 09 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0614    exemplo0614    
    Windows: gcc -o exemplo0614.exe  exemplo0614 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0614   Windows:   exemplo0614  */ 
int main(){
   int x = 0;
   void metodo0();
   void metodo1();
   void metodo2();
   void metodo3();
   void metodo4();
   printf("exemplo0614- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler um valor inteiro e imprimir os numeros impares a partir de 5\n");
      printf("2-ler um valor inteiro e imprimir os numeros impares em ordem decrescente ate 5\n");
      printf("3-ler um valor inteiro e imprimir multiplos de 5\n");
      printf("4-ler um valor inteiro e imprimir as potencias de 5 no numerador em ordem decrescente\n");
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
         case 3:
            metodo3();
            break;
         case 4:
            metodo4();
            break;
         default:
            printf("O valor selecionado nao e valido tente outro\n");
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
   int impares(int y);
   printf ("Digite o numero de vezes que deseja imprimir os números impares maiores que 5 \n");
   scanf("%i", &valor);
   printf("Os valores impares sao:\n");
   impares(valor);
   printf("\n");
}

int impares(int y)
{
   static int impar = 3;
   static int a = 0;
   if (a < y)
   {  
      a++;
      impar = impar + 2;
      printf("%i-", impar);
      impares(y);
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
void metodo3()
{
   int quantidade = 0;
   int multiplos5(int x, int y, int z);
   printf("Digite a quantidade de vezes que deseja mostrar os multiplos de 5\n");
   scanf("%i", &quantidade);
   printf("Os multiplos de 5 sao\n");
   multiplos5(quantidade, 1, 0);
   printf("\n");
}
int multiplos5(int x, int y, int z)
{
   if ( x > 0 )
   {
      printf("%i-", y);
      x--;
      z = z + 1;
      y = (x-(x-1)+z)* 5;
      multiplos5(x, y, z);
      
   }
   return x ;
}
void metodo4()
{
   int quantidade = 0;
   int potencianum(int x);
   printf("Digite a quantidade de vezes que deseja mostrar as potencias de 5\n");
   scanf("%i", &quantidade);
   printf("As potencias de 5 no numerador em ordem decrescente sao:\n");
   potencianum(quantidade);
   printf("\n");

}
int potencianum(int x)
{
   float a = 0;
   if(x > 0)
   {
      a = pow(5,x-1);
      printf("1/%g - ", a );
      x--;
      potencianum(x);
   }
  return a;
}