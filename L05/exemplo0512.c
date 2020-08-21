#include <stdio.h>

/* exemplo0512 - v0.0.1 - 26 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0512    exemplo0512    
    Windows: gcc -o exemplo0512.exe  exemplo0512 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo512   Windows:   exemplo0512  */ 
   
int main(){
   int x = 0;
   void metodo0();
   void metodo1();
   void metodo2();
   printf("exemplo0512- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler uma quantidade de numeros e organizar os pares em ordem crescente\n");
      printf("2-ler uma quantidade de numeros e organizar os pares multiplos de 3 em ordem crescente\n");
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
      while ( z < q)
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
      z=i;
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

