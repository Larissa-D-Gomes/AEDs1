#ifndef tipo_matrix
#define tipo_matrix

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;
class Matrix
{
private:
   int rows;
   int columns;
   int** matriz;
public:
   Matrix(int rows, int columns)
   {
      if(rows > 0 && columns > 0)
      {
         this->rows = rows;
         this->columns = columns;
         this->matriz = new int* [rows];
         for(int aux = 0; aux < columns; aux++)
         {
            this->matriz[aux] = new int [columns];
         }
      }
      else
      {
         this->rows = 0;
         this->columns = 0; 
      }
   }
   Matrix(int x)
   {
      if(x>0)
      {
         this->rows = x;
         this->columns = x;
         this->matriz = new int* [x];
         for(int aux = 0; aux < x; aux++)
         {
            this->matriz[aux] = new int [x];
         
         }
      }
      else
      {
         this->rows = 0;
         this->columns = 0; 
      }
   }
   void free_matrix()
   {
      for(int aux = 0; aux < columns; aux++)
      {
         delete(this->matriz[aux]);
      } 
      delete(this->matriz);
   }
   void set_matrix(int l, int c, int n)
   {
      if(l >= 0 && c >= 0 && l < this->rows && c < this->columns)
      {
         this->matriz[l][c] = n;
      }
   }
   int get_matrix(int l, int c)
   {
      if(l >= 0 && c >= 0 && l < this->rows && c < this->columns)
      {
         return this->matriz[l][c];
      }
   }
   void print_matrix()
   {
      for(int aux = 0; aux < this->rows; aux++)
      {
         for(int aux2 = 0; aux2 < this->rows; aux2++)
         {
            std::cout << this->matriz[aux][aux2] << " " ;
         }
         std::cout << std::endl;
      }
   }
   void m_tipo1()
   {
      if(this->rows == this->columns && this->rows > 0)
      {
         int c = 2;
         this->matriz[0][0] = c-1;
         this->matriz[0][1] = c;
         int aux2 = 0;
         for(int aux = 2; aux < this->rows; aux++)
         {
            this->matriz[0][aux] = 0;
         }
         for(int aux = 1; aux < this->rows-1; aux++)
         {
            for(int x = 0; x < aux-1; x++ )
            {
               this->matriz[aux][aux2] = 0;
               aux2++;
            }
            for(int x = 0; x < 3; x++ )
            {
               c++;
               this->matriz[aux][aux2] =  c;              
               aux2++;
            }
            for(int x = 0; x < this->rows; x++ )
            {
               this->matriz[aux][aux2] =  0;               
               aux2++;
            }
            aux2 = 0;
         }
         c++;
         for(int aux = 0; aux < this->rows-2; aux++)
         {
            this->matriz[this->rows-1][aux] = 0;
         }
         this->matriz[this->rows-1][this->rows-2] = c;
         this->matriz[this->rows-1][this->rows-1] = c+1;
      }
      else 
         std::cout << "ERRO, VALORES INVALIDOS" << std::endl;
   }
   void m_tipo2()
   {
      if(this->rows == this->columns && this->rows > 0)
      {  
         int c = 2;
         int r = 0;
         int aux2 = this->rows-1;
         this->matriz[this->rows-2][this->rows-1] = c-1;
         this->matriz[this->rows-1][this->rows-1] = c;
         for(int aux = this->rows-3; aux > 0; aux--)
         {
            this->matriz[aux][this->rows-1] = 0;
         }        
         for(int aux = this->rows-2; aux >= 0; aux--)
         {
            for(int x = 0; x < r; x++)
            {     
               this->matriz[aux2][aux] = 0;
               aux2--;
               //std::cout << matriz[aux2+1][aux]<< std::endl;
            }
            for(int x = 3; x >= 0 ; x--)
            {     
               c++;
               this->matriz[aux2][aux] = c;
              // std::cout << matriz[aux2][aux]<< std::endl;
               aux2--;
            } 
            while(aux2 >= 0)
            {     
               this->matriz[aux2][aux] = 0;
               //std::cout << matriz[aux2][aux]<< std::endl;
               aux2--;
            }             
            aux2 = this->rows-1;
            r++;
            std::cout << aux << std::endl;
         }
         this->matriz[0][0] = c;
         this->matriz[1][0] = c+1;  
         for(int aux = 2; aux < this->rows; aux++)
         {
            //std::cout << matriz[aux2][aux]<< std::endl;
            this->matriz[aux][0] = 0;
         }
      }
      else
         std::cout << "ERRO, VALORES INVALIDOS" << std::endl;
   
   }
   
};



#endif