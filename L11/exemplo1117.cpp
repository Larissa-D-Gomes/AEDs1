#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;
int main()
{
   char n[] ="DADOS.TXT";
   Arranjo <int>* z = new Arranjo <int> (n);
   bool resp = z->arrayord();
   z->free();
   if(resp)
   {
      cout << "O arranjo esta ordenado" << endl;
   }
   else
   {  
      cout << "O arranjo nao esta ordenado" << endl;
   }
}

