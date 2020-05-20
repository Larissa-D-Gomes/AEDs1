#include <stdio.h>
void metodo0();
void metodo1();
int main()
{
   int x = 0;
   do
   {
      printf("0-Sair do programa\n");
      printf("1-Ler o numero de linhas, colunas e os termos de uma matriz e mostra-los na tela\n");
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
            printf("Comando invalido, tente outro\n");
            x =1;
      }
   }while(x!=0);
   printf("Aperte enter para sair do programa\n");
   fflush( stdin);
   getchar();
   return (0);
}
void metodo0()
{
}
void metodo1()
{
   int colunas = 0;
   int linhas = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matriz\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("O numero de linhas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matriz\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   for(aux1 = 0; aux1 < linhas; aux1++)
   {
      for(aux2 = 0; aux2< colunas; aux2++)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matriz, sendo um valor positivo:\n",aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2]<=0)
            {
               printf("O valor digitado nao e positivo tente outro\n");
            }
         }while(matriz[aux1][aux2]<=0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
}
void mostrarmatriz(int x, int y, double m[x][y])
{
   printf("A matriz e:\n");
   for(int aux1 = 0; aux1 < x; aux1++)
   {
      for(int aux2 = 0; aux2< y; aux2++)
      {
         printf("%lf\t", m[aux1][aux2]);
      }
      printf("\n");
   }
}