/* exemplo0312 - v0.0.1 - 13 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0312    exemplo0312    
    Windows: gcc -o exemplo0312.exe exemplo0312 
 
   Para executar em terminal (janela de comandos):   
    Linux      :  ./exemplo0312    Windows:   exemplo0312  */ 

#include <stdio.h>

int main()
{
   printf("exemplo0312 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int x = 0;
   void metodo0 ();
   void metodo1 ();
   void metodo2 ();
   do
   {
      printf("0-Sair do programa\n");
      printf("1-ler palavra do teclado e mostrar letras maiusculas\n");
      printf("2-ler palavra do teclado e contar e mostrar letras maiusculas\n");
      scanf("%i",&x);
      switch (x)
      {
         case 0:
            metodo0 ();
            break;
         case 1:
            metodo1 ();
            break;
         case 2:
            metodo2 ();
            break;
         default:
            printf("Valor diferente dos propostos, tente outro\n");
            x=1;    
      }
   }while(x!=0);   
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
void metodo0 ()
{
   
}
void metodo1 ()
{
   char palavra[21] = "aa";
   int x = 0;
   printf("Digite uma palavra (com ate 20 caracteres) para o programa mostrar as letras maiusculas\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",palavra);
  
   while(palavra[x] != '\0')//ler ate o ultimo caracter
   {
      if(palavra[x] >= 'A' && palavra[x] <= 'Z')//verificar se esta entre as letras maiusculas
      {
         printf("%c\n", palavra[x]);//caso sim imprimir
      }
      ++x;//mudar a posicao das letras da string
     
      
   } 
}




void metodo2()
{
   char palavra[21] = "aa";
   int x = 0;
   int contador = 0;//contador para dizer quantas letras sao maiusculas
   printf("Digite uma palavra (com ate 20 caracteres) para o programa mostrar as letras maiusculas\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",palavra);
  
   while(palavra[x] != '\0')//ler ate o ultimo caracter
   {
      if(palavra[x] >= 'A' && palavra[x] <= 'Z')//verificar se esta entre as letras maiusculas
      {
         printf("%c\n", palavra[x]);//caso sim imprimir
         ++contador;//somar 1 ao contador cada vez que uma letra maiuscula for detectada
      }
      ++x;//mudar a posicao das letras da string
      
   } 
   
}
