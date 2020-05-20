#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;

int main()
{
   char n[]="DADOS.TXT";
   Arranjo <int> *a= new Arranjo <int>(n)  ; 
   double m = a->mediaarray();
   a->free();
   cout << "A media das entradas do arranjo e: " << m << endl;  
}
