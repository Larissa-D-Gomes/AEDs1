/* exemplo0416 - v0.0.1 - 23 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo0416    exemplo0416   
    Windows: gcc -o exemplo0416.exe exemplo0416 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo0416   Windows:   exemplo0416  */ 
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
   void metodo4();
   void metodo5();
   void metodo6();
   printf("exemplo0416- v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   do 
   {
      printf("0-sair do programa\n");
      printf("1-ler um intervalo, uma certa quantidade de valores e dizer quantos estao dentro do intervalo\n");
      printf("2-ler uma sequancia de caracteres e contar as letras maiusculas\n");
      printf("3-ler uma cadeia de caracteres e contar as letras maiusculas\n");
      printf("4-ler uma cadeia de caracteres e separar as letras maiusculas\n");
      printf("5-ler uma cadeia de caracteres e contar as letras\n");
      printf("6-ler uma cadeia de caracteres e separar as letras\n");
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
         case 4:
            metodo4();
            break;
         case 5:
            metodo5();
            break;
         case 6:
            metodo6();
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

char* separdorLM(char x[]);

void metodo4()
{
   
   char c[21];
   printf("Digite uma cadeia com ate 20 caracteres\n");
   scanf("%s",c);
   char* y = separdorLM(c);
   printf("A letras maiuscula sao (%s)\n", y);
}
char* separdorLM(char x[])
{
   int i = 0;
   int z = 1;
   static char lm[80] ;
   while ( x[i] != '\0')
   {
      if(x[i]>='A' && x[i]<='Z')
      {
         lm[(z-1)]=x[i];
         z++;
      } 
      i++; 
   } 
   lm[z-1] ='\0';
   return &(lm[0]);
} 
void metodo5()
{
   char c[21];
   int contarletras (char x[]);
   printf("Digite uma cadeia com ate 20 caracteres para o programa separara as letras\n");
   scanf("%s",c);
   int y = contarletras (c);
   printf("O total de letras na cadeia e %i\n", y);
}
int contarletras(char x[])
{
   int contador= 0;
   int i = 0;
   while (x[i]!= '\0')
   {
      if ((x[i] >= 'A' && x[i]<='Z') || (x[i] >= 'a' && x[i] <= 'z'))
      {
         contador++;
      }
      i++;  
   }
   return contador;
}
void metodo6()
{
   char c[21];
   char* separarletras (char x[]);
   printf("Digite uma cadeia com ate 20 caracteres para o programa separara as letras\n");
   scanf("%s",c);
   char* y = separarletras (c);
   printf("As letras da cadeia sao %s\n", y);
   
}
char* separarletras(char x[])
{
   int z = 0;
   int i = 0;
   static char letras[21];
   while (x[i]!= '\0')
   {
      if ((x[i] >= 'A' && x[i]<='Z') || (x[i] >= 'a' && x[i] <= 'z'))
      {
         letras[z] = x[i];
         z++;
      }
      i++;  
   }
   letras[z]='\0';
   return &(letras[0]);
}