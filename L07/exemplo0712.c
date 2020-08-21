#include <stdio.h>

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
   printf("exemplo0712- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler um valor inteiro e imprimir os numeros impares multiplos de 5 em um arquivo\n");
      printf("2-ler um valor inteiro e imprimir os numeros pares multiplos de 5 em um arquivo\n");
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