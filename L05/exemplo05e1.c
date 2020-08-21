#include <stdio.h>
#include <math.h>
/* exemplo05e1 - v0.0.1 - 31 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo05e1    exemplo05e1    
    Windows: gcc -o exemplo05e1.exe  exemplo05e1 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo5e1   Windows:   exemplo05e1  */ 
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
   void metodo11();
   printf("exemplo05e1 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler uma quantidade de numeros e organizar os pares em ordem crescente\n");
      printf("2-ler uma quantidade de numeros e organizar os pares multiplos de 3 em ordem crescente\n");
      printf("3-ler uma quantidade de numeros e organizar os impares multiplos de 3 em ordem decrescente\n");
      printf("4-ler um numero inteiro e repetir a sequencia dos inversos essa quantidade de vezes\n");
      printf("5-ler um numero inteiro e mostrar no denominador em oredem crescente, um sequencia que utiliza potecia de um numero x\n");
      printf("6-ler um numero inteiro e calcular a soma dos primeiros numeros pares nao multiplos de 5\n");
      printf("7-ler um numero inteiro e calcular a soma dos inversos do primeiros numeros pares nao multiplos de 5\n");
      printf("8-ler um numero inteiro e calcular a soma dos primeiros numeros naturais, comecando de 1\n");
      printf("9-ler um numero inteiro e calcular a soma dos quadrados dos primeiros numeros naturais, comecando de 1\n");
      printf("10-ler um numero inteiro e calcular a soma dos inversos dos primeiros numeros naturais, comecando de 1\n");
      printf("11-ler um numero e calcular seu fatorial\n");
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
         case 11:
            metodo11();
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
void metodo1()
{
   int* crescente(int q, int y[]);
   int quantidade = 0;
   int n[quantidade];
   int i = 0;
   int x = 0;
   int t = 0;
   int p [x];
   printf("Digite a quantidade de numeros a serem testados\n");
   scanf("%i",&quantidade);
   for ( i = 0; i < quantidade; i++)
   {
      printf("Digite um numero\n");
      scanf("%i", &n[i]);
   }
   for ( i = 0; i < quantidade; i++)
   {
      if (n[i] % 2 == 0)
      {
         x++;
         p[t] = n[i];
         t++;
      }
   }
   int* r = crescente(x, p);
   i = 0;
   printf("Os numeros em ordem crescecnte sao e pares sao: ");
   while ( i < x) 
   {
      printf(", %i", r[i]);
      i++;
   }
   printf("\n");
}
int* crescente(int q,int y[])
{
   int i = 0;
   int z = 0;
   int t = 0 ;
   while (i < q)
   {
      while ( z <q)
      {
         if ( y[i] > y[z] )
         {
            t = y[i];
            y[i] = y[z];
            y[z] = t;
         }
         z++;
      }
      i++;
      z=i+1;
   }
   return &(y[0]);
}
void metodo2()
{
   int quantidade = 0;
   int n[quantidade];
   int a = 0;
   int z = 0;
   int m3p[a];
   int i = 0;
   int* crescente(int q,int y[]);
   printf("Digite quantos numeros deseja testar\n");
   scanf("%i", &quantidade);
   while (i< quantidade)
   {
      printf("Digite um numero\n");
      scanf("%i",&n[i]);
      i++;
   }
   i = 0;
   while ( i < quantidade)
   {
      if((n[i] % 3 == 0) && (n[i] % 2 == 0 ))
      {
         a++;
         m3p[z] = n[i];
         z++;
      }
      i++;
   }
   i=0;
   int* r = crescente(a,m3p);
   i = 0;
   printf("Os numeros pares e multiplos de tres em ordem crescente sao: ");
   while (i<a)
   {
      printf(", %i", r[i]);
      i++;
   }
   printf("\n");
}
void metodo3()
{
   int quantidade = 0;
   int n[quantidade];
   int a = 0;
   int z = 0;
   int m3i[a];
   int i = 0;
   int* decrescente(int q,int y[]);
   printf("Digite quantos numeros deseja testar\n");
   scanf("%i", &quantidade);
   while (i< quantidade)
   {
      printf("Digite um numero\n");
      scanf("%i",&n[i]);
      i++;
   }
   i = 0;
   while ( i < quantidade)
   {
      if((n[i] % 3 == 0) && (n[i] % 2 != 0 ))
      {
         a++;
         m3i[z] = n[i];
         z++;
      }
      i++;
   }
   i=0;
   int* r = decrescente(a,m3i);
   i = 0;
   printf("Os numeros impares e multiplos de tres em ordem decrescente sao: ");
   while (i<a)
   {
      printf(", %i", r[i]);
      i++;
   }
   printf("\n");
}


