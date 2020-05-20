#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;

int main()
{
   int c = 0;
   char n[]="DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int>(n);
   cout << "Digite o escalar: "<< endl;
   cin >> c;
   a->escalar(c);
   a->printarray(); 
   a->free(); 
}
