#include <iostream>
#include "tipo_matrix.cpp"
using namespace std;
int main()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   int procurado = 0;
   a.transposta();
   a.print_matrix();
   a.free_matrix();
   return 0;
}