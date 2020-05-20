#ifndef TIPO_ARRAY
#define TIPO_ARRAY

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
template <typename TIPO>
class Arranjo
{
   private:
   int tamanho;
   TIPO* array;   
      
   public:
   Arranjo (int x)
   {
      tamanho = x;
      array = NULL;
      if (x > 0)
      {
         array = new TIPO[tamanho];
      }
   }
   void free ()
   {
      if (array != NULL)
      {
         delete (array);
         array = NULL;
      }
   }
   void escreverdados(TIPO x, int posicao)
   {
      if(posicao >= 0 && posicao < tamanho)
         array[posicao] = x ;
   }
   void aleatorioarq()
   {
      ofstream arquivo;
      arquivo.open("DADOS.TXT");
      arquivo << tamanho <<"\n";
      for (int a = 0; a < tamanho; a++)
      {
         arquivo << array[a] <<"\n";
      }
      arquivo.close();
   }

   void escreverdadosale(int x, int y)
   {
      void aleatorioarq();
      srand(time(NULL));
      for (int aux= 0; aux < tamanho ; aux++)
      {
         array[aux] = (x + (rand()%y));  
      }
      Arranjo::aleatorioarq();
   }

   TIPO retorno (int posicao)
   {
      TIPO resp = 0;
      if(posicao >= 0 && posicao < tamanho)
         resp = array[posicao] ;
      return resp;
   }
   int retornotamanho()
   {
      return tamanho;
   }
   Arranjo ( char n[] )   
   { 
      ifstream arq; // input file
      int x = 0;
      arq.open ( n );
      arq >> x;  
      if ( x <= 0 )
      {   
         cout << "\nERROR: Invalid length.\n" << endl;
         x = -1;     
      }   
      else   
      { 
         tamanho  = x;  
         array    = new TIPO [x];         // ler dados         
         for ( int aux = 0; aux < tamanho; aux++ )           
         {
            arq >> array[ aux ];   
         } 
      }   
      arq.close ( );     
   }
   int procurarmaior()
   {
      int m = array[0];
      for(int aux = 1; aux < tamanho ; aux++)
      {
         if(m < array[aux])
         {
            m =array[aux];
         }
      }
      return m;
   }
   int procurarmenor()
   {
      int m = array[0];
      for(int aux = 1; aux < tamanho ; aux++)
      {
         if(m > array[aux])
         {
            m =array[aux];
         }
      }
      return m;
   }
   int somaarranjo()
   {
      int soma = 0;
      for(int aux = 0; aux < tamanho; aux++)
      {
         soma+=array[aux];
      }
      return soma;
   }
   double mediaarray()
   {
      double media = 0.0;
      media = somaarranjo()/tamanho;
      return media;
   }
   
   bool arrayzero()
   {
      bool ret = true;
      int aux = 0;
      while(ret == true && aux < tamanho)
      {
         ret = (array[aux] == 0);
         aux++;
      }
      return ret;
   }

   bool arrayord()
   {
      bool ret = true;
      int aux = 0;
      while(ret == true && aux < tamanho - 1)
      {
         ret = (array[aux] <= array[aux+1]);
         aux++;
      }
      return ret;
   }
   bool acharvalor(int i, int s, int p)
   {
      bool ret = false;
      int aux = i;
      while(ret == false && aux < s)
      {
         ret = (array[aux] == p);
         aux++;
      }
      return ret;
   }
   void escalar(int k)
   {
      for (int aux = 0; aux < tamanho; aux++)
      {
         array[aux]=array[aux]*k;
      }
   }
   void printarray()
   {
      for (int aux = 0; aux < tamanho; aux++)
      {
         cout<<array[aux]<<endl;
      }   
   }
   void sort()
   {
      int tmp = 0;
      for (int aux = 0; aux < tamanho; aux++)
      {
         for(int aux2 = aux + 1; aux2< tamanho; aux2++)
         {
            if(array[aux2] < array[aux])
            {
               tmp = array[aux2];
               array[aux2]=array[aux];
               array[aux]=tmp;
            }
         } 
      }
   }
   bool operator!=(const Arranjo <TIPO>* x)
   {
      bool resp = false;
      int aux = 0;
      resp = (this->tamanho == x->tamanho);
      while (resp && aux < this->tamanho )
      {
         resp = (this->array[aux] == x->array[aux]);
         aux++;
      }
      return resp;
   }
   Arranjo& operator -(Arranjo <TIPO> x)
   {
      static Arranjo <TIPO> r (x);
      if (this->tamanho == x.tamanho)
      { 
         for(int aux = 0 ; aux < this->tamanho; aux++)
         {
            r.array[aux]=this->array[aux]- x.array[aux];
         }
      }
      else 
         cout<< "Erro, impossivel subtrair" << endl;
     return r;
   }
   Arranjo & operator = (Arranjo <TIPO>* x)
   {
      if (x->tamanho <= 0)
      {
         cout << "Error" << endl;
      }
      else
      {
         this->tamnho = x->tamnho;
         array = new TIPO[this->tamanho];
         for(int aux = 0 ; aux < this->tamanho; aux++)
         {
            this->array[aux] = x->array[aux];
         }
      }
   }
} ;

#endif