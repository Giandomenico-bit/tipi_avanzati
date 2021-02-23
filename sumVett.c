/* SumVett

Si scriva una programma C che, dopo aver chiesto all'utente
tre numeri interi, li memorizzi all'interno di
un vettore, li sommi, ne calcoli la media
e infine stampi tutti i dati e i risultati. */

#include <stdio.h>

int main( void ){

  int array[ 3 ], res;
  double media;

  printf( "%s", "Inserisci tre valori :\n" );

  printf( "\n%s", ": " );
  scanf( "%d", &array[ 0 ] );
  printf( "%s", ": " );
  scanf( "%d", &array[ 1 ] );
  printf( "%s", ": " );
  scanf( "%d", &array[ 2 ] );

  printf( "\n%s\n", "Dati iniziali : " );

  printf( "\nnumero[ %d ] = %d\n", 0, array[ 0 ] );
  printf( "numero[ %d ] = %d\n", 1, array[ 1 ] );
  printf( "numero[ %d ] = %d\n", 2, array[ 2 ] );

  res = array[ 0 ] + array[ 1 ] + array[ 2 ];
  media = ( double )res / 3.0;

  printf( "\nSomma : %d\n", res );
  printf( "Media : %.2f\n", media );

  return 0;
}
