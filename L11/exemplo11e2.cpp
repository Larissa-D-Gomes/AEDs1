#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "tipor_array.hpp"
/* exemplo11e2 - v0.0.1 - 21 / 10 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : g++ -o exemplo11e2    exemplo11e2    
    Windows: g++ -o exemplo11e2.exe  exemplo11e2 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo11e2   Windows:   exemplo11e2  */ 
using namespace std;
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
   cout << "exemplo10e2- v0.0.1" << endl;
   cout << "Author: Larissa Domingues Gomes-650525" <<endl;
   do
   {
      cout << "0-Sair do programa" << endl;
      cout << "1-Criar um arranjo de numeros aleatorios e escrever em arquivo" << endl;
      cout << "2-Ler um arranjo de arquivo e procurar o maior valor" << endl;
      cout << "3-Ler um arranjo de arquivo e procurar o menor valor" << endl;
      cout << "4-Ler um arranjo de arquivo e somar suas entradas" << endl;     
      cout << "5-Ler um arranjo de arquivo e calcular a media de suas entradas" << endl;
      cout << "6-Ler um arranjo de arquivo e verificar se e nulo" << endl;
      cout << "7-Ler um arranjo de arquivo e verificar se esta organizado" << endl;
      cout << "8-Ler um arranjo de arquivo e procurar um valor entre parametros" << endl;
      cout << "9-Ler um arranjo de arquivo e escalar por uma constante" << endl;
      cout << "10-Ler um arranjo de arquivo e ordena-lo" << endl;
      cout << "11-Ler dois arranjos de arquivo e verificar se sao diferentes" << endl;
      cout << "12-Ler dois arranjos de arquivo e subtrai-los" << endl;
      cin >> x;    
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
            x=1;
            cout << "Valor invalido, tente outro"<< endl;
      }
   }while(x != 0);
   cout << "Aperte ENTER para sair do programa" << endl;
   cin.get();
   cin.get();
   return 0;
}
void metodo0()
{
}
void metodo1()
{
   int quantidade = 0;
   int superior = 0;
   int inferior = 0;
   do
   {
      cout << "Digite a quantidade de elementos a serem gerados: " << endl;
      cin >> quantidade;
   }while(quantidade <= 0);
 
   cout << "Digite o limeite superior: "<< endl;
   cin >> superior;
   cout << "Digite o limite inferior: "<< endl;
   cin >> inferior;
   srand(time(0));
   if( superior > inferior){
      Arranjo <int>* x = new Arranjo <int> (quantidade); 
      x->escreverdadosale(inferior, superior);
      cout << "O arquivo foi criado"<< endl;
   }
   else
   {
      cout<< "Erro, limites invalidos"<< endl;
   }
}
void metodo2()
{
   int procurarmaior(Arranjo <int>* a);
   char n[]="DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int> (n) ; 
   if (a->retornotamanho() > 0)
   {
      int maior = a->procurarmaior();
      a->free();
      cout << "O maior valor do arranjo e: " << maior << endl;  
   }
}
void metodo3()
{
   int procurarmenor(Arranjo <int> *a); 
   char n[]="DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int> (n);  
   if (a->retornotamanho() > 0)
   {
      int menor = a->procurarmenor();
      a->free();
      cout << "O menor valor do arranjo e: " << menor << endl;  
   }
}
void metodo4()
{
   char n[]="DADOS.TXT";
   Arranjo <int> *a = new Arranjo <int> (n); 
   if (a->retornotamanho() > 0)
   {
      int soma = a->somaarranjo();
      a->free();
      cout << "A soma das entradas do arranjo e: " << soma << endl;  
   }
}
void metodo5()
{
   char n[]="DADOS.TXT";
   Arranjo <int> *a= new Arranjo <int>(n)  ; 
   if (a->retornotamanho() > 0)
   {
      double m = a->mediaarray();
      a->free();
      cout << "A media das entradas do arranjo e: " << m << endl;  
   }
}
void metodo6()
{
   char n[] ="DADOS.TXT";
   Arranjo <int>* z = new Arranjo <int> (n);
   if (z->retornotamanho() > 0)
   {
      bool resp = z->arrayzero();
      z->free();
      if(resp)
      {
         cout << "O arranjo e nulo" << endl;
      }
      else
      {  
         cout << "O arranjo nao e nulo" << endl;
      }
   }
}
void metodo7()
{
   char n[] ="DADOS.TXT";
   Arranjo <int>* z = new Arranjo <int> (n);
   if (z->retornotamanho() > 0)
   {
      bool resp = z->arrayord();
      z->free();
      if(resp)
      {
         cout << "O arranjo esta ordenado" << endl;
      }
      else
      {  
         cout << "O arranjo nao esta ordenado" << endl;
      }
   }
}
void metodo8()
{
   int procurado = 0;
   int l1 = 0;
   int l2 = 0;
   cout << "Digite o valor procurado: "<< endl;
   cin  >> procurado;
   char n[] ="DADOS.TXT";
   Arranjo <int>* z =new Arranjo <int> (n);
   if (z->retornotamanho() > 0)
   {
      cout << "Digite o limite 1" << endl;
      cin >> l1;
      cout << "Digite o limite 2" << endl;
      cin >> l2;
      if(l1 < l2 && l1 > 0 && l2 <= z->retornotamanho())
      {
         bool resp = z->acharvalor(l1, l2, procurado);
         z->free();
         if(resp)
         {
            cout << "O valor esta entre os limites definidos" << endl;
         }
         else
         {  
            cout << "O valor nao esta entre os limites definidoss" << endl;
         }
      }
      else
      {
         cout << "Erro: Limites invalidos"<< endl;
      }
   }
}
void metodo9()
{
   int c = 0;
   char n[]="DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int>(n);
   if (a->retornotamanho() > 0)
   {
      cout << "Digite o escalar: "<< endl;
      cin >> c;
      a->escalar(c);
      a->printarray(); 
      a->free(); 
   }
}
void metodo10()
{
   char n[]= "DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int> (n);
   if (a->retornotamanho() > 0)
   {
      a->sort();
      a->printarray();
   }
}
void metodo11()
{
   char n[]= "DADOS1.TXT";
   char m[]= "DADOS2.TXT";
   Arranjo <int>* a = new Arranjo <int> (n);
   Arranjo <int>* b = new Arranjo <int> (m); 
   if (a->retornotamanho() > 0 && b->retornotamanho() > 0)
   {
      bool r =(*a != b);
      if(r)
      {
         cout << "Os arrays sao iguais" << endl;
      }
      else
         cout<< "Os arrays sao diferentes "<< endl;
      a->free();
      b->free();
   }
}
void metodo12()
{
   char n[]= "DADOS1.TXT";
   char m[]= "DADOS2.TXT";
   Arranjo <int> a  (n);
   Arranjo <int> b  (m); 
   if (a.retornotamanho() > 0 && b.retornotamanho() > 0)
   {
      Arranjo <int> c = (a-b);
      c.printarray();
      c.free();
      a.free();
      b.free();
   }

  
}