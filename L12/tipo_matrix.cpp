#ifndef tipo_matrix
#define tipo_matrix

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
template <typename TIPO>
class Matrix
{
   private:
   int colunas;
   int linhas;
   TIPO** matriz;
      
   public:
   Matrix (int l, int c)
   {
      if(l > 0 && c > 0)
      {
         linhas = l;
         colunas = c;
         matriz = new TIPO* [linhas];
         for(int aux = 0; aux < linhas; aux++)
         {
            matriz[aux] = new TIPO [colunas];
         }
      }
      else
         cout << "Erro, linhas e colunas invalidas " << endl;
   }
   void random_matrix(int i, int s)
   {
      srand(time(NULL));  
      for(int aux =  0; aux < linhas; aux++)
      {
         for(int aux2 = 0; aux2< colunas; aux2++)
         {
            matriz[aux][aux2] = i+(rand()%s);      
         } 
      } 
      char c[]= "DADOS.TXT" ;
      Matrix::print_matrix(c);
   }
   TIPO* return_matriz(int i, int j)
   {
      return &(matriz[i][j]);
   }
   void print_matrix(char n[])
   {
      ofstream arq;
      arq.open (n);
      if(matriz != NULL)
      {
         arq << linhas<<endl;
         arq << colunas<<endl;
         for(int aux =  0; aux < linhas; aux++)
         {
            for(int aux2 = 0; aux2< colunas; aux2++)
            {
               arq << matriz[aux][aux2] << endl;      
            } 
         }
         arq.close(); 
      }
   }
   void free_matrix()
   {
      if(matriz!= NULL)
      {
         for(int  aux = 0; aux < colunas; aux++)
         {
            delete (matriz[aux]);
         }
         delete (matriz);
      }
   }  
   void escrever_matrix()
   {
      if(matriz != NULL)
      {
         for(int aux =  0; aux < linhas; aux++)
         {
            for(int aux2 = 0; aux2< colunas; aux2++)
            {
               printf("Digite o termo [%d][%d]: \n", aux, aux2);
               cin >> matriz[aux][aux2];      
            } 
         }
      }
   }
   
   Matrix(string n)
   {
      ifstream arq;
      arq.open(n.c_str());
      arq >> linhas;
      arq >> colunas;
      if(linhas > 0 && colunas > 0)
      {
         matriz = new TIPO*[linhas];
         for (int aux = 0; aux < linhas ; aux++)
         {
            matriz[aux]= new TIPO[colunas];
         }
         for(int aux =  0; aux < linhas; aux++)
         {
            for(int aux2 = 0; aux2< colunas; aux2++)
            {
               arq >> matriz[aux][aux2];      
            } 
         }
      }
      else 
      {
         cout << "Erro, linhas e colunas invalidos" <<endl;
         linhas = -1;
         colunas = -1;
      }
      arq.close();
   }
   void print_matrix()
   {
      if(matriz != NULL)
      {
         for(int aux =  0; aux < linhas; aux++)
         {
            for(int aux2 = 0; aux2< colunas; aux2++)
            {
               cout << matriz[aux][aux2] << " ";      
            } 
            cout<< endl;
         }
      }
   }
   void escalar_matrix(int esc)
   {
      for(int aux =  0; aux < linhas; aux++)
      {
         for(int aux2 = 0; aux2< colunas; aux2++)
         {
            matriz[aux][aux2] = esc*matriz[aux][aux2];      
         } 
      }
   }  
   bool id_matrix()
   {
      bool r = true;
      int aux = 0;
      int aux2 = 0;
      r = (linhas == colunas);
      while ( r &&  aux < linhas)
      {
         while ( r && aux2 < colunas)
         {
            if(aux == aux2)
            {
               r = (matriz[aux][aux2] == 1);
            }
            else
            {
               r = (matriz[aux][aux2] == 0);
            }
            aux2++;
         }
         aux++;
         aux2 = 0;
      }
      return r;
   }
   bool operator==(Matrix <TIPO> x)
   {
      bool r = true;
      int aux = 0;
      int aux2 = 0;
      r = (x.colunas == this->colunas && x.linhas == this->linhas);
      while(r && aux < this->linhas)
      {
         while(r && aux2 < this->colunas)
         {
            r = (x.matriz[aux][aux2] == this->matriz[aux][aux2]);
            aux2++;
         }
         aux++;
         aux2 = 0;
      }
      
      return r;
   }
   int return_linhas()
   {
      return this->linhas;
   }
   int return_colunas()
   {
      return this->colunas;
   }
   Matrix & operator + (Matrix <TIPO> x)
   {
      static Matrix <TIPO> r(x);
      for (int aux = 0; aux < this->linhas; aux++)
      {
         for(int aux2 = 0; aux2 < this->colunas; aux2++)
         {
            r.matriz[aux][aux2] = this->matriz[aux][aux2] + x.matriz[aux][aux2];
         }
      }
      return r;
   } 
   
