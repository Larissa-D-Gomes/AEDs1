#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>
/* exemplo08e2 - v0.0.1 - 20 / 09 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo08e2    exemplo08e2    
    Windows: gcc -o exemplo08e2.exe  exemplo08e2 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo08e2   Windows:   exemplo08e2  */ 
   void metodo0();
   void metodo1();
   void metodo2();
   void metodo3();
   void metodo4();
   void metodo5();
   void metodo6();
   void metodo7();
   void metodo8();
   void metodo9();
   void metodo10();
   void metodo11();
   void metodo12();
int main(){
   int x = 0;
   printf("exemplo08e2- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler tamanho do arranjo, e seus componentes pares e positivos\n");
      printf("2-ler um arranjo de arquivo, ler o tamanho e seus componentes, sendo pare, positivos\n");
      printf("3-ler os limites e criar numeros aleatorios e escreve-los em arquivo\n");
      printf("4-procurar o valor maior em um arquivo, separados em um vetor\n");
      printf("5-procurar o valor menor em um arquivo, separdos em um vetor\n");
      printf("6-calcular a media dos numeros de um arquivo, separdos em um vetor\n");
      printf("7-ler um arquivo e dizer se seus componentes estao ordenados\n");
      printf("8-ler um arquivo, separar em um vetor e dizer se um numero procurado esta nele\n");
      printf("9-ler um arquivo, separar em um vetor e dizer a posicao de um numero procurado\n");
      printf("10-ler um arquivos, separar em um vetor e dizer quantas vezes um numero procurado aparece\n");
      printf("11-ler um inteiro e separar em um vetor e arquivo seus divisores\n");
      printf("12-ler de um arquivo e retornar as 10 primeiras palavras que nao comecam com a\n");
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
         case 6:
            metodo6();
            break;
         case 7:
            metodo7();
            break;
         case 8:
            metodo8();
            break;
         case 9:
            metodo9();
            break;
         case 10:
            metodo10();
            break;
         case 11:
            metodo11();
            break;
         case 12:
            metodo12();
            break;
         default:
            printf("O valor selecionado nao e valido tente outro\n");
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
   int t = 0;
   int comparador = 0;
   do
   {
      printf("Digite o tamanho do arranjo, sendo um valor > 0\n");
      scanf("%i", &t);
      if (t <= 0)
      {
         printf("O valor (%i) escolhido e <= 0 e nao pode ser considerado com tamanho de um arranjo, tente outro\n", t);
      }
   } while (t <= 0);
   int arranjo[t];
   while (comparador < t)
   {
      printf("Digite o elemento [%i] do vetor, sendo par e > 0\n", comparador+1);
      scanf("%i", &arranjo[comparador]);
      if (arranjo[comparador] % 2 == 0 && arranjo[comparador] > 0 )
      {
         comparador++;
      } 
      else 
      {
         printf("O numero escolhido nao e par ou nao e positivo, tente outro\n");
      }
   }
   printf("Os elementos do arranjo sao :\n");
   for (comparador = 0; comparador < t; comparador++)
   {
      printf("%i - ", arranjo[comparador]);
   }
}
void metodo2()
{
   void arranjo(int arranjo[], char n[], int t);
   char nome[50];
   int x = 0;
   int g[10];
   printf("Digite o nome do arquivo que deseja testar\n");
   scanf("%s", nome);
   arranjo(g, nome, x);
}
void arranjo(int arranjo[], char n[], int t)
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");
   
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if ( i <=0)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            if (aux >= 0 && (aux % 2  == 0)) 
            {
               t++;// se for par positivo muda a posição e o tamanho do arranjo
               arranjo[t-1]=aux;
            }
         }  
         printf("O tamanho do arquivo e %i e  os numeros pares positivos contidos nele sao:\n", i);
         for (comparador = 0; comparador < t; comparador++)
         {
            printf("%i - ", arranjo[comparador]);
         }
      }
      else
      {
         printf("Erro, o arquivo e maior que o esperado\n");
      }
   }

   fclose( arquivo );
}
void metodo3()
{
   int limite1 = 0;
   int limite2 = 0;
   int quantidade = 0;
   int t=0;
   int num[10];
   int aleatorio (int x, int y);
   FILE* arquivo = fopen("DADOS.TXT", "wt");
   printf("Digite o limite inferior para o numero aleatorio \n");
   scanf("%i" , &limite1);
   do 
   {
      printf("Digite o limite superior para o numero aleatorio \n");
      scanf("%i", &limite2);
      if( limite2 < limite1)
      {
         printf("O limite superior e menor que o infeiror (%i), tente outro \n", limite1);  
      }
   }while ( limite2 < limite1);
   printf("Os limites para o numero aleatorio sao [%i,%i]\n", limite1, limite2);
   printf("Digite a quantidade de numeros a serem gerados aleatoriamente (limite = 10) \n");
   scanf("%i", &quantidade);
   if(quantidade <=10)
   {
      srand(time(NULL));
      fprintf(arquivo, "%i\n", quantidade);
      for (quantidade = quantidade; quantidade > 0; quantidade--)
      {
         t++;
         num[t-1] = aleatorio (limite1, limite2);  
      }
      for ( quantidade = 0;quantidade < t; quantidade++)
      {
         fprintf(arquivo, "%i\n", num[quantidade]);
      }
   }
   else
   {
      printf("Erro, o numero e maior que 10");
   }
   fclose(arquivo);
}
int aleatorio (int x, int y)
{
   int aleat = 0;
   aleat = x + (rand() % y);
   return aleat;
}
void metodo4()
{  
   char c[80];
   int t = 0;
   int arranjo[10];
   int arranjomaior(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Maior = %i",arranjomaior(c, t, arranjo));
}
int arranjomaior(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int maior (int x[], int y);
   int nmaior =0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <=10)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            arranjo[t]=aux;
            printf("%i\n", arranjo[t]);
            t++;// se for par positivo muda a posição
         }
         t= t-1;
         printf("%i\n", arranjo[t]);
         nmaior = maior (arranjo, t);
      }
      else
      {
         printf("Erro, o arquivo e maior que o esperado\n");
      }
   
      fclose (arquivo);
   }
   return nmaior;  
}   
int maior (int x[], int y)
{
   int maior = x[y];
   while (y > 0)
   {
      if(maior < x[y-1])
      {
         maior = x[y-1];
      }
      y--;
   }
   return maior;
}
void metodo5()
{  
   char c[80];
   int t = 0;
   int arranjo[10];
   int arranjomenor(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Menor = %i",arranjomenor(c, t, arranjo));
}
int arranjomenor(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int menor (int x[], int y);
   int nmenor =0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <=10)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            t++;// se for par positivo muda a posição 
            arranjo[t-1]=aux;
            printf("%i\n", arranjo[t-1]);
         }
      }
      else
      {
         printf("Error, o arquivo e maior que o esperado\n");
      }
      fclose (arquivo);
   }
   nmenor = menor (arranjo, t);
   return nmenor;  
}   
int menor (int x[], int y)
{
   int menor = x[y];
   while (y > 0)
   {
      if(menor > x[y-1])
      {
         menor = x[y-1];
      }
      y--;
   }
   return menor;
}
void metodo6()
{  
   char c[80];
   int t = 0;
   int arranjo[10];
   float arranjomedia(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Media = %f",arranjomedia(c, t, arranjo));
}
float arranjomedia(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   float media (int x[], int y);
   float nmedia = 0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <= 10)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            t++;// se for par positivo muda a posição do arranjo
            arranjo[t-1]=aux;
            printf("%i\n", arranjo[t-1]);
         }
         t = t-1;
         nmedia = media (arranjo, t);
      }
      else
      {
         printf("Erro, o arquivo e maior que a cadeia");
      }
      
      fclose (arquivo);
   }
   
   return nmedia;  
}   
float media (int x[], int y)
{
   float divisor = (y+1);
   float media = x[y];
   while (y > 0)
   {
      media = x[y-1] + media;
      y--;
   }
   return (media/divisor);
}

