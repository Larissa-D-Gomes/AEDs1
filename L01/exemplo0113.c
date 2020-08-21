/*    Exemplo0201 - v0.0. - __ / __ / _____    Author: ________________________        Para compilar em terminal (janela de comandos):    Linux      : gcc -o exemplo0201        exemplo0201.c    Windows: gcc -o exemplo0201.exe exemplo0201.c 
 
   Para executar em terminal (janela de comandos):    Linux      :  ./exemplo0201    Windows:    exemplo0201  */ // dependencias
   #include "io.h" 
int main ( )
{
   int x = 0; 
   IO_id ( "EXEMPLO0201 - Programa - v0.0" ); 
   x = IO_readint ( "Entrar com um valor inteiro: " ); 
   if ( x == 0 ) 
   {       
      IO_printf ( "%s (%d)\n", "Valor igual a zero", x );     
   }    
   if ( x != 0 )   
   {      
      IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x );   
   } // fim se 
   IO_pause ( "Apertar ENTER para terminar" );   
   return ( 0 ); 
} 
