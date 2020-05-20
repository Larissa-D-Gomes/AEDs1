#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tipo_array.cpp"
using namespace std;
int main()
{
   char n[] ="DADOS.TXT";
   Arranjo <int>* z = new Arranjo <int> (n);
   bool resp = z->arrayzero();
   z->free();
   if(resp)
   {
      cout << "O arranjo e nulo" << endl;
   }
   else
   {  
      cout << "O arranjo nao e nulo" << endl;
   }
}

