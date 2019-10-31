/* SumVett

Si scriva una programma C che, dopo aver chiesto all'utente
tre numeri interi, li memorizzi all'interno di
un vettore, li sommi, ne calcoli la media
e infine stampi tutti i dati e i risultati. */

#include <stdio.h>

int main( void ){

  int value1;
  int value2;
  int value3;
  int array[ 3 ];
  int sum;
  float media;

  printf( "? : " );
  scanf( "%d", &value1 );
  printf( "? : " );
  scanf( "%d", &value2 );
  printf( "? : " );
  scanf( "%d", &value3 );

  array[ 0 ] = value1;
  array[ 1 ] = value2;
  array[ 2 ] = value3;

  sum = array[ 0 ] + array[ 1 ] + array[ 2 ];
  media = ( float )sum / 3.0;

  printf( "Somma : %d\n", sum   );
  printf( "Media : %.2f\n", media );

  return 0;
}
