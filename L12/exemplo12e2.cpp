#include <iostream>
#include "tipo_matrix.hpp"
/* exemplo112e2 - v0.0.1 - 25 / 10 / 2019    Author: Larissa Domingues Gomes-650525  
    Para compilar em terminal (janela de comandos):    
    Linux      : g++ -o exemplo12e2    exemplo12e2    
    Windows: g++ -o exemplo12e2.exe  exemplo12e2 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo12e2   Windows:   exemplo12e2  */ 
using namespace std;
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
void metodo11();
void metodo12();
int main()
{
   int x = 0;
   cout << "exemplo10e2- v0.0.1" << endl;
   cout << "Author: Larissa Domingues Gomes-650525" <<endl;
   do
   {
      cout << "0-Sair do programa" << endl;
      cout << "1-Criar uma matriz de numeros aleatorios e escrever em arquivo" << endl;
      cout << "2-Ler uma matriz de arquivo e multiplicar por escalar" << endl;
      cout << "3-Ler uma matriz de arquivo e procurar verificar se e identidade" << endl;
      cout << "4-Ler duas matrizes de arquivo verificar se sao iguais com operadores" << endl;     
      cout << "5-Ler duas matrizes de arquivo e soma-las com operador" << endl;
      cout << "6-Ler uma matriz de arquivo e substituir l(1)= l(1)+kl(2)" << endl;
      cout << "7-Ler uma matriz de arquivo e substituir l(1)= l(1)-kl(2)" << endl;
      cout << "8-Ler uma matriz de arquivo e procurar retornando a linha que foi encontrado" << endl;
      cout << "9-Ler uma matriz de arquivo e procurar retornando a coluna que foi encontrado" << endl;
      cout << "10-Ler uma matriz de arquivo e fazer sua transposta" << endl;
      cout << "11-E1" << endl;
      cout << "12-E2" << endl;
      cin >> x;    
      switch (x)
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
         case 11:
            metodo11();
            break;
         case 12:
            metodo12();
            break;
         default:
            x=1;
            cout << "Valor invalido, tente outro"<< endl;
      }
   }while(x != 0);
   cout << "Aperte ENTER para sair do programa" << endl;
   cin.get();
   cin.get();
   return 0;
}
void metodo0()
{

}
void metodo1()
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

void metodo2()
{
   char n[] = "DADOS.TXT";
   int escalar = 0;
   Matrix <int> a = Matrix <int> ("DADOS.TXT");
   if(a.return_linhas() > 0 && a.return_colunas() > 0)
   {
      cout << "Digite o escalar: " << endl;
      cin >> escalar;
      a.escalar_matrix(escalar);
      a.print_matrix();
      a.free_matrix();
   }
}
void metodo3()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a = Matrix <int> (n);
   if(a.return_linhas() > 0 && a.return_colunas() > 0)
   {
      bool r = a.id_matrix();
      if(r)
         cout << "A matriz e identidade " << endl;
      else
         cout << "A matriz nao e identidade" << endl;
      a.print_matrix();
      a.free_matrix();
   }
}
void metodo4()
{
   char n[] = "DADOS1.TXT";
   char m[] = "DADOS2.TXT";
   Matrix <int> a (n);
   Matrix <int> b (m);
   if((a.return_linhas() > 0 && a.return_colunas() > 0) &&(b.return_linhas() > 0 && b.return_colunas()))
   {
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
}
void metodo5()
{
   char n[] = "DADOS1.TXT";
   char m[] = "DADOS2.TXT";
   Matrix <int> a (n);
   Matrix <int> b (m);
   Matrix <int> c (1,1);
   if((a.return_linhas() > 0 && a.return_colunas() > 0) &&(b.return_linhas() > 0 && b.return_colunas()))
   {
      if (a.return_linhas() == b.return_linhas() && a.return_colunas() == b.return_colunas())
      {
         c =a + b;
         c.print_matrix();
         c.free_matrix();
         cout<<c.return_linhas()<<endl;
      }
      a.free_matrix();
      b.free_matrix();
   }
}
void metodo6()
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
      a.free_matrix();
   }
}
void metodo7()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   if((a.return_linhas() > 0 && a.return_colunas() > 0) )
   {
      int constante  = 0;
      if (a.return_linhas() > 1 )
      {
         cout << "Digite a constante que deseja multiplicar a segunda linha da matriz" << endl;
         cin >> constante ;
         a.multp_sub(constante);
         a.print_matrix();
      }
      a.free_matrix();
   }
}
void metodo8()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   if((a.return_linhas() > 0 && a.return_colunas() > 0) )
   {
      int procurado = 0;
      if (a.return_linhas() > 1 )
      {
         cout << "Digite o valor procurado" << endl;
         cin >> procurado;
         int p = a.proc_l(procurado);
         if(p >= 0)
            cout << "O valor foi encontrado na linha: " << p << endl;
         else
            cout << "O valor nao foi encontrado" << endl;
      }
      a.free_matrix();
   }
}
void metodo9()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   int procurado = 0;
   if((a.return_linhas() > 0 && a.return_colunas() > 0) )
   {
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
   }
}
void metodo10()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   if((a.return_linhas() > 0 && a.return_colunas() > 0) )
   {
      a.transposta();
      a.print_matrix();
      a.free_matrix();
   }
}
void metodo11()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   if((a.return_linhas() > 0 && a.return_colunas() > 0) )
   {
      int procurado = 0;
      bool r = a.matriz_ql();
      cout << r << endl;
      a.free_matrix();
   }
}
void metodo12()
{
   char n[] = "DADOS.TXT";
   Matrix <int> a (n);
   if((a.return_linhas() > 0 && a.return_colunas() > 0) )
   {
      int procurado = 0;
      bool r = a.matriz_qc();
      cout << r << endl;
      a.free_matrix();
   }
}