void metodo7()
{
   int t = 0;
   int arranjo[20];
   int contador=0;
   bool ordem(int x[], int y);
   do
   {
   printf("Digite o tamanho do arranjo ate 20\n");
   scanf("%i", &t);
   }while(t>20);
   for (contador=0; contador < t; contador++)
   {
      printf("Digite o valor [%i] do arranjo:\n", contador+1);
      scanf("%i", &arranjo[contador]);   
   }
   int resposta =ordem (arranjo, t);
   if (resposta == 1)
   {
      printf("%s","O arranjo nao esta ordenado\n");
   }
   else
   {
      printf("%s","O arranjo esta ordenado\n");
   }
}
bool ordem(int x[], int y)
{
   int contador = 0;
   bool resposta = 0;
   while (contador < y-1 && resposta != 1)
   {
      resposta = (x[contador] > x[contador+1]);
      contador++;
   }
   return resposta;
}
void metodo8()
{
   FILE* arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int arranjo [10];
   int comparador = 0;
   int procurado = 0;
   bool procurar (int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   if( t <= 10)
   {
      for (comparador = 0; comparador < t; comparador++)
      {
         fscanf(arquivo, "%i", &arranjo[comparador]);
      //printf("%i - ", arranjo[comparador]);
      }
      printf("Digite o valor que deseja procurar\n");
      scanf("%i", &procurado);
      int resposta = procurar (arranjo, procurado, t);
      if (resposta == 0)
      {
         printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
      }
      else
      {
         printf("%s%i%s","O arranjo contem o valor [",procurado,"] procurado\n");
      }
   }
   else 
   {
      printf("Erro, o arquivo e maior que o esperado");
   }
   
   fclose(arquivo);
}
bool procurar (int x[], int procurado, int i)
{
   bool resposta = 0;

   while (i-1 > -1 && resposta != 1)
   {
      resposta = (x[i-1] == procurado);
      i--;
   }
   return resposta;
}
void metodo9()
{
   FILE* arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int arranjo [t];
   int comparador = 0;
   int procurado = 0;
   int resposta =0;
   int posicao(int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   for (comparador = 0; comparador < t; comparador++)
   {
      fscanf(arquivo, "%i", &arranjo[comparador]);
      //printf("%i - ", arranjo[comparador]);
   }
   printf("Digite o valor que deseja procurar\n");
   scanf("%i", &procurado);
   resposta = posicao (arranjo, procurado, t);
   if (resposta == 0)
   {
      printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
   }
   else
   {
      printf("%s%i%s%i","O arranjo contem o valor [",procurado,"] procurado na posicao ", resposta,"\n");
   }
   fclose(arquivo);
}
int posicao (int x[], int procurado, int i)
{
   bool resposta = 0;
   int posicao = 0;
   while (posicao < i && resposta != 1)
   {
      resposta = (x[posicao] == procurado);
      posicao++;
   }
   return posicao;
}
void metodo10()
{
   FILE* arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int arranjo [t];
   int comparador = 0;
   int procurado = 0;
   int resposta =0;
   int quantidade(int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   for (comparador = 0; comparador < t; comparador++)
   {
      fscanf(arquivo, "%i", &arranjo[comparador]);
      //printf("%i - ", arranjo[comparador]);
   }
   printf("Digite o valor que deseja procurar\n");
   scanf("%i", &procurado);
   resposta = quantidade (arranjo, procurado, t);
   if (resposta == 0)
   {
      printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
   }
   else
   {
      printf("%s%i%s%i%s","O arranjo contem o valor [",procurado,"] procurado ", resposta," vezes\n");
   }
   fclose(arquivo);
}
int quantidade (int x[], int procurado, int i)
{
   int posicao = 0;
   int resp=0;
   while (posicao < i)
   {
      if (x[posicao] == procurado)
      {
      resp++;
      }
      posicao++;
   }
   return resp;
}
void metodo11()
{
   FILE* arquivo = fopen ("divisores.TXT", "wt");
   int* divisoresarray(int x, int y);
   int quantidadediv(int x);
   int n = 0;
   int t = 0;
   int* y = 0;
   int aux = 0;
   printf("Digite o numero que deseja imprimir seus divisores\n");
   scanf("%i", &n);
   t = quantidadediv(n);
   fprintf(arquivo,"%i\n", t);// imprimir o numero de divisores
   printf("O numero de divisores de %i e %i\n",n, t);// imprimir o numero de divisores
   int* cadeia= divisoresarray(n, t);
   printf("%s%i%s", "Os divisores de ", n, " sao\n");
   while (aux < t)
   {
      printf("%i - ", cadeia[aux]);
      fprintf(arquivo,"%i\n", cadeia[aux]);
      aux++;
   }
   fclose(arquivo);
}
   
int* divisoresarray(int x, int y)
{
   int* cadeia= NULL;
   cadeia = (int*) malloc(100*sizeof(int));
   int contador = 0;
   int div = 1;
   while (div <= x)
   {
      if( x % div == 0)
      {
         cadeia[contador] = div;
         contador++;
      }
      div++;
   }
   return cadeia;
}

int quantidadediv(int x)
{
   int contador = 0;
   int div = 1;
   while (div <= x)
   {
      if( x % div == 0)
      {
         contador++; 
      }
      div++;
   }
   return contador;
}
void metodo12()
{
   char* c;
   char* palavra();
   int contador = 0;
   c = palavra();
   char mostrar[101];
   contador = 0;
   //printf("%s",c);
   FILE* arq = fopen (c, "rt");
   printf("As 10 primeiras palavras lidas no arquivo que nao comecam com a sao:\n");
   for(contador = 0 ; contador < 10; contador++)
   {
      fgets(mostrar ,100,arq);
      printf("[%i]%s",contador+1, mostrar);
   }

   fclose(arq);
}

char* palavra()
{
   FILE* arq = fopen ("sema.TXT", "wt");
   static char a[9] = "sema.TXT";
   FILE* arquivo = fopen("palavras.TXT","rt");
   char c[100];
   int contador = 0;
   int cont =0;
   do
   {
      fgets(c,100, arquivo);
      if (c[0]!='a' && c[0]!='A')
      {
         fprintf(arq,"%s",c);
         fgets(c, 100, arquivo);
        //printf("[%i] %s",contador+1, c);
         contador++;
      }
      cont++;   
   }while(contador < 10 && cont <100);
   fclose(arquivo);
   fclose(arq);
   return &(a[0]);
}