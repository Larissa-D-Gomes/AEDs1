#include <iostream>
#include "tipo_matrix.cpp"

using namespace std;

int main()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a = Matrix <int> (n);
   bool r = a.id_matrix();
   if(r)
      cout << "A matriz e identidade " << endl;
   else
      cout << "A matriz nao e identidade" << endl;
   a.print_matrix();
   a.free_matrix();
}