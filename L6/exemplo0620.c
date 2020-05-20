#include <stdio.h>
#include <string.h>
#include <math.h>

/* exemplo0620 - v0.0.1 - 05 / 09 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0620    exemplo0620    
    Windows: gcc -o exemplo0620.exe  exemplo0620 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0620   Windows:   exemplo0620  */ 
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
   void metodo8();
   void metodo9();
   void metodo10();
   printf("exemplo0620- v0.0.1");
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
      printf("8-Uma posicao de fibonacci e dizer se o termo e par\n");
      printf("9-Contar os digitos pares de uma cadeia de caracteres\n");
      printf("10-Contar os caracteres maiusculos de uma cadeia\n");
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
         case 8:
            metodo8();
            break;
         case 9:
            metodo9();
            break;
         case 10:
            metodo10();
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
   printf ("Digite o numero de vezes que deseja imprimir os n�meros impares maiores que 5 \n");
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
void metodo8()
{
   int quantidade = 0;
   int fibonaccipar(int x);
   printf("Digite um numero par para o programa executar a sequencia de fibonacci e programa verificar se o termo e par\n");
   scanf("%i", &quantidade);
   int f =fibonaccipar (quantidade);
   if ( f % 2 != 0 )
   {
      printf("O termo de fibonacci %i nao e par\n", f);
   }
   else
   {
      printf("O termo de fibonacci %i e par\n", f);
   }
}
int fibonaccipar ( int x ) 
{      
   int resposta = 0; 
   if ( x == 1 || x == 2 )    
   {           
      resposta = 1; 
   } 
   else  
   {     
      if ( x > 1 )       
      {             
         resposta = fibonaccipar ( x-1 ) + fibonaccipar ( x-2 );       
      }      
   }  
   return ( resposta );
}
void metodo9()
{
   char c[81];
   int contardorpares(char i[],int x, int y);
   printf("Digite uma cadeia com ate 80 caracteres para o programa contar os numeros pares\n");
   scanf("%s",c);
   int total = contardorpares(c, strlen(c), 0);
   printf("O total de paares e %i \n", total);
   
}
int contardorpares(char i[],int x, int y)
{
   int contador = 0;
   if( x > 0)
   {
      contador = contardorpares(i, x-1 , y+1);
      if (i[y] >= '0' && i[y] <= '9' &&  (int)i[y] % 2 == 0)
      {
         contador++;
      }
   }
   return contador;
}

void metodo10 ()
{
   int contadormaiusculas(char c[], int x);
   char c[81];
   printf("Digite uma cadeia com ate 80 caracteres para o programa contar a quantidade de letrs maiuscula\n");
   scanf("%s", c);
   printf("O total de letras maiusculas e %i\n ", contadormaiusculas(c, strlen(c)));

}

int contadormaiusculas(char c[], int x)
{
   int contador = 0;
   if (x >= 0)
   {
      contador = contador + contadormaiusculas(c, x-1);
      if(c[x] >='A' && c[x] <= 'Z')
      {
         contador++;
      }
     
   }
   return contador;
}