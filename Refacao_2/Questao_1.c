#include <stdio.h>
/* Questao_1 - v0.0.1 - 14 / 11 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o Questao_1    Questao_1    
    Windows: gcc -o Questao_1  Questao_1 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./Questao_1   Windows:   Questao_1  */ 
struct s_Array
{
   int length;
   int data[15];
};

struct s_Matrix
{
   int rows, columns;
   int data[10][10];
};

int main()
{
   printf("Questao_1- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   struct s_Matrix a;
   struct s_Array  b;
   printf("Digite o numero de linhas da matriz: \n");
   scanf("%d", &a.rows);
   printf("Digite o numero de colunas da matriz: \n");
   scanf("%d", &a.columns);
   if(a.rows>0 && a.rows<=10 && a.columns>0 && a.columns<=10)
   {
      void copiarPara(struct s_Array* x, struct s_Matrix y);
      for(int aux1 = 0; aux1 < a.rows; aux1++)
      {
         for(int aux2 = 0; aux2< a.columns; aux2++)
         {
            printf("Digite o termo[%d][%d] \n", aux1, aux2);
            scanf("%i", &a.data[aux1][aux2]);
         }
      }
      copiarPara(&(b),a);
      for(int aux = 0; aux < b.length; aux++)
      {
         printf("%d ", b.data[aux]);
      }
   }
   else
      printf("ERRO: PARAMETROS INVALIDOS\n");
   printf("Aperte enter para sair do programa\n");
   fflush( stdin);
   getchar();
   return (0);
}
void copiarPara(struct s_Array* x, struct s_Matrix y)
{
   if(y.columns == y.rows)
   {
      int cont = 0;
      for(int aux1 = 0; aux1 < y.rows; aux1++)
      {
         for(int aux2 = 0; aux2 <= aux1; aux2++)
         {
            cont++;
         }
      }
      if(cont <= 15)
      {
         (*x).length = 0;
         for(int aux1 = 0; aux1 < y.rows; aux1++)
         {
            for(int aux2 = 0; aux2 < aux1; aux2++)
            {
               (*x).data[x->length]= y.data[aux1][aux2];
               (*x).length++;
            }
         }
         for(int aux = 0; aux < y.rows; aux++)
         {
            (*x).data[(*x).length] = y.data[aux][aux];
            (*x).length++;
         }      
      }
      else
         printf("ERRO: TAMANHO INSUFICIENTE\n");
   
   
   }
   else
      printf("ERRO: NAO EH UMA MATRIZ QUADRADA\n");
}