#include <iostream>
#include "tipo_matrix.cpp"
using namespace std;
int main()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   int constante  = 0;
   if (a.return_linhas() > 1 )
   {
      cout << "Digite a constante que deseja multiplicar a segunda linha da matriz" << endl;
      cin >> constante ;
      a.multp_soma(constante);
      a.print_matrix();
   }
   a.free_matrix();
   return 0;
}