/* exemplo0511 - v0.0.1 - 26 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0511    exemplo0511    
    Windows: gcc -o exemplo0511.exe exemplo0511 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo511   Windows:   exemplo0511  */ 
    #include <stdio.h>
int main(){
   int x = 0;
   void metodo0();
   void metodo1();
   printf("exemplo0511- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler uma quantidade de numeros e organizar os pares em ordem crescente\n");
      scanf("%i",&x);
      switch(x)
      {
         case 0:
            metodo0();
            break;
         case 1:
            metodo1();
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