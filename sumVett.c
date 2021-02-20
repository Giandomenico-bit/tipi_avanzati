/* SumVett

Si scriva una programma C che, dopo aver chiesto all'utente
tre numeri interi, li memorizzi all'interno di
un vettore, li sommi, ne calcoli la media
e infine stampi tutti i dati e i risultati. */

#include <stdio.h>

int main( void ){

  float array[ 3 ];
  float res;
  float media;

  printf( "%s", "Primo valore : " );
  scanf( "%f", &array[ 0 ] );
  printf( "%s", "Secondo valore : " );
  scanf( "%f", &array[ 1 ] );
  printf( "%s", "Terzo valore : " );
  scanf( "%f", &array[ 2 ] );

  res = array[ 0 ] + array[ 1 ] + array[ 2 ];
  media = res / 3.0;

  printf( "\nSomma : %.2f\n", res );
  printf( "Media : %.2f\n", media );

  return 0;
}
