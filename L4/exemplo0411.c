/* exemplo0411 - v0.0.1 - 19 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0411    exemplo0411    
    Windows: gcc -o exemplo0411.exe exemplo0411 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0411   Windows:   exemplo0411  */ 
    #include <stdio.h>

int main()
{
   int x = 0;
   void metodo0();
   void metodo1();
   printf("exemplo0411- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do 
   {
      printf("0-sair do programa\n");
      printf("1-ler um intervalo, uma certa quantidade de valores e dizer quantos estao dentro do intervalo\n");
      scanf("%i",&x);
      switch (x)
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