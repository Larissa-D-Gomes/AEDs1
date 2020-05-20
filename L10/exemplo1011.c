#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
void metodo0()
{

}
typedef struct aleat
{
   int sup;
   int inf;
   int* arranjo;
} ialeat;
int aleatorio (struct aleat x)
{
   int aleat = 0;
   aleat = x.inf + (rand() % x.sup);
   return aleat;
}
void aleatorioarq(int x, struct aleat y)
{
   FILE* arquivo = fopen ("DADOS.TXT", "wt");
   fprintf(arquivo,"%i\n", x);
   for (int aux = 0; aux < x; aux++)
   {
      fprintf(arquivo,"%i\n", y.arranjo[aux]);
   }
   
   fclose (arquivo);
}
void metodo1()
{
   ialeat rand;
   int aleatorio (struct aleat x);
   int quant = 0 ;
   do 
   {
      printf("Digite um limite inferior, positivo:\n");
      scanf("%i", &rand.inf);
   }while(rand.inf < 0);
   do
   {
      printf("Digite um limite superior, positivo\n");
      scanf("%i", &rand.sup);
   }while(rand.sup < 0);
   do
   {
      printf("Digite a quantidade de numeros a serem gerados\n");
      scanf("%i", &quant);
      if (quant < 0)
      {
         printf("Quantidade invaida, tente outra\n");
      }
   }while(quant < 0);
   rand.arranjo = (int*)malloc(quant*(sizeof(int)));
   srand(time(NULL));
   for (int aux = 0; aux < quant; aux++)
   {
      rand.arranjo[aux] = aleatorio (rand);  
   }
   aleatorioarq(quant, rand);
   printf("O arquivo foi criado.\n");

}
struct procurado
{
   int proc;
   int t;
   int* vetor;
};
void separador(char c[], struct procurado* x)
{
   FILE* arquivo = fopen (c, "rt");
   fscanf( arquivo, "%i", &x->t);
   x->vetor= (int*)malloc(x->t*sizeof(int));
   for(int aux = 0; aux < x->t; aux ++)
   {
      fscanf(arquivo , "%i", &x->vetor[aux]);
   } 

   fclose(arquivo);
   
}
bool procurador(struct procurado x)
{
   bool resposta = 0;
   int aux = 0;
   while(( aux < x.t) && ( resposta != 1) )
   {
      resposta = (x.vetor[aux] == x.proc);
      aux ++;
   }
   return resposta; 
}
void metodo2()
{
   void separador(char c[], struct procurado* x);
   bool procurador(struct procurado x);
   struct procurado p;
   separador("DADOS.TXT", &p);
   printf("Digite o valor que deseja procurar\n");
   scanf("%i", &p.proc);
   bool r = procurador(p);  
   if ( r == 1)
   {
      printf("O valor [%i], esta no arquivo \n", p.proc);
   }
   else
   {
      printf("O valor [%i], nao esta no arquivo \n", p.proc);
   }
}
typedef struct Arranjos
{
   int* array;
   int tamanho;

} arranjos;
void aranjarq(arranjos* y, char c[])
{
   FILE* arquivo = fopen (c, "rt");
   fscanf(arquivo, "%i", &y->tamanho);
   y->array=(int*)malloc(y->tamanho*sizeof(int));
   for(int aux = 0; aux < y->tamanho; aux++)
   {
      fscanf(arquivo,"%i" ,&y->array[aux]);
   }
   fclose (arquivo);
}
int resposta (arranjos x, arranjos y)
{
   int resp = 1;
   int aux = 0;
   if( x.tamanho == y.tamanho )
   {
      while( aux < y.tamanho && resp == 1)
      {
         if( x.array[aux] != y.array[aux])
         {
            resp = -1;
         }
         aux++;
      }
   }
   else
   {
      resp = 0;
   }
   return resp;
}
void metodo3()
{
   void aranjarq(arranjos* y, char c[]);
   int resposta (arranjos x, arranjos y);
   arranjos a_1;
   arranjos a_2;
   aranjarq(&a_1, "DADOS1.TXT"); 
   aranjarq(&a_2, "DADOS2.TXT"); 
   int r = resposta (a_1, a_2);
   if ( r == 0)
   {
      printf("Os tamanhos dos arquivos sao diferentes\n");
   }
   else
   {
      if (r == 1)
      {
         printf("Os arquivos sao iguais\n");
      }
      else
      {
          printf("Os arquivos sao diferentes\n");
      }
   }
}
void metodo4()
{
   void aranjarq(arranjos* y, char c[]);
   arranjos* respostasoma (arranjos x, arranjos y, int c);
   int constante = 0;
   arranjos a_1;
   arranjos a_2;
   aranjarq(&a_1, "DADOS1.TXT"); 
   aranjarq(&a_2, "DADOS2.TXT");
   printf ("Digite a constante que deseja multiplicar o arranjo\n");
   scanf("%i", &constante);
   arranjos* soma = respostasoma (a_1, a_2, constante);
   if (a_1.tamanho == a_2.tamanho)
   {
      printf("A soma do arranjo e:");
      for (int aux =0; aux < soma->tamanho; aux++)
      {
         printf("%i - ",soma->array[aux]);
      }
   }
}
arranjos* respostasoma(arranjos x, arranjos y, int c)
{
   arranjos* s;
   s = (arranjos*) malloc(sizeof(arranjos));
   int aux = 0;
   if( x.tamanho == y.tamanho )
   {
      s->tamanho = y.tamanho;  
      s->array=(int*)malloc(s->tamanho*sizeof(int));
      for(aux=0; aux < y.tamanho; aux++ )
      {
         s->array[aux]= x.array[aux] + (c * y.array[aux]);
      }
   }
   else
   {
      printf("Erro: tamanho dos vetores e diferente\n");
   }
   return s;
}
bool organizado(arranjos x)
{
   bool resposta = 1;
   int aux = 1;
   while ( (aux < x.tamanho ) && ( resposta == 1 ))
   {
      resposta = (x.array[aux] >= x.array[aux-1]);
      aux++;
   }
   return resposta;
}
void metodo5()
{
   void aranjarq(arranjos* y, char c[]);
   bool organizado(arranjos x);
   arranjos arranjo;
   aranjarq ( &arranjo,"DADOS1.TXT");
   bool resp = organizado(arranjo);  
   if (resp == 1)
   {
      printf("O arquivo esta organizado\n");
   }
   else
   {
      printf("O arquivo nao esta organizado\n");
   } 
}
typedef struct matriz
{
   int** matriz;
   int linhas;
   int colunas;
}matriz;
void freestructmatriz(matriz* a)
{
   free(a);
}