int* decrescente(int q,int y[])
{
   int i = 0;
   int z = 0;
   int t = 0 ;
   while (i < q)
   {
      while ( z < q)
      {
         if ( y[i] < y[z] )
         {
            t = y[i];
            y[i] = y[z];
            y[z] = t;
         }
         z++;
      }
      i++;
      z=i;
      }
      return &(y[0]);
   
}
void metodo4()
{
   int quantidade = 0;
   int n[quantidade];
   int i = 0;
   int x = 0;
   int valor = 2;
   printf("Digite a quantidade de vezes que a sequencia ira ser repetida\n");
   scanf("%i", &quantidade);
   n[i] = 1;
   printf ("A sequencia dos inversos repetida %i vezes e", quantidade);
   printf(", 1/%i", n[i]);
   for ( i = 1; i < quantidade; i++)
   {
    n[i] = valor;
    valor = valor + 2;
    printf(", 1/%i", n[i]);
   }
   printf("\n");
}

void metodo5()
{
   int quantidade = 0;
   int x = 0;
   int i = 0;
   int p=0 ;
   printf("Digite o valor de x\n");
   scanf("%i", &x);
   printf("Digite quantas vezes deseja elevar o valor (%i)\n", x);
   scanf("%i", &quantidade);
   printf("%i elevado %i vezes, em ordem crescente no denominador e ", x, quantidade); 
   for (p=0; p < quantidade; p++)
   {
      i= pow(x,p);
      printf("1/%i -  ", i);
    
   }
   printf("\n");
}
void metodo6()
{
   int quantidade = 0;
   int n = 2;
   int soma = 0;
   printf("Digite quantos numeros deseja somar os pares, nao multiplos de 5 \n");
   scanf("%i", &quantidade);
   while (quantidade > 0)
   {
      if ( (n % 2 == 0) && (n % 5!= 0))
      {
      soma = soma + n;
      quantidade--;
      }
      n = n + 2;
   }
   printf("a soma e %i\n", soma);
   

}


void metodo7()
{
   int quantidade = 0;
   int n = 2;
   float soma = 0.0;
   printf("Digite quantos numeros deseja somar o inverso dos pares, nao multiplos de 5 \n");
   scanf("%i", &quantidade);
   while (quantidade > 0)
   {
      if ( (n % 2 == 0) && (n % 5!= 0))
      {
      soma = soma + pow(n,-1);
      quantidade--;
      }
      n = n + 2;
   }
   printf("a soma dos inversos e %f\n", soma);
   

}
void metodo8()
{
   int quantidade = 0;
   int n = 1;
   int soma = 0;
   printf("Digite quantos numeros deseja somar \n");
   scanf("%i", &quantidade);
   while (quantidade > 0)
   {
      soma = soma + n;
      quantidade--;
      n = n + 1;
   }
   printf("a soma e %i\n", soma);
   

}


void metodo9()
{
   int quantidade = 0;
   int n = 1;
   int soma = 0;
   printf("Digite quantos numeros deseja somar \n");
   scanf("%i", &quantidade);
   while (quantidade > 0)
   {
      soma = soma + pow(n,2);
      quantidade--;
      n = n + 1;
   }
   printf("a soma dos quadrados e %i\n", soma);
   

}
void metodo10()
{
   int quantidade = 0;
   int n = 1;
   float soma = 0.0;
   printf("Digite quantos numeros deseja somar \n");
   scanf("%i", &quantidade);
   while (quantidade > 0)
   {
      soma = soma + pow(n,-1);
      quantidade--;
      n = n + 1;
   }
   printf("a soma dos inversos e %f\n", soma);
   

}
void metodo11()
{
   int valor = 0;
   int fat = 0;
   int fatorial(int x);
   printf("Digite o numero que deseja calcular o fatorial\n");
   scanf("%d", &valor);
   if(valor >= 0)
   {
   fat =fatorial (valor);
   printf("%i! = %i\n", valor, fat);
   }
   else
   {
   printf("impossivel calcular fatorial de um numero negativo\n");
   }
   
}
int fatorial (int x)
{
   int quantidade = 0;
   int total = 0;
   total = x * (x-1);
   x = x - 2;
   for ( quantidade = x - 1; quantidade > 0; quantidade--)
   {
      total = total * x;
      x--;
   }
   return total;
}