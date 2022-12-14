// dependencias
#include "io.h" // para definicoes proprias

/**
 Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )

/**
Method01a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method01a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 0 )
{
// mostrar valor
IO_printf ( "%s%d\n", "Valor = ", x );
// passar ao proximo
method01a ( x - 1 ); // motor da recursividade
} // fim se
} // fim method01a( )

/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// definir dado
int quantidade = 0;
int valor = 0;
int controle = 0;
// identificar
IO_id ( "EXEMPLO0601 - Method01 - v0.0" );
// executar o metodo auxiliar
method01a ( 5 ); // motor da recursividade
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

/**
Method02a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method02a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 0 )
{
// passar ao proximo
method02a ( x - 1 ); // motor da recursividade
// mostrar valor
IO_printf ( "%s%d\n", "Valor = ", x );
} // fim se
} // fim method02a( )

/**
Method02.
*/
void method02 ( )
{
// identificar
IO_id ( "EXEMPLO0602 - Method02 - v0.0" );
// executar o metodo auxiliar
method02a ( 5 ); // motor da recursividade
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

/**
Method03a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method03a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 1 )
{
// passar ao proximo
method03a ( x - 1 ); // motor da recursividade
// mostrar valor
IO_printf ( "%s%d\n", "Valor = ", x );
}
else
{ // base da recursividade
// mostrar o ultimo
IO_printf ( "%s\n", "Valor = 1" );
} // fim se
} // fim method03a( )

/**
Method03.
*/
void method03 ( )
{
// identificar
IO_id ( "EXEMPLO0603 - Method03 - v0.0" );
// executar o metodo auxiliar
method03a ( 5 ); // motor da recursividade
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )

/**
Method04a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method04a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 1 )
{
// passar ao proximo
method04a ( x - 1 ); // motor da recursividade
// mostrar valor
IO_printf ( "%s%d\n", "Valor = ", 2*(x-1) );
}
else
{ // base da recursividade
// mostrar o ultimo
IO_printf ( "%s\n", "Valor = 1" );
} // fim se
} // fim method04a( )

/**
Method04.
*/
void method04 ( )
{
// identificar
IO_id ( "EXEMPLO0604 - Method04 - v0.0" );
// executar o metodo auxiliar
method04a ( 5 ); // motor da recursividade
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )

/**
Method05a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method05a ( int x )
{
// repetir enquanto valor maior que zero
if ( x > 1 )
{
// passar ao proximo
method05a ( x - 1 ); // motor da recursividade
// mostrar valor
IO_printf ( "%d: %d/%d\n", x, (2*(x-1)), (2*(x-1)+1) );
}
else
{ // base da recursividade
// mostrar o ultimo
IO_printf ( "%d; %d\n", x, 1 );
} // fim se
} // fim method05a( )

/**
Method05.
*/
void method05 ( )
{
// identificar
IO_id ( "EXEMPLO0605 - Method05 - v0.0" );
// executar o metodo auxiliar
method05a ( 5 ); // motor da recursividade
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main ( )
{
// definir dado
 int x = 0; // definir variavel com valor inicial
// repetir at?? desejar parar
 do
 {
 // identificar
 IO_id ( "EXEMPLO0605 - Programa - v0.0" );
 
 // ler do teclado
 IO_println ( "Opcoes" );
 IO_println ( " 0 - parar" );
 IO_println ( " 1 - mostrar certa quantidade de valores positivos decrescentes" );
 IO_println ( " 2 - mostrar certa quantidade de valores positivos crescentes" );
 IO_println ( " 3 - mostrar certa quantidade de valores positivos crescentes (2)" );
 IO_println ( " 4 - mostrar certa quantidade de valores positivos em sequencia" );
 IO_println ( " 5 - mostrar certa quantidade de valores fracionarios" );
 IO_println ( "" );
 x = IO_readint ( "Entrar com uma opcao: " );
 
 // testar valor
 switch ( x )
 {
 case 0:
 method00 ( );
 break;
 case 1:
 method01 ( );
 break;
 case 2:
 method02 ( );
 break;
 case 3:
 method03();
 break;
 case 4:
 method04();
 break;
 case 5:
 method05();
 break;
 default:
 IO_println ( "ERRO: Valor invalido." );
 } // fim escolher
 }
 while ( x != 0 );
// encerrar
 IO_pause ( "Apertar ENTER para terminar" );
 return ( 0 );
} // fim main( )