#include <iostream>
#include "tipo_matrix.cpp"
using namespace std;
int main()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   int procurado = 0;
   bool r = a.matriz_ql();
   cout << r << endl;
   a.free_matrix();
   return 0;
}