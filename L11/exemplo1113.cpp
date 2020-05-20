#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;

int main()
{
   int procurarmenor(Arranjo <int> *a); 
   char n[]="DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int> (n);  
   int menor = a->procurarmenor();
   a->free();
   cout << "O menor valor do arranjo e: " << menor << endl;  
}
