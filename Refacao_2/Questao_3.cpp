#include <iostream>
#include <string>
/* Questao_3 - v0.0.1 - 14 / 11 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : g++ -o Questao_3    Questao_3    
    Windows: g++ -o Questao_3.exe  Questao_3
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./Questao_3   Windows:   Questao_3  */ 
using namespace std;
int main()
{
   bool maius(string s);
   string s;
   cout<<"Digite a string: "<<endl;
   getline(cin,s);
   if(!maius(s))
   {
      string converter(string s);
      s = converter(s);
      cout << s << endl; 
   }
   cin.get();
   return 0;
}

bool maius(string s)
{
   int aux = 1;
   bool r = true;
   while(aux < s.length() && r)
   {
      r = !('A' <= s[aux] && s[aux] <= 'Z');
      aux++;
   }
   return r;
}

string converter(string s)
{
   string aux;
   if(s!="")
   {
      aux+=s[0];
      for(int a = 1; a< s.length(); a++)
      {
         if('A' <= s[a] && s[a] <= 'Z')
         {
            aux+='_';
            aux+=(char)((int)s[a]+32);
         }
         else
            aux+=s[a];
      }
   }
   return aux;
}