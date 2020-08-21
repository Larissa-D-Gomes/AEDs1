#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* refacao - v0.0.1 - 26 / 09 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o refacao    refacao    
    Windows: gcc -o refacao  refacao 
 
   Para executar em terminal (janela de comandos):   
   Linux      :  ./refacao   Windows:   refacao  */ 
void somatorio (int x);
void metodo0();
void metodo1();
void metodo2();
void metodo3();
void somatorio (int x);
char* separador(char c[], int x);
int main()
{
   printf("refacao- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int x = 0;
   do
   {
      printf("0-Sair do programa\n");
      printf("1-Questao 1\n");
      printf("2-Questao 2\n");
      printf("3-Questao 3\n");
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
   
   int z =0;
   int y=0;
   int p=0;
   int x=0;
   printf("Digite a matricula\n");
   scanf("%i", &x);
   p =x;
   while(p > 0)
   {
      if(p%10%2 !=0)
      {
         y=y+p%10/2;
      }
      else
      {
         z=z+p%10;
      }
      p = p/10;
   }
   if(z-y>0)
   {
      printf("%s%d","a.resposta = ",(z-y)); 
   }
   else
   {
      printf("%s%d","b.resposta = ",(10+y-z)); 
   
   }
   printf("\n");
}
void metodo2()
{
   int n = 0;
   do
   {
      printf("Digite o valor desejado\n");
      scanf("%i", &n);
      if (n<=0)
      {
         printf("Valor invalido, tente outro\n");
      }
   }while(n<=0);
   somatorio (n);
   printf("\n");
}
void somatorio (int x)
{
   int soma = 5;
   int aux = 1;
   if (x >= 1)
   {
      printf("1 ");
   }
   if (x>=2)
   {
      printf("2 ");
   }
   if (x>=3)
   {
      printf("5 ");
   }
   for(aux = 1; aux < x-2; aux++)
   {
      if ((soma+4)%30 != 0)
      {
         if (aux % 2 !=0)
         {
            soma = soma +1;
         }
         else
         {
            soma = soma +4;
         }
         printf("%i ", soma);
      }
      else
      {
         soma = soma+9;
         printf("%i ", soma);
      }
   }
   printf("\n");
}
void metodo3()
{
   char c[80];
   printf("Digite a cadeia\n");
   scanf("%s", c);
   char* s =separador(c, strlen(c));
   printf("%s", s);
   printf("\n");
}
char* separador(char c[], int x)
{
   char* resposta = NULL;
   resposta =(char*) malloc (strlen(c+1)*sizeof(char));
   char aux1[100];
   char aux2[100];
   int h=0;
   int i = 0;
   int n =0; 
   int contador =0;
   if(resposta!= NULL)
   {
      resposta[0]='\0';
   }
   while(n < x )
   {  
      if((c[n]>= 'A' && c[n] <= 'Z')||(c[n]>= 'a' && c[n] <= 'z'))
      {
         aux1[i] = c[n];
         aux1[i+1] ='\0';
         i++;
      }
      if(c[n]>= '0' && c[n] <= '9')
      {
         aux2[h] = c[n];
         aux2[h+1] ='\0';
         h++;
      }
      n++;
   }
   contador = i + h;
   if (contador == 0)
   {
      for(n=0; n<x; n++)
      {
         resposta [n] = '-';
         resposta[n+1] ='\0';
      }
   }
   else
   {
      strcpy(resposta, aux1);
      strcat(resposta, aux2);
   }
   resposta[n+1] ='\0';
   return resposta;
}