   void multp_soma(int k)
   {
      for(int aux = 0; aux < this->colunas; aux++)
      {
         this->matriz[0][aux] = this->matriz[0][aux] + k*this->matriz[1][aux]; 
      }
   }
   void multp_sub(int k)
   {
      for(int aux = 0; aux < this->colunas; aux++)
      {
         this->matriz[0][aux] = this->matriz[0][aux] - k*this->matriz[1][aux]; 
      }
   }
   int proc_l( int p )
   {
      int retorno = -1;
      int aux = 0;
      int aux2 = 0;
      while (aux < this->linhas && retorno < 0)
      {
         while (aux2 < this->colunas && retorno < 0)
         {
            if( p == this->matriz[aux][aux2])
            {
               retorno = aux;
            }
            aux2++;
         }
         aux2 = 0;
         aux++;
      }
      return retorno;
   }
   
   int proc_c( int p )
   {
      int retorno = -1;
      int aux = 0;
      int aux2 = 0;
      while (aux < this->linhas && retorno < 0)
      {
         while (aux2 < this->colunas && retorno < 0)
         {
            if( p == this->matriz[aux][aux2])
            {
               retorno = aux2;
            }
            aux2++;
         }
         aux2 = 0;
         aux++;
      }
      return retorno;
   }
   void transposta()
   {
      Matrix <TIPO> m (this->colunas, this->linhas);
      int v = 0;
      for(int aux = 0; aux < this->linhas; aux++)
      {
         for(int aux2 = 0; aux2 < this->colunas; aux2++)
         {
            m.matriz[aux2][aux] = this->matriz[aux][aux2];
         }
      }
      v = linhas;
      linhas = colunas;
      colunas = v;
      matriz = new TIPO* [linhas];
      for(int aux = 0; aux < linhas; aux++)
      {
         matriz[aux] = new TIPO [colunas];
      }
      for(int aux = 0; aux < this->linhas; aux++)
      {
         for(int aux2 = 0; aux2 < this->colunas; aux2++)
         {
            this->matriz[aux][aux2]=m.matriz[aux][aux2];
         }
      }
      m.free_matrix();
   }
   bool matriz_ql()
   {
      bool resp = 0;
      int aux = 0;
      int aux2 = 0;
      int comparador = 1;
      resp = (this->linhas == this->colunas);
      while( resp && aux < linhas)
      {
         while(resp && aux2 < colunas)
         {
            resp = (matriz[aux][aux2] == comparador);
            comparador++;
            aux2++;        
         }
         aux++;
         aux2 = 0;
      } 
      return resp;
   }
      bool matriz_qc()
   {
      bool resp = 0;
      int aux = 0;
      int aux2 = 0;
      int comparador = 1;
      resp = (this->linhas == this->colunas);
      while( resp && aux < linhas)
      {
         while(resp && aux2 < colunas)
         {
            resp = (matriz[aux2][aux] == comparador);
            comparador++;
            aux2++;        
         }
         aux++;
         aux2 = 0;
      } 
      return resp;
   }
};



#endif