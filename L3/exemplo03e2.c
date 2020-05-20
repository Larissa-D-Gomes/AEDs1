/* exemplo03e2 - v0.0.1 - 19 / 08 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o exemplo03e2    exemplo032e2    
    Windows: gcc -o exemplo03e2.exe exemplo03e2 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo03e2    Windows:   exemplo03e2  */ 
    #include <stdio.h>


int main()
{
   printf("exemplo03e2 - v0.0.1");
   printf("\nAuthor: Larissa Domingues Gomes-650525\n");
   int x = 0;
   void metodo0 ();
   void metodo1 ();
   void metodo2 ();
   void metodo3 ();
   void metodo4 ();
   void metodo5 ();
   void metodo6 ();
   void metodo7 ();
   void metodo8 ();
   void metodo9 ();
   void metodo10 ();
   void metodo11 ();
   void metodo12();
   do
   {
      printf("0-Sair do programa\n");
      printf("1-ler palavra do teclado e mostrar letras maiusculas\n");
      printf("2-ler palavra do teclado e contar e mostrar letras maiusculas\n");
      printf("3-ler palavra do teclado e contar e mostrar letras maiusculas comecando do final\n");
      printf("4-ler uma cadeia de caracteres, contar e mostrar as letras\n");
      printf("5-ler uma cadeia de caracteres e mostrar todos os digitos comecando do final\n");
      printf("6-ler uma cadeia de caracteres, contar e mostrar o que nao for letra nem digito\n");
      printf("7-ler um intervalo, quantidade de numeros a serem testados e mostrar multiplos de 5\n");
      printf("8-ler um intervalo, quantidade de numeros a serem testados e mostrar multiplos de 3 e nao multiplos de 5\n");
      printf("9-ler intervalo, quantidade de numeros e dizer quais sao impares\n"); 
      printf("10-ler um intervalo fracionario, numeros reais e dizer quais partes frecionarias estao dentro do intervalo\n");
      printf("11-ler uma cadeia de caracteres separar e mostrar todos simbolos nao alfanumericos\n");
      printf("12-dizer se a cadeia contem apenas numeros que nao sao letras\n");
      scanf("%i",&x);
      switch (x)
      {
         case 0:
            metodo0 ();
            break;
         case 1:
            metodo1 ();
            break;
         case 2:
            metodo2 ();
            break;
         case 3:
            metodo3 ();
            break;
         case 4:
            metodo4 ();
            break;
         case 5:
            metodo5 ();
            break;
         case 6:
            metodo6 ();
            break;
         case 7:
            metodo7 ();
            break;
         case 8:
            metodo8 ();
            break;
         case 9:
            metodo9 ();
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
            printf("Valor diferente dos propostos, tente outro\n");
            x=1;    
      }
   }while(x!=0);   
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
void metodo0 ()
{
   
}
void metodo1 ()
{
   char palavra[21] = "aa";
   int x = 0;
   printf("Digite uma palavra (com ate 20 caracteres) para o programa mostrar as letras maiusculas\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",palavra);
  
   while(palavra[x] != '\0')//ler ate o ultimo caracter
   {
      if(palavra[x] >= 'A' && palavra[x] <= 'Z')//verificar se esta entre as letras maiusculas
      {
         printf("%c\n", palavra[x]);//caso sim imprimir
      }
      ++x;//mudar a posicao das letras da string
     
      
   } 
}




void metodo2()
{
   char palavra[21] = "aa";
   int x = 0;
   int contador = 0;//contador para dizer quantas letras sao maiusculas
   printf("Digite uma palavra (com ate 20 caracteres) para o programa mostrar as letras maiusculas\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",palavra);
  
   while(palavra[x] != '\0')//ler ate o ultimo caracter
   {
      if(palavra[x] >= 'A' && palavra[x] <= 'Z')//verificar se esta entre as letras maiusculas
      {
         printf("%c\n", palavra[x]);//caso sim imprimir
         ++contador;//somar 1 ao contador cada vez que uma letra maiuscula for detectada
      }
      ++x;//mudar a posicao das letras da string
      
   } 
   printf("O total de letras maiusculas e %i\n",contador);//imprimir letras maiusculas
 
  
}


void metodo3()
{
   char palavra[21] = "aa";
   int x = 21;//x=valor do ultimo caracter possivel
   int contador = 0;//contador para dizer quantas letras sao maiusculas
   printf("Digite uma palavra (com ate 20 caracteres) para o programa mostrar as letras maiusculas\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",palavra);
  
   while(x >= 0 )//ler ate o primeiro caracter
   {
      if(palavra[x] >= 'A' && palavra[x] <= 'Z')//verificar se esta entre as letras maiusculas
      {
         printf("%c\n", palavra[x]);//caso sim imprimir
         ++contador;//somar 1 ao contador cada vez que uma letra maiuscula for detectada
      }
      --x;//mudar a posicao das letras da string
      
   } 
   
 printf("O total de letras maiuscula e %i\n",contador);   
}


void metodo4()
{
   char cadeia[21] = "aa";
   int x = 0;
   int contador = 0;//contador para dizer quantas letras 
   printf("Digite uma cadeia (com ate 20 caracteres) para o programa mostrar as letras\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",cadeia);
  
   while(cadeia[x] != '\0')//ler ate o ultimo caracter
   {
      if((cadeia[x] >= 'A' && cadeia[x] <= 'Z')||(cadeia[x] >= 'a' && cadeia[x] <= 'z'))//verificar se esta entre as letras maiusculas ou minusculas
      {
         printf("%c\n", cadeia[x]);//caso sim imprimir
         ++contador;//somar 1 ao contador cada vez que uma letra maiuscula for detectada
      }
      ++x;//mudar a posicao das letras da string
      
   } 
   printf("O total de letras e %i\n",contador);//imprimir letras maiusculas

}

void metodo5()
{
   char cadeia[21] = "aa";
   int x = 21;//x=valor do ultimo caracter possivel
   int contador = 0;//contador para dizer quantas letras 
   printf("Digite uma cadeia (com ate 20 caracteres) para o programa mostrar os digitos\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",cadeia);
  
   while(x >= 0 )//ler ate o primeiro caracter
   {
      if(cadeia[x] >= '0' && cadeia[x] <= '9')//verificar se esta entre as letras maiusculas ou minusculas
      {
         printf("%c\n", cadeia[x]);//caso sim imprimir
         ++contador;//somar 1 ao contador cada vez que uma letra maiuscula for detectada
      }
      --x;//mudar a posicao das letras da string
      
   } 
   printf("O total de letras e %i\n",contador);//imprimir letras maiusculas
}

void metodo6()
{
   char cadeia[21] = "aa";
   int x = 0;//x=valor do ultimo caracter possivel
   int contador = 0;//contador para dizer quantos sao os simbolos
   printf("Digite uma cadeia (com ate 20 caracteres) para o programa mostrar o que nao for letra nem digito\n");// ate 20, pois o caracter 21 sera \0
   scanf("%s",cadeia);
  
   while(cadeia[x] != '\0')
   {
      if((cadeia[x] >= 'A' && cadeia[x] <= 'Z')||(cadeia[x] >= 'a' && cadeia[x] <= 'z')||(cadeia[x] >= '0' && cadeia[x] <= '9'))//verificar se esta entre as letras ou numeros
      {
         
      }
      else
      {
         printf("%c\n",cadeia[x]);  
         ++contador;
      }
      ++x;//mudar a posicao das letras da string
      
   } 
   printf("O total de simbolos e %i\n",contador);//imprimir letras maiusculas


}

void metodo7()
{
   int menor = 0;
   int maior = 0;
   int q = 0;//variavel para definir a quantidade de numeros a serem testados
   int teste[q];
   int i = 0 ;
   int contador = 0;
   printf("Digite um valor e em seguida um valor maior para definir um intervalo entre esses valores\n ");
   scanf("%i%i",&menor,&maior);
   printf("O intervalo e [%i,%i]\n",menor,maior);
   printf("Defina a quantidade de numeros a serem testados\n");
   scanf("%i",&q);
   printf("A quantidade de numeros a serem testados e %i\n",q);
   printf("Digite %i numeros para serem testado\n",q);
   while(i<q)
   {
      scanf("%i",&teste[i]);//incluir o numero no vetor
      if(teste[i] > menor && teste[i] < maior)//teste para ter certeza que o numero esta no intervalo
      {
         ++i;//caso sim passar para o proximo espaco do vetor
      
      }
      else//caso nao solicitar outro numero para entrar no mesmo espaco
      {
         printf("\nO numero solicitado nao esta no intervalo [%i,%i] tente outro\n",menor,maior);
      }
   }
   printf("Agora os valores serao testados e aqueles que forem multiplos de 5 serao mostrados\n");
   i = 0;
   while(i<q)
   {
      if(teste[i] % 5 == 0)
      {
         printf("%i\n",teste[i]);
         ++contador; 
      }
      ++i;
   }
   printf("O total de numeros multiplos de 5 foi %i\n", contador);
}

void metodo8()
{
   int menor = 0;
   int maior = 0;
   int q = 0;//variavel para definir a quantidade de numeros a serem testados
   int teste[q];
   int i = 0 ;
   int contador = 0;
   printf("Digite um valor e em seguida um valor maior para definir um intervalo entre esses valores\n ");
   scanf("%i%i",&menor,&maior);
   printf("O intervalo e [%i,%i]\n",menor,maior);
   printf("Defina a quantidade de numeros a serem testados\n");
   scanf("%i",&q);
   printf("A quantidade de numeros a serem testados e %i\n",q);
   printf("Digite %i numeros para serem testado\n",q);
   while(i<q)
   {
      scanf("%i",&teste[i]);//incluir o numero no vetor
      if(teste[i] > menor && teste[i] < maior)//teste para ter certeza que o numero esta no intervalo
      {
         ++i;//caso sim passar para o proximo espaco do vetor
      }
      else//caso nao solicitar outro numero para entrar no mesmo espaco
      {
         printf("\nO numero solicitado nao esta no intervalo [%i,%i] tente outro\n",menor,maior);
      }
   }
   printf("Agora os valores serao testados e aqueles que forem multiplos de 3 e nao forem multiplos de 5 serao mostrados\n");
   i = 0;
   while(i<q)
   {
      if(teste[i] % 3 == 0 && teste[i] % 5 != 0)
      {
         printf("%i\n",teste[i]);
         ++contador; 
      }
      ++i;
   }
   printf("O total de numeros multiplos de 3 e nao multiplos de 5 foi %i\n", contador);
  
}


void metodo9()
{
   float menor = 0;
   float maior = 0;
   int q = 0;//variavel para definir a quantidade de numeros a serem testados
   float teste[q];
   int i = 0 ;
   int contador = 0;
   int inteiro = 0;

   printf("Digite um numero para definir um intervalo\n");
   scanf("%f",&menor);
   printf("\nDigite um numero maior que o anterior para definir o intervalo\n");
   while (maior == 0)
   {
      scanf("%f",&maior);
      if (maior > menor)
      {
         printf("\nO intervalo e [%f,%f]\n", menor, maior);
      }
      else
      {
         printf("\nO numero escolhido (%f) nao e maior que (%f)", maior, menor);
         maior=0;
         printf("\nDigite outro numero maior que (%f) para definir o intervalo\n",menor);
      }
   }
   printf("Defina a quantidade de numeros a serem testados\n");
   scanf("%i",&q);
   printf("A quantidade de numeros a serem testados e %i\n",q);
   printf("Digite %i numeros para serem testado\n",q);
   while(i<q)
   {
      scanf("%f",&teste[i]);//incluir o numero no vetor
      if(teste[i] > menor && teste[i] < maior)//teste para ter certeza que o numero esta no intervalo
      {
         ++i;//caso sim passar para o proximo espaco do vetor
      }
      else//caso nao solicitar outro numero para entrar no mesmo espaco
      {
         printf("\nO numero solicitado nao esta no intervalo [%f,%f] tente outro\n",menor,maior);
      }
   }
   printf("Agora os valores serao testados e aqueles que forem impares (partes inteiras) serao mostrados\n");
   i = 0;
   while(i<q)
   {
      inteiro = (int)teste[i];
      if(inteiro % 2 != 0)
      {
         printf("%i\n",inteiro);
         ++contador; 
      }
      ++i;
   }
   printf("O total de numeros impares foi %i\n", contador);

}



void metodo10()
{
   float menor = 0;
   float maior = 0;
   int q = 0;//variavel para definir a quantidade de numeros a serem testados
   float teste[q];
   int i = 0 ;
   int contador = 0;
   float frac = 0;


   printf("Digite um numero menor que 1 e diferente de 0 para definir um intervalo\n");
   while(menor == 0)
   {
      scanf("%f",&menor);
      if (menor < 1 && menor != 0)
      {
         printf("\nO numero escolhido foi %f", menor);
      }
      else
      {
         printf("\nO numero escolhido (%f) nao e fracionario", menor);
         maior=0;
         printf("\nDigite um numero fracionario para definir o intervalo\n");
      }
   }

   printf("\nDigite um numero maior que o anterior e fracionario para definir o intervalo\n");
   while (maior == 0)
   {
      scanf("%f",&maior);
      if (maior > menor && maior<1 && menor !=0)
      {
         printf("\nO intervalo e [%f,%f]\n", menor, maior);
      }
      else
      {
         if(maior>=0)
         {
            printf("\nO numero escolhido (%f) e maior que 1 ou igual a 0", maior);
            maior=0;
            printf("\nDigite outro numero fracionario para definir o intervalo\n",menor);
         }
         else
         {
            printf("\nO numero escolhido (%f) nao e maior que (%f)", maior, menor);
            maior=0;
            printf("\nDigite outro numero maior que (%f) para definir o intervalo\n",menor);
         }
      }
   }
   printf("Defina a quantidade de numeros a serem testados\n");
   scanf("%i",&q);
   printf("A quantidade de numeros a serem testados e %i\n",q);
   printf("Digite %i numeros para serem testado\n",q);
   while(i<q)
   {
      scanf("%f",&teste[i]);//incluir o numero no vetor
      ++i;
   }
         
   printf("Agora os valores serao testados e aqueles que tem as partes fracionarias dentro do intervalo serao mostrados\n");
   i = 0;
   while(i<q)
   {
      frac = teste[i]-(int)teste[i];
      if(frac > menor && frac < maior)
      {
         printf("%f\n",frac);
         ++contador; 
      }
      ++i;
   }
   printf("O total de numeros que contem sua parte fracionaria dentro do intervalo foi %i\n", contador);

 
}



void metodo11()
{
   char cadeia[21] = "aa";
   int x = 0;//variavel para mudar a posicao de leitura
   int i = 1; //variavel para mudar o tamanho do verto simbolos
   int y = 0;//variavel para mudar a posicao do vetor simbolos
   char simbolos[i];
 
   printf("Digite uma cadeia de caracteres (com ate 20) para o programa separar simbolos nao alfanumericos\n");
   scanf("%s",cadeia);
   while (cadeia[x] != '\0' )
   {
      if(cadeia[x]>='A' && cadeia[x]<='Z' || cadeia[x]>='a' && cadeia[x]<='z' || cadeia[x] >='0' && cadeia[x]<='9')
      {
         ++x;//mudar a posicao de leitura do if
      }
      else
      {
         ++i;//mudar o tamanho de simbolos
         simbolos[y]= cadeia[x];// armaenar os simbolos
         ++y;//mudar a posicao de leitura de simbolos para uma proxima
         ++x;//mudar a posicao de leitura do if
      }
   }
   if(y==0)
   {
      printf("Nenhum caracter nao alfanumerico foi encontrado\n");
   }
   else
   {
      printf("Os simbolos nao alfanumericos digitados sao %s\n", simbolos);
   }
 
}
void metodo12()
{
   char cadeia[21] = "aa";
   int x = 0;
   int sinalizador = 0;


   printf("Digite uma cadeia de caracteres (com ate 20) para o programa analisar se a cadeia nao contem letras\n");
   scanf("%s",cadeia);
   while (cadeia[x] != '\0' )
   {
      if(cadeia[x]>='A' && cadeia[x]<='Z' || cadeia[x]>='a' && cadeia[x]<='z')
      {
         printf("A cadeia contem pelo menos uma letra\n");
         x=21;
         sinalizador = 1;
      }
      else
      {
         ++x;
      }
   }
   if(sinalizador == 0)
   {
      printf("\nA cadeia nao contem nenhuma letra\n");
   }
    
}
