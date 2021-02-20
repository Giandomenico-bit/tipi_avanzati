/* Asterischi

Si scriva un programma che stampi 3
asterischi ( uno per riga ) a
distanza di 700 millisecondi l'uno dall'altro. */

#include <stdio.h>
#include <time.h>

int main( void ) {

  struct timespec intervallo;

  intervallo.tv_sec = 0;
  intervallo.tv_nsec = 700 * 1000 * 1000;

  printf( "%c\n", '*' );
  nanosleep( &intervallo, NULL );
  printf( "%c\n", '*' );
  nanosleep( &intervallo, NULL );
  printf( "%c\n", '*' );
  nanosleep( &intervallo, NULL );

  return 0;
}
