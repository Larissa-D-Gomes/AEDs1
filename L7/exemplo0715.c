#include <stdio.h>
#include <math.h>

/* exemplo0712 - v0.0.1 - 09 / 09 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0712    exemplo0712    
    Windows: gcc -o exemplo0712.exe  exemplo0712 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0712   Windows:   exemplo0712  */ 
int main(){
   int x = 0;
   void metodo0();
   void metodo1();
   void metodo2();
   void metodo3();
   void metodo4();
   void metodo5();
   printf("exemplo0712- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler um valor inteiro e imprimir os numeros impares multiplos de 5 em um arquivo\n");
      printf("2-ler um valor inteiro e imprimir os numeros pares multiplos de 5 em um arquivo\n");
      printf("3-ler um valor inteiro e imprimir as potencias de 5 em um arquivo\n");
      printf("4-ler um valor inteiro e imprimir as potencias de 5 no denominador em ordem decrescente em um arquivo\n");
      printf("5-ler um valor inteiro e imprimir as potencias de x no denominador em um arquivo\n");
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
   int quantidade = 0;
   char n[10];
   void mp5i ( char nome[] , int x );
   printf("Digite a quantidade de vezes que deseja gravar multiplos de 5 impares no arquivo \n");
   scanf("%i", &quantidade);
   printf("Digite o nome do arquivo (ate 10 caracteres)\n");
   scanf("%s", n);
   mp5i ( n , quantidade ) ;
   printf("O arquivo com os multiplos de 5 esta criado\n");
} 

void mp5i ( char nome[] , int x ) 
{ 
   FILE* arquivo = fopen ( nome, "wt" );    
   int y = 0; 
   int i = 5; 
   for ( y = 0; y <= x; y ++ ) 
   { 
      fprintf ( arquivo, "%d\n", i );
      i = i + 10; // multiplos de 5 impares sao sempre o anterior +10 
   }   
 
   fclose ( arquivo ); 
}
void metodo2()
{
   int quantidade = 0;
   char n[10];
   void mp5p ( char nome[] , int x );
   printf("Digite a quantidade de vezes que deseja gravar multiplos de 5 pares no arquivo \n");
   scanf("%i", &quantidade);
   printf("Digite o nome do arquivo (ate 10 caracteres)\n");
   scanf("%s", n);
   mp5p ( n , quantidade ) ;
   printf("O arquivo com os multiplos de 5 esta criado\n");
} 

void mp5p ( char nome[] , int x ) 
{ 
   FILE* arquivo = fopen ( nome, "wt" );    
   int y = 0; 
   int i = 0; 
   for ( y = 0; y <= x; y ++ ) 
   { 
      fprintf ( arquivo, "%d\n", i * 10 );
      i = i + 1 ; //
        
   }   
 
   fclose ( arquivo ); 
}
void metodo3()
{
   int quantidade = 0 ;
   char n[10];
   void potencia5(char c[], int x);
   printf("Digite a quantidade de vezes que deseja imprimir as potencias de 5 \n");
   scanf("%i", &quantidade);
   printf("Digite o nome do arquivo que deseja criar (ate 10 caracteres)\n");
   scanf("%s", n);
   potencia5(n, quantidade);
}
void potencia5(char c[], int x)
{
   FILE* arquivo = fopen ( c, "wt");
   int i = 0;
   float p = 0;
   for (i = 0; i < x; i++)
   {
      p = pow(5,i);
      fprintf(arquivo,"%g\n",  p);
   } 
   fclose ( arquivo );
}
void metodo4()
{
   int quantidade = 0;
   char n[10];
   void p5d(char nome[], int x);
   printf("Digite a  quantidade de vezes que deseja imprimir potencias de 5 no denominador em ordem decrescente\n");
   scanf("%i", &quantidade);
   printf("Digite o nome do arquivo com ate 10 caracteres\n");
   scanf("%s", n);
   p5d(n, quantidade);
   printf("O arquivo foi criado\n");

}

void p5d(char nome[], int x)
{
   void somap5i(char c [], int x);
   FILE* arquivo = fopen( nome, "wt");
   int h = 0;
   h = x;
   int y = 0;
   for (x = x-1 ; x >=0 ; x--)
   {
      fprintf(arquivo, "%lf\n", 1/pow(5,x));
   }
   fclose (arquivo);
      do
   {
      printf("Se deseja calcular a soma digite 1, caso nao digite um caracter diferente de 1\n");
      scanf("%i", &y);
      if (y==1)
      {
         somap5i(nome, h);
      }
   }while (y==1);
   
}

void metodo5()
{
   int quantidade = 0;
   char n[10];
   int valor = 0;
   void px(char c[], int x, int z);
   printf("Digite a  quantidade de vezes que deseja imprimir potencias de x no denominador em ordem decrescente\n");
   scanf("%i", &quantidade);
   printf("Digite o nome do arquivo com ate 10 caracteres\n");
   scanf("%s", n);
   printf("Digite o numero que deseja imprimir as potencias\n");
   scanf("%i", &valor);
   px(n, quantidade, valor);
   printf("O arquivo foi criado\n");
}

void px(char c[], int x, int z)
{
   void somam5(char c[], int g,int f);
   FILE* arquivo = fopen(c, "wt");
   float y = 0;
   fprintf(arquivo, "1\n");
   for (y=1; y < x; y++)
   {
      fprintf(arquivo, "%f\n", 1/pow (z,y*2-1));
   }
   fclose (arquivo);
   do
   {
      printf("Se deseja calcular a soma digite 1, caso nao digite um caracter diferente de 1\n");
      scanf("%f", &y);
      if (y==1)
      {
         somam5(c, x, z);
      }
   }while (y==1);
}

void somam5(char c[], int g, int f)
{
   float x = 0;
   float y = 0;
   int h = 0;
   int quantidade = 0;
   FILE* arquivo = fopen(c, "rt");
   FILE* arq = fopen ("resultado6", "a");
   do {
      printf("Digite o numero de vezes que deseja calcular a soma, o numero tem que ser <= a %i \n", g);
      scanf("%i", &quantidade);
      if( quantidade > g)
      {
         printf("O numero digitado e maior que o limite do somatorio %i, tente outro\n", g); 
      }
   }while(quantidade>g);
   fprintf(arq, "A soma dos %i primeiros numeros do inverso da potencia de %i e :\n    ", quantidade, f); 
   for (h = 0; h < quantidade;h++)
   {
       
      fscanf(arquivo,"%f", &x);
      fprintf(arq, "%f + ",x);
      y= y + x;
   }
   fprintf(arq, "= %f\n", y);
   fclose(arquivo);
   fclose(arq);
}

void somap5i(char c [], int x)
{
   FILE* arquivo = fopen( c, "rt");
   FILE* arq = fopen ("resultado07", "a");
   int y = 0;
   double i = 0.0;
   double soma = 0.0; 
   do 
   {
      printf("Digite a quantidade de vezes que deseja executar o somatorio, sendo menor que %i\n",x);
      scanf("%i",  &y);
      if ( y > x)
      {
         printf("A quantidade escolhida e maior que %i, tente outro valor\n",x);
      }
   }while(y > x);
   fprintf(arq, "A soma dos %i primeiros valores dos inversos da potencia de 5 e\n    ",y);
   for(y = y; y > 0; y--)
   {
      fscanf (arquivo, "%lf", &i);
      fprintf(arq, "%lf + ", i);
      soma = i + soma; 
   }
   fprintf(arq, " = %lf\n", soma);
   fclose(arquivo);
   fclose(arq);
}