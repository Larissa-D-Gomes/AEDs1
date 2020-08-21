#include "Array.hpp"
#include "Matrix.hpp"
void metodo0();
void metodo1();
void metodo2();
void metodo3();
void metodo4();
void metodo5();
void metodo6();
void metodo7();
void metodo8();
void metodo9();
void metodo10();
using namespace std;
int main()
{
   int x = 0;
   cout << "exemplo10e2- v0.0.1" << endl;
   cout << "Author: Larissa Domingues Gomes-650525" <<endl;
   do
   {
     /* cout << "0-Sair do programa" << endl;
      cout << "1-" << endl;
      cout << "2-" << endl;
      cout << "3-" << endl;
      cout << "4-" << endl;
      cout << "5-" << endl;
      cout << "6-" << endl;
      cout << "7-"<< endl;
      cout << "8-" << endl;
      cout << "9-" << endl;
      cout << "10-" << endl;*/
      cin >> x;
      cin.get();
      switch(x)
      {
         case 0:
            metodo0();
            break;
         case 1:
            metodo1();
            break;
         case 2:
            metodo2();
            break;
         case 3:
            metodo3();
            break;
         case 4:
            metodo4();
            break;
         case 5:
            metodo5();
            break;
         case 6:
            metodo6();
            break;  
         case 7:
            metodo7();
            break;   
         case 8:
            metodo8();
            break;  
         case 9:
            metodo9();
            break; 
         case 10:
            metodo10();
            break;                            
         default:
            x = 1;
            cout << "Valor invalido, tente outro"<< endl;
      } 
   
   }while(x!=0);
   cout << "Aperte ENTER para sair do programa" << endl;
   cin.get();
   return 0;
}

void metodo0()
{
}
/* ENTRADA: DADOS1.TXT
   SAIDA: O arquivo nao foi criado
   5
   4
   3
   2
   1
   
   ENTRADA: DADOS2.txt
   SAIDA: O arquivo nao foi crado
   
   ENTRADA: DADOS3.TXT
   SAIDA: O arquivo nao foi criado
   52
   4
   3
   2
   1
*/
void metodo1()
{
   char n[30];
   cout << "Digite o nome do arquivo" <<endl;
   cin >> n;
   Array a(n);
   a.if_decres();
   a.print_Array();
   a.free_array();
}
void metodo2()
{
   void invertido(Array* x);
   char n[] ="CRESCENTES.TXT";
   Array a(n); 
   invertido (&a);
   a.print_Array();
   a.free_array();
}
void invertido(Array* x)
{
   ofstream(arquivo);
   arquivo.open("INVERTIDOS.TXT");
   arquivo << x->get_tamanho()<<endl;
   int a = x->get_tamanho()-1;
   int b = 0 ;
   float c = a/2.0;
   for(int aux = 0; aux < c; aux++)
   {
      c = x->get_value(aux);
      x->set_Array(aux, x->get_value(a-aux));
      x->set_Array(a-aux,c);
   }
   for(int aux = 0; aux <= a; aux++)
   {
      cout << x->get_value(aux) << endl;
      arquivo << x->get_value(aux) << endl;
   }
   arquivo.close();
}
void metodo3()
{
   char n[30];
   cout << "Digite o nome do arquivo" <<endl;
   cin >> n;
   Array a(n);
   int x = a.segundomenor();
   cout << x << endl;
   a.free_array();
}
void metodo4()
{
   char n[30];
   cout << "Digite o nome do arquivo 1" <<endl;
   cin >> n;
   cin.get();
   Array a(n);
   char m[30];
   cout << "Digite o nome do arquivo 2" <<endl;
   cin >> m;
   cin.get();
   Array b(m);
   a.filtrados(b); 
   a.free_array();
   b.free_array();
}
void metodo5()
{
   int decimal(Array x);
   int x = 0;
   cout << "Digite o numero de termos: " << endl;
   cin >> x;
   cin.get();
   Array a(x);
   a.set_array_bin();
   x = a.decimal();
   cout << "O numero convertido para deciaml eh: "<< x << endl;
   a.free_array();
}

void metodo6()
{
   int x = 0;
   cout << "Digite o numero de linhas e colunas: " << endl;
   cin >> x;
   cin.get();
   Matrix a(x);
   a.m_tipo1();
   a.print_matrix();
   a.free_matrix();
}
void metodo7()
{
   int x = 0;
   cout << "Digite o numero de linhas e colunas: " << endl;
   cin >> x;
   cin.get();
   Matrix a(x);
   a.m_tipo2();
   a.print_matrix();
   a.free_matrix();
}
void metodo8()
{
}
void metodo9()
{
}
void metodo10()
{
}