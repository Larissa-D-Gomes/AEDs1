#ifndef CONVETER
#define CONVETER

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "Erro.hpp"
using namespace std;
/* Classe Converter Converter.hpp - v0.0.1 - 22 / 11 / 2019    Author: Larissa Domingues Gomes-650525    */ 
class Converter : public Erro
{
   private:
   std::string c;
   int tamanho_c;
   public:
   Converter()
   {
      this->c = "";
      this->tamanho_c=0;
   }
   ~Converter()
   {
   }
   Converter(std::string c)
   {
      this->c = c;
      this->tamanho_c=this->c.length();
   }
   Converter(char* c)
   {
      this->c = c;
      this->tamanho_c=this->c.length();
   }
   int get_int()
   {
      bool v = (this->c != "");
      int a = 1;
      int num = 0;
      int aux = tamanho_c-1;
      if(!v)
         id_erro(1); 
      while(aux>=0 && v)
      {
         v = (this->c[aux] >= '0' && '9' >= this->c[aux]); 
         if(v)
         {
            num+=((int)this->c[aux]-48)*a;
            a*=10;
            aux--;
         }
         else
         {
            num = -1;
            id_erro(2);
         }
      }
      return num;
   }
   std::string get_string()
   {
      return this->c;
   }
   double get_double()
   {
      bool v = (this->c != "");
      double a = 1;
      double decimais = 0;
      double num = 0;
      int aux = tamanho_c-1;
      if(!v)
         id_erro(1); 
      while(this->c[aux] != '.' && v && aux >= 0)
      {
         v = (this->c[aux] >= '0' && '9' >= this->c[aux] || this->c[aux] == '.'); 
         if(v && this->c[aux] != '.')
         {
            num+=((int)this->c[aux]-48)*a;
            a*=10;
            aux--;
            decimais++;
         }
         else
         {
            if(this->c[aux] != '.')
            {
               num = 0.0;
               id_erro(2);
            }
         }
      }
      if(this->c[aux] == '.')
      { 
         num = num/pow(10,decimais);
         aux--;
         a = 1;
         while(aux>=0 && v)
         {
            v = (this->c[aux] >= '0' && '9' >= this->c[aux]); 
            if(v)
            {
               num+=((int)this->c[aux]-48)*a;
               a*=10;
               aux--;
            }
            else
            {
               num = 0.0;
               id_erro(2);
            }
         }
      }
      return num;
   }
   bool get_bool()
   {
      bool resp = (this->c == "");
      if(resp)
      {
         resp = false;
         id_erro(1);
      }
      else
      { 
         resp = (this->c == "1" || this->c == "true" || this->c == "T");
         if(!resp)
         {
            resp =!(this->c == "0" || this->c == "false" || this->c == "F");
            if(resp)
            {
               id_erro(2);
            }
         }
      }
      return resp;
   }
   bool contidos(std::string s)
   {
      bool resp = false;
      if(s != "" || this->c == "")
      {
         int aux = 0;
         int aux2 = 0;
         while(aux < this->c.length() && !resp)
         {
            aux2 = 0;
            resp = (this->c[aux] == s[0]);
            while(resp && aux < this->c.length() && aux2 < s.length()-1)
            {
               aux++;
               aux2++;
               resp = (this->c[aux] == s[aux2]);
            }
            aux++;
         }
      }
      else
         id_erro(1);
      return resp;
   }
   std::string maiusculas()
   {
      string aux;
      if(this->c == "")
      {
         id_erro(1);
      }
      else
      {
         for(int aux2 = 0; aux2 < this->c.length(); aux2++)
         {
            if(this->c[aux2] >= 'a' && 'z' >= this->c[aux2])
            {
               aux+=(char)((int)this->c[aux2]-32);
            }
            else
               aux+=this->c[aux2];
         }
      }
      return aux;
   }
   std::string minusculas()
   {
      string aux;
      if(this->c == "")
      {
         id_erro(1);
      }
      else
      {
         for(int aux2 = 0; aux2 < this->c.length(); aux2++)
         {
            if(this->c[aux2] >= 'A' && 'Z' >= this->c[aux2])
            {
               aux+=(char)((int)this->c[aux2]+32);
            }
            else
               aux+=this->c[aux2];
         }
      }
      return aux;
   }
   std::string* split()
   {
      string* r = new string[15];
      if(this->c != "")
      {
         int num = 0;
         for(int aux = 0; aux < this->tamanho_c; aux++)
         {
            if(this->c[aux] == ' ')
               num++;
            else
               r[num]+=this->c[aux];
         }
      }
      else
         id_erro(1);
      return r;
   }
   std::string* split(char x)
   {
      string* r = new string[15];
      if(this->c != "")
      {
         int num = 0;
         for(int aux = 0; aux < this->tamanho_c; aux++)
         {
            if(this->c[aux] == x )
            {
               num++;
            }
            else
               r[num]+=this->c[aux];
         }
      }
      else
         id_erro(1);
      return r;
   }
   int t_split(std::string s[])
   {
      int c = 0;
      while(s[c] != "")
      {
         c++;
      }
      return c;
   }
   std::string set_char(char o, char n)
   {
      string aux;
      if(this->c == "")
      {
         id_erro(1);
      }
      else
      {
         for(int aux2 = 0; aux2 < this->c.length(); aux2++)
         {
            if(this->c[aux2] == o)
            {
               aux+=n;
            }
            else
               aux+=this->c[aux2];
         }
      }
      return aux;
   }
   std::string cifra_de_cesar()
   {
      string crip;
      if(this->c == "")
      {
         id_erro(1);
      }
      else
      {
         for(int aux = 0; aux < this->tamanho_c; aux++)
         {
            if((this->c[aux] >= 'A' && this->c[aux] <= 'W') ||(this->c[aux] >= 'a' && this->c[aux] <= 'w'))
            {
               crip+=(char)((int)this->c[aux]+3);
            }
            else
            {
               if((this->c[aux] >= 'X' && this->c[aux] <= 'Z') ||(this->c[aux] >= 'x' && this->c[aux] <= 'z'))
               {
                  crip+=(char)((int)this->c[aux]-23);
               }
               else
                  crip+=this->c[aux];
            }    
         }
      }
      return crip;
   }
   std::string cifra_de_cesar_decrip()
   {
      string decrip;
      if(this->c == "")
      {
         id_erro(1);
      }
      else
      {
         for(int aux = 0; aux < this->tamanho_c; aux++)
         {
            if((this->c[aux] >= 'D' && this->c[aux] <= 'Z') ||(this->c[aux] >= 'd' && this->c[aux] <= 'z'))
            {
               decrip+=(char)((int)this->c[aux]-3);
            }
            else
            {
               if((this->c[aux] >= 'A' && this->c[aux] <= 'C') ||(this->c[aux] >= 'a' && this->c[aux] <= 'c'))
               {
                  decrip+=(char)((int)this->c[aux]+23);
               }
               else
                  decrip+=this->c[aux];
            }    
         }
      }
      return decrip;
   }
   void inverter()
   {
      if(this->c != "")
      {
         char auxc;
         for(int aux = 0; aux < this->tamanho_c/2; aux++)
         {
            auxc = this->c[aux];       
            this->c[aux] = this->c[this->tamanho_c-1-aux];
            this->c[tamanho_c-1-aux] = auxc;
         }
      }
      else
         id_erro(1);
   }
};
#endif