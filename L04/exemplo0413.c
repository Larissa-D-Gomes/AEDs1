/* exemplo0413 - v0.0.1 - 19 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0413    exemplo0413    
    Windows: gcc -o exemplo0413.exe exemplo0413 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0413   Windows:   exemplo0413  */ 
    #include <stdio.h>
int contadordeLMcadeia(char x[]);
int contadorlm (char x);
int main()
{
   int x = 0;
   void metodo0();
   void metodo1();
   void metodo2();
   void metodo3();
   printf("exemplo0413- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do 
   {
      printf("0-sair do programa\n");
      printf("1-ler um intervalo, uma certa quantidade de valores e dizer quantos estao dentro do intervalo\n");
      printf("2-ler uma sequancia de caracteres e contar as letras maiusculas\n");
      printf("3-ler uma cadeia de caracteres e contar as letras maiusculas\n");
      scanf("%i",&x);
      switch (x)
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
         default:
            printf("O valor selecionado nao e valodo tente outro\n");
            x=1;
      
      }
   
   }while (x!=0);
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
   float v1 = 0;
   float v2 = 0;
   int q = 0;
   float valores[q];
   int x = 0;
   int contador1 = 0;
   int contador2 = 0;
   printf("Digite dois numeros para definir um intervalo fechado\n");
   scanf("%f%f",&v1,&v2);
   printf("\nO intervalo e [%f,%f]", v1, v2);
   printf("\nDigite o numeros de valores a serem analisados\n");   
   scanf("%i",&q);
   printf("\nDigite %i valores para serem analisados\n",q);
   while(x<q)
   {
      scanf("%f",&valores[x]);
      if(valores[x]>=v1 && valores[x]<=v2)
      {
         contador1++;
      }
      else
      {
         contador2++;
      }
      x++;
   }
   printf("O total de numeros dentro do intervalo [%f,%f] foi %i e de numeros fora foi %i\n", v1, v2, contador1, contador2);
   
}


void metodo2()
{
   char c = 'a';
   int quantidade = 0;
   int comparador = 0;
   int total = 0;
   int y = 0;
   printf("Digite a quantidade de caracteres que deseja analisar\n");
   scanf("%i",&quantidade);
   printf("Digite %i caracteres\n",quantidade);
   do   
   {
      getchar();
      scanf("%c",&c);
      y = contadorlm (c);
      if  ( y == 1)
      {
         total = total + 1;
      }
      comparador++;
   }while (comparador < quantidade);
   
   printf("O total de letras maiusculas e %i\n", total);
  
}

int contadorlm (char x)
{
   int z = 0;
   if(x>='A'&& x<='Z')
   {
      z = 1;
   }
   else
   {
      z = 0;
   }
  
   return (z);
}


void metodo3()
{
   char c[2];
   int total = 0;
   printf("Digite uma cadeia de caracteres com ate 20 caracteres\n");
   scanf("%s",c);
   total = contadordeLMcadeia(c);
   printf("O total de letras maiusculas e %i\n", total);
  
}
int contadordeLMcadeia(char x[])
{
   int contador = 0;
   int i = 0;
   while(x[i]!='\0')
   {
      if( x[i] >= 'A' && x[i] <='Z')
      {
         contador++;
      }
      i++;
   }
   return (contador);
}