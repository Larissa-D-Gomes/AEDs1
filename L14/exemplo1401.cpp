#include <iostream>
#include <string>
#include <cstring>
#include "Converter.hpp"

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
      cout << "1-Converter para inteiro" << endl;
      cout << "2-Converter para real" << endl;
      cout << "3-Converter para bool" << endl;
      cout << "4-Verificar se uma string esta contida na outra" << endl;
      cout << "5-Converter letras minusculas para maiusculas" << endl;
      cout << "6-Converter letras maiusculas para minusculas" << endl;
      cout << "7-Substituir um caracter por outro" << endl;
      cout << "8-Split com espaco" << endl;
      cout << "9-Cripitografar em Cifra Cesar" << endl;
      cout << "10-Decodificar em Cifra Cesar" << endl;
      cout << "11-Split com caracteres" << endl;
      cout << "12-Inverter a string" << endl;
      cin >> x;
      cin.get();
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
            x = 1;
            cout << "Valor invalido, tente outro"<< endl;
      } 
   
   }while(x!=0);
   cout << "Aperte ENTER para sair do programa" << endl;
   cin.get();
   return 0;
}

void metodo0()
{
}
void metodo1()
{
   char m[6];
   cout << "Digite o numero [char]" << endl;
   cin >> m;
   cin.get();
   Converter a(m);
   int x =a.get_int();
   if(!a.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<a.retorno_erro() <<"] "<<a.mensagem()<<endl;
   string n;
   cout << "Digite o numero [string]" << endl;
   getline(cin, n);
   Converter b(n);
   x = b.get_int();
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo2()
{
   char m[6];
   cout << "Digite o numero [char]" << endl;
   cin >> m;
   cin.get();
   Converter a(m);
   double x =a.get_double();
   if(!a.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<a.retorno_erro() <<"] "<<a.mensagem()<<endl;
   string n;
   cout << "Digite o numero [string]" << endl;
   getline(cin, n);
   Converter b(n);
   x = b.get_double();
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo3()
{
   string n;
   cout << "Digite o valor logico [string]" << endl;
   getline(cin, n);
   Converter b(n);
   bool x = b.get_bool();
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo4()
{
   string n;
   cout << "Digite a string [string]" << endl;
   getline(cin, n); 
   Converter b(n);
   string m;
   cout << "Digite o parametro para verificar se esta contido [string]" << endl;
   getline(cin, n); 
   bool x = b.contidos(n);
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo5()
{
   string n;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   Converter b(n);
   string x =b.maiusculas();
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo6()
{
   string n;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   Converter b(n);
   string x =b.minusculas();
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo7()
{
   string n;
   char o;
   char m;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   Converter b(n);
   cout << "Digite o caracter que deseja remover" << endl;
   cin >> o;
   cin.get();
   cout << "Digite o caracter que deseja acrescentar" << endl;
   cin >> m;
   cin.get();
   string x =b.set_char(o,m);
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo8()
{
   string n;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   Converter b(n);
   string* x =b.split();
   int t = b.t_split(x);
   if(!b.retorno_exerro())
   {
      for(int aux = 0; aux < t; aux++)
         cout<< x[aux] << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo9()
{
   string n;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   Converter b(n);
   string x =b.cifra_de_cesar();
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo10()
{
   string n;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   Converter b(n);
   string x =b.cifra_de_cesar_decrip();
   if(!b.retorno_exerro())
   {
      cout<< x << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}
void metodo11()
{
   string n;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   char c;
   cout << "Digite o caracter para o split: "<< endl;
   cin >> c;
   cin.get();
   Converter b(n);
   string* x =b.split(c);
   int t = b.t_split(x);
   if(!b.retorno_exerro())
   {
      for(int aux = 0; aux < t; aux++)
         cout<< x[aux] << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}

void metodo12()
{
   string n;
   cout << "Digite a string" << endl;
   getline(cin, n); 
   Converter b(n);
   b.inverter();
   if(!b.retorno_exerro())
   {
      cout<< b.get_string() << endl;
   }
   else
      cout << "ERRO["<<b.retorno_erro() <<"] "<<b.mensagem()<<endl;
}