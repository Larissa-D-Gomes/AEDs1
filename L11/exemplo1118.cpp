#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;

int main()
{
   int procurado = 0;
   int l1 = 0;
   int l2 = 0;
   cout << "Digite o valor procurado: "<< endl;
   cin  >> procurado;
   char n[] ="DADOS.TXT";
   Arranjo <int>* z =new Arranjo <int> (n);
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

