#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;

int main()
{
   int procurarmaior(Arranjo <int>* a);
   char n[]="DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int> (n) ; 
   if (a->retornotamanho() < 0)
   {
      int maior = a->procurarmaior();
      a->free();
      cout << "O maior valor do arranjo e: " << maior << endl;  
}
}
