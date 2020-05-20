/** 
*	Classe para tratar erro. 
  */ 
 
#ifndef  _ERRO_H_ 
#define _ERRO_H_ 
#include <iostream>
class Erro 
{
private:
   int erro;
   
public:

   Erro()
   {
      erro = 0;
   }
   ~Erro()
   {   
   }
   int retorno_erro()
   {
      return(erro);
   }
   bool retorno_exerro()
   {
      return(erro != 0);
   }
   void id_erro(int x)
   {
      erro = x;
   }
   virtual std::string mensagem()
   {
      switch (erro)
      {
         case 0:
            return "NO_ERROR";
            break;
         case 1:
            return "MISSING DATA";
            break;   
         case 2:
            return "INVALID DATA";
            break;
      }
   }
   
}; 

#endif 
 
