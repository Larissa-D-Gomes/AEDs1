#include <iostream>
#include "tipo_matrix.cpp"

using namespace std;

int main()
{
   char n[] = "DADOS.TXT";
   int escalar = 0;
   Matrix <int> a = Matrix <int> ("DADOS.TXT");
   cout << "Digite o escalar: " << endl;
   cin >> escalar;
   a.escalar_matrix(escalar);
   a.print_matrix();
   a.free_matrix();

}