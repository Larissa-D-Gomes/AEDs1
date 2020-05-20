#include <iostream>
#include "tipo_matrix.cpp"

using namespace std;

int main()
{
   char n[] = "DADOS1.TXT";
   char m[] = "DADOS2.TXT";
   Matrix <int> a (n);
   Matrix <int> b (m);
   bool r = a == b;
   if (r)
   {
      cout << "As matrizes sao iguais" << endl;
   }
   else
      cout << "As matrizes sao diferentes" << endl;
    
   a.free_matrix();
   b.free_matrix();
}