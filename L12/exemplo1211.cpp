#include <iostream>
#include "tipo_matrix.cpp"
using namespace std;
int main()
{
   int linhas = 0;
   int colunas = 0;
   int superior = 0;
   int inferior = 0;
   cout << "Digite o numero de linhas: "<< endl;
   cin >> linhas;
   cout<< "Digite o numero de colunas: "<< endl;
   cin >> colunas;
   cout << "Digite o limite inferior dos numeros a serem gerados: " << endl;
   cin >> inferior;
   cout << "Digite o limite superior dos numeros a serem gerados: " << endl;
   cin >> superior;
   if(superior > inferior && linhas > 0 && colunas > 0)
   {
      Matrix <int> a = Matrix <int>(linhas, colunas);
      a.random_matrix(inferior,superior);
      a.print_matrix(); 
      a.free_matrix();
   }
   else
      cout << "ERRO: Parametros invalidos " << endl; 
   
}
