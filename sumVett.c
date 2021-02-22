/* SumVett

Si scriva una programma C che, dopo aver chiesto all'utente
tre numeri interi, li memorizzi all'interno di
un vettore, li sommi, ne calcoli la media
e infine stampi tutti i dati e i risultati. */

#include <stdio.h>

int main( void ){

  int array[ 3 ], res;
  float media;

  printf( "%s", "Primo valore : " );
  scanf( "%d", &array[ 0 ] );
  printf( "%s", "Secondo valore : " );
  scanf( "%d", &array[ 1 ] );
  printf( "%s", "Terzo valore : " );
  scanf( "%d", &array[ 2 ] );

  res = array[ 0 ] + array[ 1 ] + array[ 2 ];
  media = ( float )res / 3.0;

  printf( "\nSomma : %d\n", res );
  printf( "Media : %.2f\n", media );

  return 0;
}
