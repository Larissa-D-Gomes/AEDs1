#include <stdio.h>
#include <string.h>
#include <math.h>

/* exemplo0617 - v0.0.1 - 02 / 09 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0617    exemplo0617    
    Windows: gcc -o exemplo0617.exe  exemplo0617 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0617   Windows:   exemplo0617  */ 
int main(){
   int x = 0;
   void metodo0();
   void metodo1();
   void metodo2();
   void metodo3();
   void metodo4();
   void metodo5();
   void metodo6();
   void metodo7();
   printf("exemplo0617- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler um valor inteiro e imprimir os numeros impares a partir de 5\n");
      printf("2-ler um valor inteiro e imprimir os numeros impares em ordem decrescente ate 5\n");
      printf("3-ler um valor inteiro e imprimir multiplos de 5\n");
      printf("4-ler um valor inteiro e imprimir as potencias de 5 no numerador em ordem decrescente\n");
      printf("5-ler uma cadeia e imprimir os simbolos separados por uma linha\n");
      printf("6-Ler uma quantidade de vezes para imprimir a soma de impares a partir de 3\n");
      printf("7-Ler uma quantidade de vezes para imprimir a soma dos inversos de impares a partir de 3\n");
   
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
         case 5:
            metodo5();
            break;
         case 6:
            metodo6();
            break;
         case 7:
            metodo7();
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
   int impares(int y);
   printf ("Digite o numero de vezes que deseja imprimir os números impares maiores que 5 \n");
   scanf("%i", &valor);
   printf("Os valores impares sao:\n");
   impares(valor);
   printf("\n");
}

int impares(int y)
{
   int impar = 3;
   if (y>0)
   {  
      impar = impares(y-1)+2;
      printf("%i-", impar);
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
   int a = 0;
   int impar = 0;
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
void metodo5()
{
   void separadors(char x[],int y, int z);
   char c[21];
   printf("Digite uma cadeia com ate 20 caracteres para o programa imprimir os simbolos separadamente\n");
   scanf("%s", c);
   int n = strlen(c);
   separadors(c,n,0);

}

void separadors(char x[],int y, int z)
{
   if( y > 0)
   {
      printf("%c\n", x[z]);
      separadors(x, y-1, z+1);
   }

}
void metodo6()
{
   int quantidade,soma = 0;
   int impares3(int x, int y);
   printf("Digite a quantidade de vezes que imprimir a soma dos impares a partir de 3\n");
   scanf("%i",&quantidade);
   soma = impares3(quantidade, 3);
   printf("A soma e %i \n", soma);
}

int impares3(int x, int y)
{
   int soma = 0;
   if(x > 0)
   {
      soma = y + impares3(x - 1, y + 2);
   } 
   return soma;
}

void metodo7()
{
   float quantidade,soma = 0.0;
   float inversoimpares3(float x, float y);
   printf("Digite a quantidade de vezes que imprimir a soma dos inversos dos impares a partir de 3\n");
   scanf("%f",&quantidade);
   soma = inversoimpares3(quantidade, 3.0);
   printf("A soma e %f \n", soma);
}

float inversoimpares3(float x, float y)
{
   float soma = 0.0;
   if(x > 0)
   {
      soma = pow (y,-1) + inversoimpares3(x - 1, y + 2);
   } 
   return soma;
}