#include <stdio.h>
#include <math.h>
int main()
{
   void metodo5();
   metodo5();

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