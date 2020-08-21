#ifndef Array_C
#define Array_C
#include <iostream>
#include <fstream>
#include <cmath>
class Array
{
private:
   int tamanho;
   int* arranjo;
   bool decres()
   {
      bool r = this->tamanho > 1;
      int aux = this->tamanho-1;
      while(r && aux > 0)
      {
         r = (this->arranjo[aux-1] > this->arranjo[aux]);
         aux--;
      }      
      return r;
   }
public:
   Array()
   {
      this->tamanho = 0;
   }
   Array(int n)
   {
      if(n>0)
      {
         this->tamanho = n;
         this->arranjo = new int[this->tamanho];
      }
      else
      {
         this->tamanho = 0;
      }
   }
   Array(char c[])
   {
      std::ifstream arq;
      arq.open(c);
      int x = 0;
      arq >> x;
      if(x > 0)
      {
         this->tamanho = x;
         this->arranjo = new int[x];
         for(int aux = 0 ; aux < this->tamanho; aux++)
         {
            arq >> this->arranjo[aux];
         }
      }
      else
         this->tamanho = 0;
      arq.close();
   }
   void free_array()
   {
      delete(this->arranjo);
   }
   ~Array()
   {
   }
   void set_Array(int p, int n)
   {
      if(p < this->tamanho && p >= 0) 
      {
         this->arranjo[p] = n;
      }
   }
   void set_Array_all()
   {
      for(int aux = 0 ; aux < this->tamanho; aux++)
      {
         std::cout << "Digite o numero na posicao ["<< aux << "]"<< std::endl;
         std::cin >> this->arranjo[aux];
      }
   }
   void print_Array()
   {
      if(this->tamanho > 0)
      {
         for(int aux = 0 ; aux < this->tamanho; aux++)
         {
            std::cout << this->arranjo[aux] << " " << std::endl;
         } 
      }
   }
   int get_value(int n)
   {
      return this->arranjo[n];
   }
   void if_decres()
   {
      if(!decres() && this->tamanho > 0)
      {
         std::ofstream(arq);
         arq.open( "DECRESCENTE.TXT");
         int a = 0;
         arq << this->tamanho <<std::endl;
         for(int aux =0; aux < this->tamanho; aux++)
         {
            for(int aux2 = aux; aux2 < this->tamanho; aux2++)
            {
               if(this->arranjo[aux2] > this->arranjo[aux])
               {
                  a = this->arranjo[aux2];
                  this->arranjo[aux2] = this->arranjo[aux];
                  arranjo[aux] = a;
               }
            } 
            arq << arranjo[aux]; 
            arq << std::endl;
         }
         arq.close();
         std::cout<< "O arquivo foi craido " << std::endl; 
      }
      else
         std::cout << "O arquivo nao foi criado " << std::endl;
   }
   int get_tamanho()
   {
      return tamanho;
   } 
   int segundomenor()
   {
      int seg_m = this->arranjo[0];
      int menor = this->arranjo[0];
      for(int aux = 1; aux < this->tamanho; aux++)
      {
         if(menor > this->arranjo[aux])
         {
            menor = this->arranjo[aux];
         }
      } 
      for(int aux = 1; aux < this->tamanho; aux++)
      {
         if(menor < this->arranjo[aux] && this->arranjo[aux] < seg_m)
         {
            seg_m = this->arranjo[aux];
            std::cout << seg_m << std::endl;
         }
      } 
      return seg_m;
   }  
   void filtrados(Array other)
   {
      std::ofstream(arq);
      arq.open("FILTRADOS.TXT");
      int quant = 0;
      int aux3 = 0;
      bool r = true;
      if(this->tamanho > other.tamanho)
      {
         int* comp = new int[other.tamanho];
         for(int aux = 0; aux < this->tamanho; aux++)
         {
            for(int aux2 = 0; aux2 < other.tamanho; aux2++)
            {
               if(this->arranjo[aux] == other.arranjo[aux2])
               {
                  while(r && aux3 < quant)
                  {
                     r =(this->arranjo[aux] != comp[aux3]);
                     aux3++;
                  }
                  if(r)
                  {
                     comp[quant] = this->arranjo[aux];
                     quant++;
                  }
                  r = true;
                  aux3 = 0;
               }
            }
         }
         arq << quant << std::endl;
         for(int aux = 0; aux < quant; aux++)
         {  
            arq << comp[aux] << std::endl; 
         }    
         delete (comp);
      }
      else
      {
         int* comp = new int[this->tamanho];
         for(int aux = 0; aux < other.tamanho; aux++)
         {
            for(int aux2 = 0; aux2 < this->tamanho; aux2++)
            {
               if(this->arranjo[aux2] == other.arranjo[aux])
               {                  
                  while(r && aux3 < quant)
                  {
                     r =(other.arranjo[aux] != comp[aux3]);
                  }
                  if(r)
                  {
                     comp[quant] = other.arranjo[aux];
                     quant++;
                  }
                  r = true;
               
               }
            }
         }  
         arq << quant << std::endl;
         for(int aux = 0; aux < quant; aux++)
         {  
            arq << comp[aux] << std::endl; 
            std::cout << comp[aux] << std::endl; 
         }    
         delete (comp);
      }
      arq.close();
   }
   void set_array_bin()
   {
      for(int aux = 0; aux < this->tamanho; aux++)
      {
         do
         {
            std::cout << "Digite o termo [" << aux <<"] do arranjo " << std::endl;
            std::cin >> this->arranjo[aux];
            if(this->arranjo[aux] != 1 && this->arranjo[aux] != 0)
               std::cout << "Valor invalido, tente outro "<<std::endl;
         }while(this->arranjo[aux] != 1 && this->arranjo[aux] != 0 );
      }
   }
   int decimal()
   {
      int resp = 0;
      int c = 0;
      int aux2 = 0;
      for(int aux = this->tamanho-1; aux >= 0 ; aux--)
      {
         resp+=this->arranjo[aux]*pow(2,aux2);
         aux2++;
      }
      return resp;
   }
};

#endif