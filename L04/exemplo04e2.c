/* exemplo04e2 - v0.0.1 - 24 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo04e2    exemplo04e2    
    Windows: gcc -o exemplo04e2.exe exemplo04e2
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo04e2   Windows:   exemplo04e2  */ 
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
   void metodo7();
   void metodo8();
   void metodo9();
   void metodo10();
   void metodo11();
   void metodo12();
   printf("exemplo04e2- v0.0.1");
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
      printf("7-ler uma sequencia de caracteres, contar e separar os caracteres pares\n");
      printf("8-ler uma cadeia de caracteres do teclado e contar os simbolos alfanumericos\n");
      printf("9-ler uma cadeia de caracteres do teclado e separar os simbolos alfanumericos\n");
      printf("10-ler varias cadeias de caracteres do teclado e contar os simbolos alfanumericos\n");
      printf("11-ler varias cadeias de caracteres do teclado e contar os simbolos alfanumerico e espacos\n");
      printf("12-ler duas cadeias de caracteres e dizer qual tem menos digitos\n");
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
void metodo7 ()
{
   int quantidade = 0;
   char c = 0;
   int comparador = 0;
   int contador =0;
   int z = 0;
   int i = 0;
   static char pares [80];
   printf("Digite a quantidade de caracteres que deseja analisar, o programa retornará os digitos pares\n");
   scanf("%i", &quantidade);
   while (comparador != quantidade)
   {
      printf("Digite o caractere desejado\n");
      getchar();
      scanf ("%c", &c);
      if (c >= '0' && c <= '9') 
      {
         z = (int) c;
      
         if (z % 2 == 0)
         {
            pares[i] = c;
            i++;
            contador++;
         
         }
      }
   
      comparador++;
   } 
   pares[i]='\0';
   printf("O números pares são %s e total de numeros pares e %i\n", pares, contador);
}

void metodo8()
{
   char c[21];
   int total = 0;
   int contadorAF(char x[]);
   printf("Digite uma cadeia com ate 20 caracteres para contar todos os digitos alfanumericos\n");
   scanf("%s", c);
   total = contadorAF(c);
   printf("O total de simbolos alfanumericos e %i \n", total);
}
int contadorAF(char x[])
{
   int contador = 0;
   int i=0;
   while (x[i]!='\0')
   {
      if ((x[i]>='A' && x[i]<='Z') ||(x[i]>='a' && x[i]<='z')||(x[i]>='0' && x[i]<='9'))
      {
         contador++;
      }
      i++;
   }
   return contador;  
}
void metodo9()
{
   char c[20];
   char* separadorAN(char x[]);
   char* simbolos; 
   printf("Digite uma cadeia com ate 20 caracteres para o programa separar os simbolos alfanumericos\n");
   scanf("%s", c);
   simbolos = separadorAN(c);
   printf("Os simbolos alfanumericos da cadeia sao %s\n",simbolos);
}
char* separadorAN(char x[])
{
   static char an[21]; 
   int i = 0;
   int z = 0;
   while (x[i] !='\0')
   {
      if ((x[i]>='A' && x[i]<='Z') ||(x[i]>='a' && x[i]<='z')||(x[i]>='0' && x[i]<='9'))
      {
         an[z] = x[i];
         z++;
      }
      i++;
   }
   an[z] = '\0';
   return &(an[0]);
}
void metodo10()
{
   int quantidade = 0;
   int comparador = 0;
   char c[21] ;
   int total = 0;
   int totalAN (char x[]);
   printf("Digite a quantidade de cadeias de caracteres que deseja analisar\n");
   scanf ("%i", &quantidade);
   for (comparador = 0; comparador < quantidade; comparador++)
   { 
      printf("Digite uma cadeia com ate 20 caracteres que deseja analisar\n");
      scanf("%s", c);
      total = totalAN (c);
   }
   printf ("O total de caracteres alfanumericos e %i\n", total); 
}
int totalAN (char x[])
{
   static int contador = 0;
   int i = 0 ;
   while (x[i] !='\0')
   {
      if ((x[i]>='A' && x[i]<='Z') ||(x[i]>='a' && x[i]<='z')||(x[i]>='0' && x[i]<='9'))
      {
         contador++;
      }
      i++;
   }


   return contador;
}
void metodo11()
{
   int quantidade = 0;
   int comparador = 0;
   int i = 0;
   char c[21] ;
   char h;
   int totalANE (char x[]);
   int total = 0;
   printf("Digite a quantidade de cadeias de caracteres que deseja analisar\n");
   scanf ("%i", &quantidade);
   getchar();
   for (comparador = 0; comparador < quantidade; comparador++)
   { 
      i = 0;
      printf("Digite uma cadeia com ate 20 caracteres que deseja analisar\n");
      do
      {
         h = getchar();
         c[i] = h;
         i++;
      }while(h != '\n');
   
      c[i-1]='\0';
      total =totalANE (c);
   }
   printf ("Os caracteres alfanumericos e espacos sao %i\n", total); 
}
int totalANE (char x[])
{
   static int contador = 0;
   int i = 0 ;
   while (x[i] !='\0')
   {
      if ((x[i]>='A' && x[i]<='Z') ||(x[i]>='a' && x[i]<='z')||(x[i]>='0' && x[i]<='9')||(x[i]>=' '))
      {
         contador++;
      }
      i++;
   }


   return contador;
}
void metodo12()
{
   char c1[81];
   char c2[81];
   int i = 0;
   int z = 0;
   int contador(char x[]);
   printf("Digite a primeira cadeia (ate 81 caracteres)\n");
   scanf("%s",c1);
   z = contador(c1);
   printf("Digite a segunda cadeia(ate 81 caracteres)\n");
   scanf("%s",c2);
   i = contador(c2);
   if ( i < z)
   {
      printf("A cadeia2 possui a menor quantidade de digitos\n");
   }
   else
   {
      if ( z < i)
      {
         printf("A cadeia1 possui a menor quantidade de digitos\n");
      }
      else 
      {
         printf("As cadeias possuem a mesma quantidade de digitos\n");
      } 
   }
   
}
int contador(char x[])
{
   int z = 0;
   int i = 0;
   while (x[i] !='\0')
   {
      if (x[i]>='0' && x[i]<='9')
      {
      z = z+1;
      }
      i++;
   }
   return z;
}