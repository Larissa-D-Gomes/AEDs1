#include <iostream>
#include "tipo_matrix.cpp"
using namespace std;
int main()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   int procurado = 0;
   if (a.return_linhas() > 1 )
   {
      cout << "Digite o valor procurado" << endl;
      cin >> procurado;
      int p = a.proc_c(procurado);
      if(p >= 0)
         cout << "O valor foi encontrado na coluna: " << p << endl;
      else
         cout << "O valor nao foi encontrado" << endl;
   }
   a.free_matrix();
   return 0;
}