matriz* leitura(char c[])
{
   FILE* arquivo = fopen(c, "rt");
   matriz* l;
   l = (matriz*) malloc(sizeof(matriz));
   l->linhas = 0;
   l->colunas = 0;
   int x = 0;
   int y = 0;
   char s[81];
   char auxs[81];
   int aux1 =0;
   int aux2 =0;
   fgets(s, 80, arquivo);
   while(!feof(arquivo))
   {
      l->linhas++;
      fgets(s, 80, arquivo);
   } 
   fclose(arquivo);
   FILE* arq = fopen(c, "rt");
   fgets(s, 80, arq);
   y = strlen(s) - 1;
   while(x<y)
   {
      while(x<y && s[x] != ' ')
      {
         x++;
      }
      if(x<y)
      {
         l->colunas=l->colunas+1;
      }
      while(x<y && s[x] == ' ')
      {
         x++;
      }
   }
   l->colunas = l->colunas+1;
   l->matriz=(int**)malloc(l->linhas*sizeof(int*));
   for(int i = 0; i <l->linhas; i++)
   {
      l->matriz[i] = (int*)malloc(l->colunas*sizeof(int));
   }
   int cont = 0;
   int cont2 = 0;
   while (cont2 < l->linhas)
   {
      while ( cont < l->colunas)
      {    
         while(s[aux1] != ' ' && s[aux1] != '\0' )
         {
            auxs[aux2]= s[aux1];
            auxs[aux2+1]='\0';
            aux2++;
            aux1++;
         }
         l->matriz[cont2][cont]=atoi(auxs);
         cont++;
         aux1++;
         aux2 = 0;
      }
      cont = 0;
      cont2++;
      aux1 = 0;
      fgets(s, 80, arq);
   }
   fclose(arq);
   return l;
}
matriz* transposta(matriz* c)
{
   matriz* transposta;
   transposta = (matriz*) malloc(sizeof(matriz));
   transposta->linhas = c->colunas;
   transposta->colunas = c->linhas;
   transposta->matriz=(int**)malloc(transposta->linhas*sizeof(int*));
   for(int i = 0; i <transposta->linhas; i++)
   {
      transposta->matriz[i] = (int*)malloc(transposta->colunas*sizeof(int));
   }

   for (int a = 0; a < transposta->linhas; a++)
   {
      
      for (int a2 = 0; a2 < transposta->colunas; a2++)
      {   
            transposta->matriz[a][a2] = c->matriz[a2][a];
      }   
   }
      void freestructmatriz(matriz* a);
   freestructmatriz(c);
   return transposta;
}
void metodo6()
{
   matriz* leitura(char c[]);
   matriz* transposta(matriz* c);
   matriz* t = transposta(leitura("DADOS.TXT"));
   //matriz* t = leitura("DADOS.TXT");
   for(int a = 0; a < t->linhas; a++)
   {
      for(int a2 = 0; a2< t->colunas; a2++)
      {
         printf("%i\t", t->matriz[a][a2]);
      }
      printf("\n");
   }   

}
bool matrizzero(matriz* a)
{
   bool resposta = 1;
   int aux1 = 0;
   int aux2 = 0;
   while( aux1 < a->linhas && resposta == 1)
   {
      while( aux2 < a->linhas && resposta == 1)
      {
         resposta =( a->matriz[aux1][aux2] == 0);
         aux2++;
      }
      aux1++;
      aux2 = 0;
   }
      void freestructmatriz(matriz* a);
   freestructmatriz(a);
   return resposta;   
}
void metodo7()
{
   matriz* leitura(char c[]);
   bool matrizzero(matriz* a);
   bool resp = matrizzero(leitura("DADOS.TXT"));
   if( resp == 1 )
   {
      printf("A matriz e nula\n"); 
   } 
   else
   {
      printf("A matriz nao e nula\n"); 
   }
}
bool igualdeadem(matriz* a, matriz* b)
{
   bool resposta = 1;
   int aux1 = 0;
   int aux2 = 0;
   resposta = (a->linhas == b->linhas && a->colunas == b->colunas);
   while( aux1 < a->linhas && resposta == 1)
   {
      while( aux2 < a->linhas && resposta == 1)
      {
         resposta =( a->matriz[aux1][aux2] == b->matriz[aux1][aux2]);
         aux2++;
      }
      aux1++;
      aux2 = 0;
   }
  void freestructmatriz(matriz* a);
   freestructmatriz(a);
   freestructmatriz(b);
   return resposta;
}
void metodo8()
{
   matriz* leitura(char c[]);
   bool igualdeadem(matriz* a, matriz* b);
   bool resp = igualdeadem(leitura("DADOS1.TXT"),leitura("DADOS2.TXT"));
   if( resp == 1 )
   {
      printf("As matrizes sao igual\n"); 
   } 
   else
   {
      printf("Aa matrizes nao sao iguais\n"); 
   }
}
matriz* somamatriz(matriz* a, matriz* b, int k)
{
   matriz* resposta = NULL;
   if( a->linhas == b->linhas && a->colunas == b->colunas)
   {
      resposta=(matriz*)malloc(sizeof(matriz));
      
      resposta->linhas = a->linhas;
      resposta->colunas=a->colunas;
      resposta->matriz = (int**)malloc(a->linhas*sizeof(int*));
      for(int aux = 0; aux < a->colunas; aux++)
      {
         resposta->matriz[aux] = (int*)malloc(a->colunas*sizeof(int)); 
      }
      for(int aux2 = 0; aux2 < resposta->linhas; aux2++)
      {
         for(int aux3 = 0; aux3 < resposta->colunas; aux3++)
         {
            resposta->matriz[aux2][aux3] = a->matriz[aux2][aux3]+(k*b->matriz[aux2][aux3]);
         }
      }
   }
     void freestructmatriz(matriz* a);
   freestructmatriz(a);
   freestructmatriz(b);
   return resposta;
}
void metodo9()
{
   matriz* leitura(char c[]);
   matriz* somamatriz(matriz* a, matriz* b, int k);
   int constante;
   printf("Digite o valor da constante para multiplicar a matriz\n");
   scanf("%i", &constante);
   matriz* resp = somamatriz(leitura("DADOS1.TXT"),leitura("DADOS2.TXT"), constante);
   if(resp != NULL)
   {
      for(int aux = 0; aux < resp->linhas; aux++)
      {
         for(int aux2 = 0; aux2 < resp->colunas; aux2++)
         {
            printf("%i\t", resp->matriz[aux][aux2]);
         }
         printf("\n");
      }
   }
   else
   {
      printf("Impossivel calcular a soma\n");
   }
}
matriz* multiplicacaomatriz(matriz* a, matriz* b)
{
   matriz* resposta = NULL;
   int num = 0;
   if( b->linhas ==  a->colunas )
   {
      resposta=(matriz*)malloc(sizeof(matriz));
      resposta->linhas = a->linhas;
      resposta->colunas = b->colunas;
      resposta->matriz = (int**)malloc(a->linhas*sizeof(int*));
      for(int aux = 0; aux < a->colunas; aux++)
      {
         resposta->matriz[aux] = (int*)malloc(b->colunas*sizeof(int)); 
      }
      
      for(int aux2 = 0; aux2 < resposta->linhas; aux2++)
      {
         for(int aux3 = 0; aux3 < resposta->colunas; aux3++)
         {
            for(int aux4 = 0; aux4 < a->colunas; aux4++)
            {
               num = (a->matriz[aux2][aux4]*b->matriz[aux4][aux3])+num;
            }
            resposta->matriz[aux2][aux3] = num;
            num = 0;
         }
      }
   }
     void freestructmatriz(matriz* a);
   freestructmatriz(a);
   freestructmatriz(b);
   return resposta;
}
void metodo10()
{
   matriz* leitura(char c[]);
   matriz* multiplicacaomatriz(matriz* a, matriz* b);
   matriz* resp = multiplicacaomatriz(leitura("DADOS1.TXT"),leitura("DADOS2.TXT"));
   if(resp != NULL)
   {
      for(int aux = 0; aux < resp->linhas; aux++)
      { 
         for(int aux2 = 0; aux2 < resp->colunas; aux2++)
         {
            printf("%i\t", resp->matriz[aux][aux2]);
         }
         printf("\n");
      }
   }
   else
   {
      printf("Impossivel calcular a soma\n");
   }
}
arranjos* ordenado(arranjos* a)
{
   int aux3 = 0;
   for(int aux = 0; aux < a->tamanho; aux++)
   {
      for (int aux2 = 1+aux; aux2< a->tamanho; aux2++)
      {
         if(a->array[aux] < a->array[aux2])
         {
            aux3 = a->array[aux] ;
            a->array[aux] = a->array[aux2];
            a->array[aux2]= aux3;
         }
      }
   }
   return a;
}
arranjos*  leituraarray(char c[])
{
   arranjos* resposta;
   resposta=(arranjos*)malloc(sizeof(arranjos));
   FILE* arquivo = fopen(c, "rt");
   char leitura[80];
   char vazio[1];
   char num[10];
   int x = 0;
   int z = 0;
   fgets(leitura, 80, arquivo);
   while(x < strlen(leitura)-1)
   {
      while(leitura[x] == ' ' && x < strlen(leitura)-1)
      {
         x++;
      }
      if(x < strlen(leitura)-1)
      {
         z++;
      }
      while(leitura[x] != ' ' && x < strlen(leitura)-1)
      {
         x++;
      }
   }
   resposta->tamanho = z;
   resposta->array=(int*)malloc(resposta->tamanho*sizeof(int));
   fclose (arquivo);
   FILE* arq = fopen(c, "rt");
   x = 0;
   int p = 0;
   int t =0;
   while (x < strlen(leitura) - 1)
   {
      while(leitura[x] == ' ' && leitura[x] !='\0')
      {
         num[p] = leitura[x];
         num[p+1] = '\0';
         x++;
         p++;
      }
      while(leitura[x] != ' ' && leitura[x] !='\0')
      {
         num[p] = leitura[x];
         num[p+1] = '\0';
         x++;
         p++;
      }
      x++;
      resposta->array[t] =atoi(num);
      p = 0;
      t++;
   }
   fclose (arq);
   return resposta;
}
void metodo11()
{
   arranjos*  leituraarray(char c[]);
   arranjos* ordenado(arranjos* a);
   arranjos* y= ordenado(leituraarray("DADOS.TXT"));
   for(int a = 0; a < y->tamanho; a++)
   {
      printf(" %i -", y->array[a]);
   }
   printf("\n");
}
int multiplicacaomatrizID(matriz* a, matriz* b)
{
   matriz* resposta = NULL;
   int num = 0;
   int resp = -1;
   if( b->linhas ==  a->linhas  && a->colunas ==  b->colunas )
   {
      resp = 1;
      resposta=(matriz*)malloc(sizeof(matriz));
      resposta->linhas = a->linhas;
      resposta->colunas = b->colunas;
      resposta->matriz = (int**)malloc(a->linhas*sizeof(int*));
      for(int aux = 0; aux < a->colunas; aux++)
      {
         resposta->matriz[aux] = (int*)malloc(b->colunas*sizeof(int)); 
      }
      int aux2 = 0;
      int aux3 = 0;
      int aux4 = 0;
      while( aux2 < resposta->linhas && resp == 1)
      {
         while( aux3 < resposta->colunas && resp == 1)
         {
            while(aux4 < a->colunas && resp == 1)
            {
               num = (a->matriz[aux2][aux4]*b->matriz[aux4][aux3])+num;
               aux4++;
            }
            resposta->matriz[aux2][aux3] = num;
            if(aux2 == aux3)
            {
               if (resposta->matriz[aux2][aux3] != 1)
               resp = 0;       
            }
            else
            {
               if (resposta->matriz[aux2][aux3] != 0)
               resp = 0;       
            }
            num = 0;
            aux3++;
            aux4 = 0;
         }
         aux3 = 0; 
         aux2++;
      }
   }
   return resp;
}
void metodo12()
{
   matriz* leitura(char c[]);
   int multiplicacaomatrizID(matriz* a, matriz* b);
   int resp = multiplicacaomatrizID(leitura("DADOS1.TXT"),leitura("DADOS2.TXT"));
   if(resp == 0)
   {
      printf("A multiplicacao nao resulta na matriz identidade\n");
   }
   else
   {
      if (resp == 1)
      {
         printf("A multiplicacao resulta na matriz identidade\n");
      }
      else
      {
         printf("Erro ao multiplicar\n");
      }     
   }
}

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
int main()
{
   int x = 0;
   do
   {
      printf("0-Sair do programa\n");
      printf("1-Gerar arquivo com numeros aleatorios\n");
      printf("2-Procurar um valor em um arranjo lido em um arquivo\n");
      printf("3-Comparar arranjos lidos de um arquivo\n");
      printf("4-Somar arranjos lidos em um arquivo, sendo um multipiclado por um escalar\n");
      printf("5-Verificar se um arquivo esta organizado em ordem crescente\n");
      printf("6-Ler uma matriz de arquivo e fazer a transposta\n");
      printf("7-Ler uma matriz de arquivo e dizer se e nula\n");
      printf("8-Ler duas matrizes de arquivos e dizer se sao iguais\n");
      printf("9-Somar matrizes lidas em um arquivo, sendo uma multipiclada por um escalar\n");
      printf("10-Multiplicar duas matrizes lidas em um arquivo\n");
      printf("11-Ordenar um arranjo lido em arquivo\n");
      printf("12-Ler duas matrizes de arquivo e dizer se a multiplicacao resulta na identidade\n");
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
            printf("Comando invalido, tente outro\n");
            x =1;
      }
   }while(x!=0);
   printf("Aperte enter para sair do programa\n");
   fflush( stdin);
   getchar();
   return (0);
}