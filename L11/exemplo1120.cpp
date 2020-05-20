#include <iostream>
#include "tipo_array.cpp"
using namespace std;
int main()
{
   char n[]= "DADOS.TXT";
   Arranjo <int>* a = new Arranjo <int> (n);
   a->sort();
   a->printarray();
}