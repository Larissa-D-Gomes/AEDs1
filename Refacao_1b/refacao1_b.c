#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void metodo0();
void metodo1();
void metodo2();
void metodo3();
void metodo4();
int main()
{
   int x = 0;
   do
   {
      printf("\n0-Sair do programa\n");
      printf("1-Q1\n");
      printf("2-Q2\n");
      printf("3-Q3\n");
      printf("4-Q4\n");
      scanf("%d", &x);
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
         default:
            printf("Comando invalido, tente outro\n");
            x = 1;
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
   int funcao01a(int x, int y);
   printf("f(x) = %d", funcao01a(0,13));
}
int funcao01a(int x, int y)
{
   int resultado = 0;
   if ( y < 0 )
   {
      resultado = 10000+funcao01a(x,-y);   
   }
   else
   {
      if ( y > 0 )
      {
         resultado = funcao01a(x+1, y/2)*10+y%2;
      }
   }
   return (resultado);
} 
void metodo2()
{
   bool funcao02(char c[]);
   char c[]="1A2G";
   printf("Resultado = %d\n", funcao02("1A2B"));
   printf("Resultado = %d\n", funcao02("1A2G"));
}
bool funcao02(char c[])
{
   bool r = 1;
   int aux = 0;
   while (r && aux < strlen(c) )
   {
      r = (('A' <= c[aux] && c[aux] <= 'F')) ;//|| ('a' >= c[aux] && c[aux] <= 'f'));
      if (!r)
      {
         r=('0' <= c[aux] && c[aux] <= '9');
      }
      aux++;
   }
   return r;
}
void metodo3()
{
   void f03( char n[] );
   f03( "DADOS.TXT" );
}
void f03( char n[] )
{
   int funcao03(char n[], double m);
   FILE* arq = fopen (n,"rt");
   if( arq!= NULL)
   {
      printf("resultado = %d\n", funcao03(n, 0.001));
   }
   fclose(arq);
} 
int funcao03(char n[], double m)
{
   FILE* arq = fopen (n,"rt");
   double valor = 0.0;
   double l = 0.0;
   int c = 1;
   int a = 0;
   fscanf( arq, "%lf", &valor);
   while(!feof(arq))
   {
      fscanf(arq,"%lf", &l);
      c++;
   }
   fclose (arq);
   FILE* arquivo = fopen(n, "rt");
   int rep = c/2;
   for(int aux = 0 ; aux < rep; aux++)
   {
      fscanf(arquivo, "%lf", &l);
   }
   for(rep = rep; rep <=c; rep++)
   {
      fscanf(arquivo, "%lf", &l);
      printf("%lf ", l);
      if((valor-m) <= l && (valor+m) >= l)
      {
         a++;
      }
   }
   return a;
}
void metodo4()
{
   int aux = 0;
   void funcao04(int* a,int* b);
   int a[12] = {1,2,3,3,3,4,5,4,4,4,3,0};
   int b [12];
   funcao04(&(b[0]),&(a[0]));
   while (b[aux] > 0)
   {
      printf("%d ", b[aux]);
      aux++;
   }
   printf("%d ", b[aux]);
}
void funcao04(int* a,int* b)
{
   if( a != NULL && b != NULL)
   { 
      int aux2 = 0;
      int aux = 0;
      int moda = 0;
      int l = 1;
      int l_2 = 1;
      int c = 0;
      int c_2 = 0;
      while( l > 0)
      {
         l = b[aux];
         l_2 = l;
         while(l_2 > 0 && l > 0 )
         {
            l_2 =b[aux2];
            aux2++;
            if(l_2 == l)
               c++;
         }
         if(c > c_2 && l > 0)
         {
            moda = l;
            c_2 = c;
         }
         else
         {
            if (c==c_2 && l > 0)
            {
               if(moda > l)
               {
                  moda = l;
               }
            }
         }
         aux2 = aux;
         c = 0;
         aux++;
         
      }
      if(l>=0)
      {
         l = b[0];
         aux = 0;
         aux2 = 0;
         while(l!=0)
         {
            if(l!=moda)
            {
               a[aux] = l;
               aux++;
            }
            aux2++;
            l=b[aux2];
         }
         a[aux] = moda*(-1);
      }
   }

}
