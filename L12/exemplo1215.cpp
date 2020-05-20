#include <iostream>
#include "tipo_matrix.cpp"
using namespace std;
int main()
{
   char n[] = "DADOS1.TXT";
   char m[] = "DADOS2.TXT";
   Matrix <int> a (n);
   Matrix <int> b (m);
   if (a.return_linhas() == b.return_linhas() && a.return_colunas() == b.return_colunas())
   {
      Matrix <int> c (a + b);
      c.print_matrix();
      c.free_matrix();
   }
   a.free_matrix();
   b.free_matrix();
   return 0;
}