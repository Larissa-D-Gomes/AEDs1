#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;

int main()
{
   char n[]="DADOS.TXT";
   Arranjo <int> *a = new Arranjo <int> (n); 
   int soma = a->somaarranjo();
   a->free();
   cout << "A soma das entradas do arranjo e: " << soma << endl;  
}
