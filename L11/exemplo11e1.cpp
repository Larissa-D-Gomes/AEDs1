#include <iostream>
#include "tipo_array.cpp"
using namespace std;
int main()
{
   char n[]= "DADOS1.TXT";
   char m[]= "DADOS2.TXT";
   Arranjo <int>* a = new Arranjo <int> (n);
   Arranjo <int>* b =  new Arranjo <int> (m); 
  
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